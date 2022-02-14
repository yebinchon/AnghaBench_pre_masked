
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {unsigned int num_tx_queues; scalar_t__ reg_state; unsigned int real_num_tx_queues; } ;
struct TYPE_3__ {scalar_t__ num_tc; } ;
struct TYPE_4__ {TYPE_1__ qos_data; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,unsigned int,unsigned int) ;
 int FUNC_3 (struct net_device*,unsigned int) ;
 int FUNC_4 (struct net_device*,unsigned int) ;

void FUNC_5(struct net_device *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 if (VAR_3 < 1 || VAR_3 > VAR_2->num_tx_queues)
  return;

 if (VAR_2->reg_state == VAR_0 ||
     VAR_2->reg_state == VAR_1) {
  FUNC_0();

  VAR_4 = FUNC_2(VAR_2, VAR_2->real_num_tx_queues,
        VAR_3);
  if (FUNC_1(VAR_2)->qos_data.num_tc)
   FUNC_3(VAR_2, VAR_3);

  if (VAR_3 < VAR_2->real_num_tx_queues)
   FUNC_4(VAR_2, VAR_3);
 }

 VAR_2->real_num_tx_queues = VAR_3;
}
