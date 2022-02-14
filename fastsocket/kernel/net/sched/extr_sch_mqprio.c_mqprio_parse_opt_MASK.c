
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_mqprio_qopt {int num_tc; int* prio_tc_map; unsigned int* offset; unsigned int* count; scalar_t__ hw; } ;
struct net_device {unsigned int real_num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_3, struct tc_mqprio_qopt *VAR_4)
{
 int VAR_5, VAR_6;


 if (VAR_4->num_tc > VAR_2)
  return -VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_1 + 1; VAR_5++) {
  if (VAR_4->prio_tc_map[VAR_5] >= VAR_4->num_tc)
   return -VAR_0;
 }


 if (VAR_4->hw) {




  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->num_tc; VAR_5++) {
  unsigned int VAR_7 = VAR_4->offset[VAR_5] + VAR_4->count[VAR_5];




  if (VAR_4->offset[VAR_5] >= VAR_3->real_num_tx_queues ||
      !VAR_4->count[VAR_5] ||
      VAR_7 > VAR_3->real_num_tx_queues)
   return -VAR_0;


  for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_4->num_tc; VAR_6++) {
   if (VAR_7 > VAR_4->offset[VAR_6])
    return -VAR_0;
  }
 }

 return 0;
}
