
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtx {int dummy; } ;
struct cam_devq {int dummy; } ;
struct TYPE_4__ {int (* alloc ) (int ) ;} ;
struct ata_channel {int flags; int pm_level; int poll_callout; int state_mtx; scalar_t__ r_irq; int * sim; int path; int ih; TYPE_2__ dma; TYPE_1__* user; TYPE_1__* curr; int conntask; int state; int dev; } ;
typedef int device_t ;
typedef int buf ;
struct TYPE_3__ {int revision; int mode; int bytecount; int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (char const*) ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int ,int *,int ,struct ata_channel*,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int ,struct ata_channel*) ;
 int * FUNC_9 (int ,int ,char*,struct ata_channel*,int ,int *,int,int ,struct cam_devq*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 struct cam_devq* FUNC_12 (int) ;
 int FUNC_13 (struct cam_devq*) ;
 int FUNC_14 (int ) ;
 struct ata_channel* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int VAR_27 ;
 int FUNC_18 (int *,char*,int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int ,int ,char*,int*) ;
 scalar_t__ FUNC_22 (int ,int ,char*,char const**) ;
 int FUNC_23 (char*,int,char*,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int *,int ,int ) ;
 scalar_t__ FUNC_27 (int *,int *,int ,int ,int ) ;

int
FUNC_28(device_t VAR_28)
{
    struct ata_channel *VAR_29 = FUNC_15(VAR_28);
    int VAR_30, VAR_31;
    struct cam_devq *VAR_32;
    const char *VAR_33;
    char VAR_34[64];
    int VAR_35, VAR_36;


    if (VAR_29->r_irq)
 return VAR_13;


    VAR_29->dev = VAR_28;
    VAR_29->state = VAR_0;
    FUNC_5(&VAR_29->state_mtx, sizeof(struct mtx));
    FUNC_18(&VAR_29->state_mtx, "ATA state lock", ((void*)0), VAR_17);
    FUNC_0(&VAR_29->conntask, 0, VAR_22, VAR_28);
 for (VAR_35 = 0; VAR_35 < 16; VAR_35++) {
  VAR_29->user[VAR_35].revision = 0;
  FUNC_23(VAR_34, sizeof(VAR_34), "dev%d.sata_rev", VAR_35);
  if (FUNC_21(FUNC_14(VAR_28),
      FUNC_16(VAR_28), VAR_34, &VAR_36) != 0 &&
      FUNC_21(FUNC_14(VAR_28),
      FUNC_16(VAR_28), "sata_rev", &VAR_36) != 0)
   VAR_36 = -1;
  if (VAR_36 >= 0)
   VAR_29->user[VAR_35].revision = VAR_36;
  VAR_29->user[VAR_35].mode = 0;
  FUNC_23(VAR_34, sizeof(VAR_34), "dev%d.mode", VAR_35);
  if (FUNC_22(FUNC_14(VAR_28),
      FUNC_16(VAR_28), VAR_34, &VAR_33) == 0)
   VAR_36 = FUNC_1(VAR_33);
  else if (FUNC_22(FUNC_14(VAR_28),
      FUNC_16(VAR_28), "mode", &VAR_33) == 0)
   VAR_36 = FUNC_1(VAR_33);
  else
   VAR_36 = -1;
  if (VAR_36 >= 0)
   VAR_29->user[VAR_35].mode = VAR_36;
  if (VAR_29->flags & VAR_5)
   VAR_29->user[VAR_35].bytecount = 8192;
  else
   VAR_29->user[VAR_35].bytecount = VAR_16;
  VAR_29->user[VAR_35].caps = 0;
  VAR_29->curr[VAR_35] = VAR_29->user[VAR_35];
  if (VAR_29->flags & VAR_5) {
   if (VAR_29->pm_level > 0)
    VAR_29->user[VAR_35].caps |= VAR_12;
   if (VAR_29->pm_level > 1)
    VAR_29->user[VAR_35].caps |= VAR_11;
  } else {
   if (!(VAR_29->flags & VAR_3))
    VAR_29->user[VAR_35].caps |= VAR_10;
  }
 }
 FUNC_7(&VAR_29->poll_callout, 1);


    if (VAR_29->dma.alloc)
 VAR_29->dma.alloc(VAR_28);


    VAR_31 = VAR_2;
    VAR_29->r_irq = FUNC_2(VAR_28, VAR_20, &VAR_31,
           VAR_19 | VAR_18);
    if (!VAR_29->r_irq) {
 FUNC_17(VAR_28, "unable to allocate interrupt\n");
 return VAR_15;
    }
    if ((VAR_30 = FUNC_4(VAR_28, VAR_29->r_irq, VAR_1, ((void*)0),
    VAR_23, VAR_29, &VAR_29->ih))) {
 FUNC_3(VAR_28, VAR_20, VAR_31, VAR_29->r_irq);
 FUNC_17(VAR_28, "unable to setup interrupt\n");
 return VAR_30;
    }

 if (VAR_29->flags & VAR_4)
  FUNC_8(&VAR_29->poll_callout, VAR_27, VAR_24, VAR_29);
 FUNC_19(&VAR_29->state_mtx);

 VAR_32 = FUNC_12(1);
 if (VAR_32 == ((void*)0)) {
  FUNC_17(VAR_28, "Unable to allocate simq\n");
  VAR_30 = VAR_14;
  goto err1;
 }

 VAR_29->sim = FUNC_9(VAR_25, VAR_26, "ata", VAR_29,
     FUNC_16(VAR_28), &VAR_29->state_mtx, 1, 0, VAR_32);
 if (VAR_29->sim == ((void*)0)) {
  FUNC_17(VAR_28, "unable to allocate sim\n");
  FUNC_13(VAR_32);
  VAR_30 = VAR_14;
  goto err1;
 }
 if (FUNC_26(VAR_29->sim, VAR_28, 0) != VAR_8) {
  FUNC_17(VAR_28, "unable to register xpt bus\n");
  VAR_30 = VAR_15;
  goto err2;
 }
 if (FUNC_27(&VAR_29->path, ((void*)0), FUNC_11(VAR_29->sim),
     VAR_9, VAR_6) != VAR_7) {
  FUNC_17(VAR_28, "unable to create path\n");
  VAR_30 = VAR_15;
  goto err3;
 }
 FUNC_20(&VAR_29->state_mtx);
 return (0);

err3:
 FUNC_25(FUNC_11(VAR_29->sim));
err2:
 FUNC_10(VAR_29->sim, VAR_21);
 VAR_29->sim = ((void*)0);
err1:
 FUNC_3(VAR_28, VAR_20, VAR_31, VAR_29->r_irq);
 FUNC_20(&VAR_29->state_mtx);
 if (VAR_29->flags & VAR_4)
  FUNC_6(&VAR_29->poll_callout);
 return (VAR_30);
}
