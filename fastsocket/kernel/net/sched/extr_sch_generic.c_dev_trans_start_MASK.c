
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned long trans_start; unsigned int num_tx_queues; } ;
struct TYPE_2__ {unsigned long trans_start; } ;


 TYPE_1__* FUNC_0 (struct net_device*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;

unsigned long FUNC_2(struct net_device *VAR_0)
{
 unsigned long VAR_1, VAR_2 = VAR_0->trans_start;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_tx_queues; VAR_3++) {
  VAR_1 = FUNC_0(VAR_0, VAR_3)->trans_start;
  if (VAR_1 && FUNC_1(VAR_1, VAR_2))
   VAR_2 = VAR_1;
 }
 VAR_0->trans_start = VAR_2;
 return VAR_2;
}
