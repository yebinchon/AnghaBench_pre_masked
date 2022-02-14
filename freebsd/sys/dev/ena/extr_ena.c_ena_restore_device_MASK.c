
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_dev_get_features_ctx {int dummy; } ;
struct ena_com_dev {int dummy; } ;
struct ena_adapter {int wd_active; int timer_service; int keep_alive_timestamp; int num_queues; int pdev; int ifp; struct ena_com_dev* ena_dev; } ;
typedef int if_t ;
typedef int device_t ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct ena_adapter*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,void*,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct ena_com_dev*) ;
 int FUNC_6 (struct ena_com_dev*) ;
 int FUNC_7 (struct ena_com_dev*,int ) ;
 int FUNC_8 (struct ena_com_dev*) ;
 int FUNC_9 (struct ena_com_dev*) ;
 int FUNC_10 (struct ena_adapter*,int ,struct ena_com_dev_get_features_ctx*,int*) ;
 int FUNC_11 (struct ena_adapter*,struct ena_com_dev_get_features_ctx*) ;
 int FUNC_12 (struct ena_adapter*) ;
 int FUNC_13 (struct ena_adapter*,int ) ;
 int FUNC_14 (struct ena_adapter*) ;
 int FUNC_15 (struct ena_adapter*,struct ena_com_dev_get_features_ctx*) ;
 int VAR_7 ;
 int FUNC_16 (struct ena_adapter*) ;
 int VAR_8 ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int ) ;

int
FUNC_19(struct ena_adapter *VAR_9)
{
 struct ena_com_dev_get_features_ctx VAR_10;
 struct ena_com_dev *VAR_11 = VAR_9->ena_dev;
 if_t VAR_12 = VAR_9->ifp;
 device_t VAR_13 = VAR_9->pdev;
 int VAR_14;
 int VAR_15;

 FUNC_2(VAR_3, VAR_9);

 VAR_15 = FUNC_10(VAR_9, VAR_13, &VAR_10, &VAR_14);
 if (VAR_15 != 0) {
  FUNC_4(VAR_13, "Cannot initialize device\n");
  goto err;
 }




 if (VAR_9->wd_active != 0)
  VAR_9->wd_active = VAR_14;

 VAR_15 = FUNC_11(VAR_9, &VAR_10);
 if (VAR_15 != 0) {
  FUNC_4(VAR_13, "Validation of device parameters failed\n");
  goto err_device_destroy;
 }

 VAR_15 = FUNC_15(VAR_9, &VAR_10);
 if (VAR_15 != 0)
  goto err_device_destroy;

 FUNC_0(VAR_3, VAR_9);

 if (FUNC_1(VAR_2, VAR_9))
  FUNC_18(VAR_12, VAR_5);

 VAR_15 = FUNC_13(VAR_9,
     VAR_9->num_queues);
 if (VAR_15 != 0) {
  FUNC_4(VAR_13, "Enable MSI-X failed\n");
  goto err_device_destroy;
 }


 if (FUNC_1(VAR_1, VAR_9)) {
  VAR_15 = FUNC_16(VAR_9);
  if (VAR_15 != 0) {
   FUNC_4(VAR_13, "Failed to create I/O queues\n");
   goto err_disable_msix;
  }
 }


 FUNC_2(VAR_0, VAR_9);

 if (FUNC_1(VAR_1, VAR_9)) {






  VAR_9->keep_alive_timestamp = FUNC_17();
  FUNC_3(&VAR_9->timer_service, VAR_6, VAR_6,
      VAR_7, (void *)VAR_9, 0);
 }

 FUNC_4(VAR_13,
     "Device reset completed successfully, Driver info: %s\n", VAR_8);

 return (VAR_15);

err_disable_msix:
 FUNC_14(VAR_9);
 FUNC_12(VAR_9);
err_device_destroy:
 FUNC_5(VAR_11);
 FUNC_9(VAR_11);
 FUNC_6(VAR_11);
 FUNC_7(VAR_11, VAR_4);
 FUNC_8(VAR_11);
err:
 FUNC_0(VAR_0, VAR_9);
 FUNC_0(VAR_3, VAR_9);
 FUNC_4(VAR_13, "Reset attempt failed. Can not reset the device\n");

 return (VAR_15);
}
