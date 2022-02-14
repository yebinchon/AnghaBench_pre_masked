
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siis_controller {int quirks; } ;
struct siis_channel {intptr_t unit; int pm_level; int mtx; void* r_mem; void* r_irq; int * sim; int led; int path; int ih; TYPE_1__* user; TYPE_1__* curr; int quirks; int dev; } ;
struct cam_devq {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int revision; int bytecount; int caps; int tags; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int,void*) ;
 scalar_t__ FUNC_2 (int ,void*,int ,int *,int ,int ,int *) ;
 int * FUNC_3 (int ,int ,char*,struct siis_channel*,int ,int *,int,int ,struct cam_devq*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 struct cam_devq* FUNC_6 (int ) ;
 int FUNC_7 (struct cam_devq*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char*,int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ,char*,int*) ;
 int FUNC_21 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int *,int ,int ) ;
 scalar_t__ FUNC_26 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_21)
{
 struct siis_controller *VAR_22 = FUNC_12(FUNC_11(VAR_21));
 struct siis_channel *VAR_23 = FUNC_12(VAR_21);
 struct cam_devq *VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28 = 0;

 VAR_23->dev = VAR_21;
 VAR_23->unit = (intptr_t)FUNC_8(VAR_21);
 VAR_23->quirks = VAR_22->quirks;
 VAR_23->pm_level = 0;
 FUNC_20(FUNC_9(VAR_21),
     FUNC_13(VAR_21), "pm_level", &VAR_23->pm_level);
 FUNC_20(FUNC_9(VAR_21),
     FUNC_13(VAR_21), "sata_rev", &VAR_28);
 for (VAR_27 = 0; VAR_27 < 16; VAR_27++) {
  VAR_23->user[VAR_27].revision = VAR_28;
  VAR_23->user[VAR_27].mode = 0;
  VAR_23->user[VAR_27].bytecount = 8192;
  VAR_23->user[VAR_27].tags = VAR_13;
  VAR_23->curr[VAR_27] = VAR_23->user[VAR_27];
  if (VAR_23->pm_level)
   VAR_23->user[VAR_27].caps = VAR_7;
  VAR_23->user[VAR_27].caps |= VAR_6;
 }
 FUNC_17(&VAR_23->mtx, "SIIS channel lock", ((void*)0), VAR_10);
 VAR_25 = VAR_23->unit;
 if (!(VAR_23->r_mem = FUNC_0(VAR_21, VAR_15,
     &VAR_25, VAR_11)))
  return (VAR_9);
 FUNC_22(VAR_21);
 FUNC_23(VAR_21);
 FUNC_21(VAR_21);
 FUNC_18(&VAR_23->mtx);
 VAR_25 = VAR_1;
 if (!(VAR_23->r_irq = FUNC_0(VAR_21, VAR_14,
     &VAR_25, VAR_12 | VAR_11))) {
  FUNC_14(VAR_21, "Unable to map interrupt\n");
  VAR_26 = VAR_9;
  goto err0;
 }
 if ((FUNC_2(VAR_21, VAR_23->r_irq, VAR_0, ((void*)0),
     VAR_17, VAR_21, &VAR_23->ih))) {
  FUNC_14(VAR_21, "Unable to setup interrupt\n");
  VAR_26 = VAR_9;
  goto err1;
 }

 VAR_24 = FUNC_6(VAR_13);
 if (VAR_24 == ((void*)0)) {
  FUNC_14(VAR_21, "Unable to allocate simq\n");
  VAR_26 = VAR_8;
  goto err1;
 }

 VAR_23->sim = FUNC_3(VAR_19, VAR_20, "siisch", VAR_23,
     FUNC_13(VAR_21), &VAR_23->mtx, 2, VAR_13, VAR_24);
 if (VAR_23->sim == ((void*)0)) {
  FUNC_7(VAR_24);
  FUNC_14(VAR_21, "unable to allocate sim\n");
  VAR_26 = VAR_8;
  goto err1;
 }
 if (FUNC_25(VAR_23->sim, VAR_21, 0) != VAR_4) {
  FUNC_14(VAR_21, "unable to register xpt bus\n");
  VAR_26 = VAR_9;
  goto err2;
 }
 if (FUNC_26(&VAR_23->path, ((void*)0), FUNC_5(VAR_23->sim),
     VAR_5, VAR_2) != VAR_3) {
  FUNC_14(VAR_21, "unable to create path\n");
  VAR_26 = VAR_9;
  goto err3;
 }
 FUNC_19(&VAR_23->mtx);
 VAR_23->led = FUNC_15(VAR_18, VAR_21, FUNC_10(VAR_21));
 return (0);

err3:
 FUNC_24(FUNC_5(VAR_23->sim));
err2:
 FUNC_4(VAR_23->sim, VAR_16);
err1:
 FUNC_1(VAR_21, VAR_14, VAR_1, VAR_23->r_irq);
err0:
 FUNC_1(VAR_21, VAR_15, VAR_23->unit, VAR_23->r_mem);
 FUNC_19(&VAR_23->mtx);
 FUNC_16(&VAR_23->mtx);
 return (VAR_26);
}
