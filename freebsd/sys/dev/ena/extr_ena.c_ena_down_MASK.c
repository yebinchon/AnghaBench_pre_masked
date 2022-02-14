
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interface_down; } ;
struct ena_adapter {TYPE_1__ dev_stats; int pdev; int reset_reason; int ena_dev; int ifp; int timer_service; } ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ena_adapter*) ;
 int FUNC_7 (struct ena_adapter*) ;
 int FUNC_8 (struct ena_adapter*) ;
 int FUNC_9 (struct ena_adapter*) ;
 int FUNC_10 (struct ena_adapter*) ;
 int FUNC_11 (struct ena_adapter*) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;

void
FUNC_14(struct ena_adapter *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_0, VAR_4)) {
  FUNC_4(VAR_4->pdev, "device is going DOWN\n");

  FUNC_2(&VAR_4->timer_service);

  FUNC_0(VAR_0, VAR_4);
  FUNC_12(VAR_4->ifp, VAR_2,
      VAR_3);

  FUNC_11(VAR_4);

  if (FUNC_1(VAR_1, VAR_4)) {
   VAR_5 = FUNC_5(VAR_4->ena_dev,
       VAR_4->reset_reason);
   if (FUNC_13(VAR_5 != 0))
    FUNC_4(VAR_4->pdev,
        "Device reset failed\n");
  }

  FUNC_6(VAR_4);

  FUNC_9(VAR_4);
  FUNC_7(VAR_4);
  FUNC_10(VAR_4);
  FUNC_8(VAR_4);

  FUNC_3(VAR_4->dev_stats.interface_down, 1);
 }
}
