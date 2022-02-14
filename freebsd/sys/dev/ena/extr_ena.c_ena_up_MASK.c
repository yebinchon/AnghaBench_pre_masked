
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interface_up; } ;
struct ena_adapter {int timer_service; int ifp; TYPE_1__ dev_stats; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_3 ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,int ,int ,void*,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct ena_adapter*) ;
 int FUNC_7 (struct ena_adapter*) ;
 int FUNC_8 (struct ena_adapter*) ;
 int FUNC_9 (struct ena_adapter*) ;
 int FUNC_10 (struct ena_adapter*) ;
 int FUNC_11 (struct ena_adapter*) ;
 int FUNC_12 (struct ena_adapter*) ;
 int FUNC_13 (struct ena_adapter*) ;
 int FUNC_14 (struct ena_adapter*) ;
 int VAR_9 ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (struct ena_adapter*) ;
 int FUNC_17 (struct ena_adapter*) ;
 int FUNC_18 (struct ena_adapter*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 scalar_t__ FUNC_21 (int) ;

int
FUNC_22(struct ena_adapter *VAR_10)
{
 int VAR_11 = 0;

 if (FUNC_21(FUNC_4(VAR_10->pdev) == 0)) {
  FUNC_5(VAR_10->pdev, "device is not attached!\n");
  return (VAR_4);
 }

 if (!FUNC_0(VAR_2, VAR_10)) {
  FUNC_5(VAR_10->pdev, "device is going UP\n");


  VAR_11 = FUNC_14(VAR_10);
  if (FUNC_21(VAR_11 != 0)) {
   FUNC_15(VAR_0, "error setting up IO interrupt\n");
   goto error;
  }
  VAR_11 = FUNC_11(VAR_10);
  if (FUNC_21(VAR_11 != 0)) {
   FUNC_15(VAR_0, "err_req_irq\n");
   goto error;
  }


  VAR_11 = FUNC_13(VAR_10);
  if (FUNC_21(VAR_11 != 0)) {
   FUNC_15(VAR_0, "err_setup_tx\n");
   goto err_setup_tx;
  }


  VAR_11 = FUNC_12(VAR_10);
  if (FUNC_21(VAR_11 != 0)) {
   FUNC_15(VAR_0, "err_setup_rx\n");
   goto err_setup_rx;
  }


  VAR_11 = FUNC_6(VAR_10);
  if (FUNC_21(VAR_11 != 0)) {
   FUNC_15(VAR_0,
       "create IO queues failed\n");
   goto err_io_que;
  }

  if (FUNC_0(VAR_3, VAR_10))
   FUNC_19(VAR_10->ifp, VAR_7);

  VAR_11 = FUNC_17(VAR_10);
  if (FUNC_21(VAR_11 != 0))
   goto err_up_complete;

  FUNC_3(VAR_10->dev_stats.interface_up, 1);

  FUNC_18(VAR_10);

  FUNC_20(VAR_10->ifp, VAR_6,
      VAR_5);





  if (FUNC_0(VAR_1, VAR_10)) {
   FUNC_2(&VAR_10->timer_service, VAR_8,
       VAR_8, VAR_9, (void *)VAR_10, 0);
  }

  FUNC_1(VAR_2, VAR_10);

  FUNC_16(VAR_10);
 }

 return (0);

err_up_complete:
 FUNC_7(VAR_10);
err_io_que:
 FUNC_8(VAR_10);
err_setup_rx:
 FUNC_9(VAR_10);
err_setup_tx:
 FUNC_10(VAR_10);
error:
 return (VAR_11);
}
