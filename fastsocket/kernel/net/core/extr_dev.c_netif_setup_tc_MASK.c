
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_tc_txq {unsigned int offset; unsigned int count; } ;
struct netdev_qos_info {struct netdev_tc_txq* tc_to_txq; scalar_t__ num_tc; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct netdev_qos_info qos_data; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int,int ) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(struct net_device *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct netdev_qos_info *VAR_4 = &FUNC_0(VAR_1)->qos_data;
 struct netdev_tc_txq *VAR_5 = &VAR_4->tc_to_txq[0];


 if (VAR_5->offset + VAR_5->count > VAR_2) {
  FUNC_3("Number of in use tx queues changed "
      "invalidating tc mappings. Priority "
      "traffic classification disabled!\n");
  VAR_4->num_tc = 0;
  return;
 }


 for (VAR_3 = 1; VAR_3 < VAR_0 + 1; VAR_3++) {
  int VAR_6 = FUNC_1(VAR_1, VAR_3);

  VAR_5 = &VAR_4->tc_to_txq[VAR_6];
  if (VAR_5->offset + VAR_5->count > VAR_2) {
   FUNC_3("Number of in use tx queues "
       "changed. Priority %i to tc "
       "mapping %i is no longer valid "
       "setting map to 0\n",
       VAR_3, VAR_6);
   FUNC_2(VAR_1, VAR_3, 0);
  }
 }
}
