
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvs_controller {int quirks; } ;
struct mvs_channel {intptr_t unit; int quirks; int pm_level; int mtx; void* r_mem; void* r_irq; int * sim; int pm_timer; int path; int ih; TYPE_1__* user; TYPE_1__* curr; int reset_timer; int dev; } ;
struct cam_devq {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int revision; int bytecount; int tags; int caps; scalar_t__ mode; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int,void*) ;
 scalar_t__ FUNC_2 (int ,void*,int ,int *,int ,int ,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int,int ,int ) ;
 int * FUNC_5 (int ,int ,char*,struct mvs_channel*,int ,int *,int,int,struct cam_devq*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 struct cam_devq* FUNC_8 (int) ;
 int FUNC_9 (struct cam_devq*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int VAR_22 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char*,int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_23 (int ,int ,char*,int*) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int *,int ,int ) ;
 scalar_t__ FUNC_26 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_27)
{
 struct mvs_controller *VAR_28 = FUNC_13(FUNC_12(VAR_27));
 struct mvs_channel *VAR_29 = FUNC_13(VAR_27);
 struct cam_devq *VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34 = 0;

 VAR_29->dev = VAR_27;
 VAR_29->unit = (intptr_t)FUNC_10(VAR_27);
 VAR_29->quirks = VAR_28->quirks;
 FUNC_17(&VAR_29->mtx, "MVS channel lock", ((void*)0), VAR_13);
 VAR_29->pm_level = 0;
 FUNC_23(FUNC_11(VAR_27),
     FUNC_14(VAR_27), "pm_level", &VAR_29->pm_level);
 if (VAR_29->pm_level > 3)
  FUNC_3(&VAR_29->pm_timer, &VAR_29->mtx, 0);
 FUNC_3(&VAR_29->reset_timer, &VAR_29->mtx, 0);
 FUNC_23(FUNC_11(VAR_27),
     FUNC_14(VAR_27), "sata_rev", &VAR_34);
 for (VAR_33 = 0; VAR_33 < 16; VAR_33++) {
  VAR_29->user[VAR_33].revision = VAR_34;
  VAR_29->user[VAR_33].mode = 0;
  VAR_29->user[VAR_33].bytecount = (VAR_29->quirks & VAR_16) ? 8192 : 2048;
  VAR_29->user[VAR_33].tags = VAR_14;
  VAR_29->curr[VAR_33] = VAR_29->user[VAR_33];
  if (VAR_29->pm_level) {
   VAR_29->user[VAR_33].caps = VAR_10 |
       VAR_9 |
       VAR_7 | VAR_6;
  }
  VAR_29->user[VAR_33].caps |= VAR_8;
 }
 VAR_31 = VAR_29->unit;
 if (!(VAR_29->r_mem = FUNC_0(VAR_27, VAR_20,
     &VAR_31, VAR_17)))
  return (VAR_12);
 FUNC_21(VAR_27);
 FUNC_22(VAR_27);
 FUNC_20(VAR_27);
 FUNC_18(&VAR_29->mtx);
 VAR_31 = VAR_1;
 if (!(VAR_29->r_irq = FUNC_0(VAR_27, VAR_19,
     &VAR_31, VAR_18 | VAR_17))) {
  FUNC_15(VAR_27, "Unable to map interrupt\n");
  VAR_32 = VAR_12;
  goto err0;
 }
 if ((FUNC_2(VAR_27, VAR_29->r_irq, VAR_0, ((void*)0),
     VAR_23, VAR_27, &VAR_29->ih))) {
  FUNC_15(VAR_27, "Unable to setup interrupt\n");
  VAR_32 = VAR_12;
  goto err1;
 }

 VAR_30 = FUNC_8(VAR_14 - 1);
 if (VAR_30 == ((void*)0)) {
  FUNC_15(VAR_27, "Unable to allocate simq\n");
  VAR_32 = VAR_11;
  goto err1;
 }

 VAR_29->sim = FUNC_5(VAR_25, VAR_26, "mvsch", VAR_29,
     FUNC_14(VAR_27), &VAR_29->mtx,
     2, (VAR_29->quirks & VAR_15) ? 0 : VAR_14 - 1,
     VAR_30);
 if (VAR_29->sim == ((void*)0)) {
  FUNC_9(VAR_30);
  FUNC_15(VAR_27, "unable to allocate sim\n");
  VAR_32 = VAR_11;
  goto err1;
 }
 if (FUNC_25(VAR_29->sim, VAR_27, 0) != VAR_4) {
  FUNC_15(VAR_27, "unable to register xpt bus\n");
  VAR_32 = VAR_12;
  goto err2;
 }
 if (FUNC_26(&VAR_29->path, ((void*)0), FUNC_7(VAR_29->sim),
     VAR_5, VAR_2) != VAR_3) {
  FUNC_15(VAR_27, "unable to create path\n");
  VAR_32 = VAR_12;
  goto err3;
 }
 if (VAR_29->pm_level > 3) {
  FUNC_4(&VAR_29->pm_timer,
      (VAR_29->pm_level == 4) ? VAR_22 / 1000 : VAR_22 / 8,
      VAR_24, VAR_27);
 }
 FUNC_19(&VAR_29->mtx);
 return (0);

err3:
 FUNC_24(FUNC_7(VAR_29->sim));
err2:
 FUNC_6(VAR_29->sim, VAR_21);
err1:
 FUNC_1(VAR_27, VAR_19, VAR_1, VAR_29->r_irq);
err0:
 FUNC_1(VAR_27, VAR_20, VAR_29->unit, VAR_29->r_mem);
 FUNC_19(&VAR_29->mtx);
 FUNC_16(&VAR_29->mtx);
 return (VAR_32);
}
