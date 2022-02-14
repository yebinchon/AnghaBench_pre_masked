
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int requested_mode; int disable_fc_autoneg; } ;
struct TYPE_4__ {TYPE_1__ fc; } ;
struct adapter {int num_rx_queues; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (TYPE_2__*) ;





__attribute__((used)) static int
FUNC_3(struct adapter *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 129:
 case 128:
 case 131:
  VAR_2->hw.fc.requested_mode = VAR_3;
  if (VAR_2->num_rx_queues > 1)
   FUNC_0(VAR_2);
  break;
 case 130:
  VAR_2->hw.fc.requested_mode = 130;
  if (VAR_2->num_rx_queues > 1)
   FUNC_1(VAR_2);
  break;
 default:
  return (VAR_0);
 }


 VAR_2->hw.fc.disable_fc_autoneg = VAR_1;
 FUNC_2(&VAR_2->hw);

 return (0);
}
