
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {scalar_t__ real_num_tx_queues; int name; } ;


 int FUNC_0 (int,char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline u16 FUNC_3(struct net_device *VAR_0, u16 VAR_1)
{
 if (FUNC_2(VAR_1 >= VAR_0->real_num_tx_queues)) {
  if (FUNC_1()) {
   FUNC_0(1, "%s selects TX queue %d, but "
        "real number of TX queues is %d\n",
        VAR_0->name, VAR_1,
        VAR_0->real_num_tx_queues);
  }
  return 0;
 }
 return VAR_1;
}
