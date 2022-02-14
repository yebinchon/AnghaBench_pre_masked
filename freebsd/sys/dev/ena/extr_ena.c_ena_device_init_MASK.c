
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int supported_groups; } ;
struct ena_com_dev_get_features_ctx {TYPE_1__ aenq; } ;
struct ena_com_dev {int dummy; } ;
struct ena_adapter {int dma_width; struct ena_com_dev* ena_dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_com_dev*,int *) ;
 int FUNC_4 (struct ena_com_dev*) ;
 int FUNC_5 (struct ena_com_dev*,int ) ;
 int FUNC_6 (struct ena_com_dev*,struct ena_com_dev_get_features_ctx*) ;
 int FUNC_7 (struct ena_com_dev*) ;
 int FUNC_8 (struct ena_com_dev*) ;
 int FUNC_9 (struct ena_com_dev*) ;
 int FUNC_10 (struct ena_com_dev*,int) ;
 int FUNC_11 (struct ena_com_dev*,int) ;
 int FUNC_12 (struct ena_com_dev*,int) ;
 int FUNC_13 (struct ena_com_dev*) ;
 int FUNC_14 (struct ena_com_dev*,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int
FUNC_17(struct ena_adapter *VAR_8, device_t VAR_9,
    struct ena_com_dev_get_features_ctx *VAR_10, int *VAR_11)
{
 struct ena_com_dev* VAR_12 = VAR_8->ena_dev;
 bool VAR_13;
 uint32_t VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_16 = FUNC_9(VAR_12);
 if (FUNC_16(VAR_16 != 0)) {
  FUNC_1(VAR_9, "failed to init mmio read less\n");
  return (VAR_16);
 }





 VAR_13 = !(FUNC_15(VAR_9) & VAR_5);
 FUNC_12(VAR_12, VAR_13);

 VAR_16 = FUNC_5(VAR_12, VAR_6);
 if (FUNC_16(VAR_16 != 0)) {
  FUNC_1(VAR_9, "Can not reset device\n");
  goto err_mmio_read_less;
 }

 VAR_16 = FUNC_13(VAR_12);
 if (FUNC_16(VAR_16 != 0)) {
  FUNC_1(VAR_9, "device version is too low\n");
  goto err_mmio_read_less;
 }

 VAR_15 = FUNC_7(VAR_12);
 if (FUNC_16(VAR_15 < 0)) {
  FUNC_1(VAR_9, "Invalid dma width value %d", VAR_15);
  VAR_16 = VAR_15;
  goto err_mmio_read_less;
 }
 VAR_8->dma_width = VAR_15;


 VAR_16 = FUNC_3(VAR_12, &VAR_7);
 if (FUNC_16(VAR_16 != 0)) {
  FUNC_1(VAR_9,
      "Can not initialize ena admin queue with device\n");
  goto err_mmio_read_less;
 }






 FUNC_10(VAR_12, 1);

 FUNC_14(VAR_12, VAR_9);


 VAR_16 = FUNC_6(VAR_12, VAR_10);
 if (FUNC_16(VAR_16 != 0)) {
  FUNC_1(VAR_9,
      "Cannot get attribute for ena device rc: %d\n", VAR_16);
  goto err_admin_init;
 }

 VAR_14 = FUNC_0(VAR_2) |
     FUNC_0(VAR_0) |
     FUNC_0(VAR_4) |
     FUNC_0(VAR_3) |
     FUNC_0(VAR_1);

 VAR_14 &= VAR_10->aenq.supported_groups;
 VAR_16 = FUNC_11(VAR_12, VAR_14);
 if (FUNC_16(VAR_16 != 0)) {
  FUNC_1(VAR_9, "Cannot configure aenq groups rc: %d\n", VAR_16);
  goto err_admin_init;
 }

 *VAR_11 = !!(VAR_14 & FUNC_0(VAR_1));

 return (0);

err_admin_init:
 FUNC_4(VAR_12);
 FUNC_2(VAR_12);
err_mmio_read_less:
 FUNC_8(VAR_12);

 return (VAR_16);
}
