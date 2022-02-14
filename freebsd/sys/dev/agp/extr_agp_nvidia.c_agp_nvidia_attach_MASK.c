
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {int as_aperture; } ;
struct agp_nvidia_softc {int wbc_mask; int initial_aperture; int num_dirs; int num_active_entries; int pg_offset; int * dev; int * mc2_dev; struct agp_gatt* gatt; int * bdev; TYPE_1__ agp; int * mc1_dev; } ;
struct agp_gatt {int ag_physical; } ;
typedef int * device_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 struct agp_gatt* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct agp_nvidia_softc* FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int,int) ;
 void* FUNC_9 (int ,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int *,int ,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static int
FUNC_16 (device_t VAR_9)
{
 struct agp_nvidia_softc *VAR_10 = FUNC_6(VAR_9);
 struct agp_gatt *VAR_11;
 u_int32_t VAR_12;
 u_int32_t VAR_13;
 u_int32_t VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 switch (FUNC_11(VAR_9)) {
 case 129:
  VAR_10->wbc_mask = 0x00010000;
  break;
 case 128:
  VAR_10->wbc_mask = 0x80000000;
  break;
 default:
  FUNC_7(VAR_9, "Bad chip id\n");
  return (VAR_6);
 }


 VAR_10->dev = VAR_9;


 VAR_10->mc1_dev = FUNC_9(FUNC_10(VAR_9), 0, 1);
 if (VAR_10->mc1_dev == ((void*)0)) {
  FUNC_7(VAR_9,
   "Unable to find NVIDIA Memory Controller 1.\n");
  return (VAR_6);
 }


 VAR_10->mc2_dev = FUNC_9(FUNC_10(VAR_9), 0, 2);
 if (VAR_10->mc2_dev == ((void*)0)) {
  FUNC_7(VAR_9,
   "Unable to find NVIDIA Memory Controller 2.\n");
  return (VAR_6);
 }


 VAR_10->bdev = FUNC_9(FUNC_10(VAR_9), 30, 0);
 if (VAR_10->bdev == ((void*)0)) {
  FUNC_7(VAR_9,
   "Unable to find NVIDIA AGP Host to PCI Bridge.\n");
  return (VAR_6);
 }

 VAR_17 = FUNC_4(VAR_9);
 if (VAR_17)
  return (VAR_17);

 VAR_10->initial_aperture = FUNC_0(VAR_9);

 for (;;) {
  VAR_11 = FUNC_3(VAR_9);
  if (VAR_11)
   break;




  if (FUNC_2(VAR_9, FUNC_0(VAR_9) / 2))
   goto fail;
 }
 VAR_10->gatt = VAR_11;

 VAR_12 = FUNC_14(VAR_10->agp.as_aperture);
 VAR_13 = VAR_12 + FUNC_0(VAR_9) - 1;
 FUNC_13(VAR_10->mc2_dev, VAR_1, VAR_12, 4);
 FUNC_13(VAR_10->mc2_dev, VAR_2, VAR_13, 4);
 FUNC_13(VAR_10->bdev, VAR_4, VAR_12, 4);
 FUNC_13(VAR_10->bdev, VAR_5, VAR_13, 4);

 VAR_17 = FUNC_8(VAR_12, FUNC_0(VAR_9));
 if (VAR_17) {
  FUNC_7(VAR_9, "Failed to setup IORRs\n");
  goto fail;
 }


 VAR_15 = FUNC_0(VAR_9) / 1024 / 1024;
 VAR_10->num_dirs = VAR_15 / 64;
 VAR_10->num_active_entries = (VAR_15 == 32) ? 16384 : ((VAR_15 * 1024) / 4);
 VAR_10->pg_offset = 0;
 if (VAR_10->num_dirs == 0) {
  VAR_10->num_dirs = 1;
  VAR_10->num_active_entries /= (64 / VAR_15);
  VAR_10->pg_offset = FUNC_15(VAR_12 & (64 * 1024 * 1024 - 1),
      FUNC_0(VAR_9)) / VAR_8;
 }


 for (VAR_16 = 0; VAR_16 < 8; VAR_16++) {
  FUNC_13(VAR_10->mc2_dev, FUNC_1(VAR_16),
     (VAR_10->gatt->ag_physical +
       (VAR_16 % VAR_10->num_dirs) * 64 * 1024) | 1, 4);
 }


 VAR_14 = FUNC_12(VAR_10->mc2_dev, VAR_3, 4);
 FUNC_13(VAR_10->mc2_dev, VAR_3, VAR_14 | 0x11, 4);


 VAR_14 = FUNC_12(VAR_10->dev, VAR_0, 4);
 FUNC_13(VAR_10->dev, VAR_0, VAR_14 | 0x100, 4);

 return (0);
fail:
 FUNC_5(VAR_9);
 return (VAR_7);
}
