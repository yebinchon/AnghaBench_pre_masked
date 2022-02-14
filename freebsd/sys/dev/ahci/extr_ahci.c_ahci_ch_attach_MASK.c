
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct mtx {int dummy; } ;
struct cam_devq {int dummy; } ;
struct ahci_controller {int caps; int caps2; int quirks; scalar_t__ direct; void* r_mem; int subdeviceid; int subvendorid; int deviceid; int vendorid; int ch_start; } ;
struct ahci_channel {intptr_t unit; int caps; int caps2; int quirks; int numslots; int pm_level; int chcaps; int chscaps; int mtx; void* r_mem; void* r_irq; int * sim; int pm_timer; int path; int ih; TYPE_1__* user; TYPE_1__* curr; int reset_timer; int doneq; int subdeviceid; int subvendorid; int deviceid; int vendorid; int start; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int revision; int bytecount; int tags; int caps; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 void* FUNC_0 (void*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ahci_channel*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_4 (int ,struct ahci_channel*) ;
 int VAR_40 ;
 int FUNC_5 (int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 void* FUNC_8 (int ,int ,int*,int) ;
 int FUNC_9 (int ,int ,int,void*) ;
 scalar_t__ FUNC_10 (int ,void*,int ,int *,int ,struct ahci_channel*,int *) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *,int,int ,struct ahci_channel*) ;
 int * FUNC_13 (int ,int ,char*,struct ahci_channel*,int ,struct mtx*,int,int,struct cam_devq*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 struct cam_devq* FUNC_16 (int) ;
 int FUNC_17 (struct cam_devq*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 void* FUNC_21 (int ) ;
 struct sysctl_ctx_list* FUNC_22 (int ) ;
 struct sysctl_oid* FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,char*,...) ;
 int VAR_47 ;
 int FUNC_26 (int,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,char*,int *,int ) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ,int ,char*,int*) ;
 int FUNC_32 (int ) ;
 scalar_t__ FUNC_33 (int *,int ,int ) ;
 scalar_t__ FUNC_34 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_35(device_t VAR_48)
{
 struct ahci_controller *VAR_49 = FUNC_21(FUNC_20(VAR_48));
 struct ahci_channel *VAR_50 = FUNC_21(VAR_48);
 struct cam_devq *VAR_51;
 struct sysctl_ctx_list *VAR_52;
 struct sysctl_oid *VAR_53;
 int VAR_54, VAR_55, VAR_56, VAR_57 = 0;
 u_int32_t VAR_58;

 VAR_50->dev = VAR_48;
 VAR_50->unit = (intptr_t)FUNC_18(VAR_48);
 VAR_50->caps = VAR_49->caps;
 VAR_50->caps2 = VAR_49->caps2;
 VAR_50->start = VAR_49->ch_start;
 VAR_50->quirks = VAR_49->quirks;
 VAR_50->vendorid = VAR_49->vendorid;
 VAR_50->deviceid = VAR_49->deviceid;
 VAR_50->subvendorid = VAR_49->subvendorid;
 VAR_50->subdeviceid = VAR_49->subdeviceid;
 VAR_50->numslots = ((VAR_50->caps & VAR_2) >> VAR_3) + 1;
 FUNC_28(&VAR_50->mtx, "AHCI channel lock", ((void*)0), VAR_33);
 VAR_50->pm_level = 0;
 FUNC_31(FUNC_19(VAR_48),
     FUNC_24(VAR_48), "pm_level", &VAR_50->pm_level);
 FUNC_1(&VAR_50->doneq);
 if (VAR_50->pm_level > 3)
  FUNC_11(&VAR_50->pm_timer, &VAR_50->mtx, 0);
 FUNC_11(&VAR_50->reset_timer, &VAR_50->mtx, 0);

 if ((VAR_49->quirks & VAR_14) && VAR_50->unit == 0)
  VAR_57 = 1;
 if (VAR_50->quirks & VAR_15)
  VAR_57 = 2;
 FUNC_31(FUNC_19(VAR_48),
     FUNC_24(VAR_48), "sata_rev", &VAR_57);
 for (VAR_56 = 0; VAR_56 < 16; VAR_56++) {
  VAR_50->user[VAR_56].revision = VAR_57;
  VAR_50->user[VAR_56].mode = 0;
  VAR_50->user[VAR_56].bytecount = 8192;
  VAR_50->user[VAR_56].tags = VAR_50->numslots;
  VAR_50->user[VAR_56].caps = 0;
  VAR_50->curr[VAR_56] = VAR_50->user[VAR_56];
  if (VAR_50->pm_level) {
   VAR_50->user[VAR_56].caps = VAR_30 |
       VAR_28 |
       VAR_26 | VAR_25;
  }
  VAR_50->user[VAR_56].caps |= VAR_29 |
      VAR_27;
 }
 VAR_54 = 0;
 if (!(VAR_50->r_mem = FUNC_8(VAR_48, VAR_38,
     &VAR_54, VAR_35)))
  return (VAR_32);
 VAR_50->chcaps = FUNC_0(VAR_50->r_mem, VAR_5);
 VAR_58 = FUNC_0(VAR_49->r_mem, VAR_16);
 if (VAR_58 < 0x00010200 && (VAR_49->caps & VAR_1))
  VAR_50->chcaps |= VAR_8;
 if (VAR_50->caps2 & VAR_0)
  VAR_50->chscaps = FUNC_0(VAR_50->r_mem, VAR_11);
 if (VAR_46) {
  FUNC_25(VAR_48, "Caps:%s%s%s%s%s%s\n",
      (VAR_50->chcaps & VAR_9) ? " HPCP":"",
      (VAR_50->chcaps & VAR_10) ? " MPSP":"",
      (VAR_50->chcaps & VAR_6) ? " CPD":"",
      (VAR_50->chcaps & VAR_7) ? " ESP":"",
      (VAR_50->chcaps & VAR_8) ? " FBSCP":"",
      (VAR_50->chscaps & VAR_12) ? " DSP":"");
 }
 FUNC_6(VAR_48);
 FUNC_7(VAR_48);
 FUNC_29(&VAR_50->mtx);
 FUNC_5(VAR_48);
 VAR_54 = VAR_18;
 if (!(VAR_50->r_irq = FUNC_8(VAR_48, VAR_37,
     &VAR_54, VAR_36 | VAR_35))) {
  FUNC_25(VAR_48, "Unable to map interrupt\n");
  VAR_55 = VAR_32;
  goto err0;
 }
 if ((FUNC_10(VAR_48, VAR_50->r_irq, VAR_17, ((void*)0),
     VAR_49->direct ? VAR_42 : VAR_41,
     VAR_50, &VAR_50->ih))) {
  FUNC_25(VAR_48, "Unable to setup interrupt\n");
  VAR_55 = VAR_32;
  goto err1;
 }

 VAR_51 = FUNC_16(VAR_50->numslots);
 if (VAR_51 == ((void*)0)) {
  FUNC_25(VAR_48, "Unable to allocate simq\n");
  VAR_55 = VAR_31;
  goto err1;
 }

 VAR_50->sim = FUNC_13(VAR_44, VAR_45, "ahcich", VAR_50,
     FUNC_24(VAR_48), (struct mtx *)&VAR_50->mtx,
     (VAR_50->quirks & VAR_13) ? 1 : FUNC_26(2, VAR_50->numslots),
     (VAR_50->caps & VAR_4) ? VAR_50->numslots : 0,
     VAR_51);
 if (VAR_50->sim == ((void*)0)) {
  FUNC_17(VAR_51);
  FUNC_25(VAR_48, "unable to allocate sim\n");
  VAR_55 = VAR_31;
  goto err1;
 }
 if (FUNC_33(VAR_50->sim, VAR_48, 0) != VAR_21) {
  FUNC_25(VAR_48, "unable to register xpt bus\n");
  VAR_55 = VAR_32;
  goto err2;
 }
 if (FUNC_34(&VAR_50->path, ((void*)0), FUNC_15(VAR_50->sim),
     VAR_22, VAR_19) != VAR_20) {
  FUNC_25(VAR_48, "unable to create path\n");
  VAR_55 = VAR_32;
  goto err3;
 }
 if (VAR_50->pm_level > 3) {
  FUNC_12(&VAR_50->pm_timer,
      (VAR_50->pm_level == 4) ? VAR_47 / 1000 : VAR_47 / 8,
      VAR_43, VAR_50);
 }
 FUNC_30(&VAR_50->mtx);
 FUNC_4(FUNC_20(VAR_48), VAR_50);
 VAR_52 = FUNC_22(VAR_48);
 VAR_53 = FUNC_23(VAR_48);
 FUNC_2(VAR_52, FUNC_3(VAR_53), VAR_34, "disable_phy",
     VAR_23 | VAR_24, VAR_50, 0, VAR_40, "IU",
     "Disable PHY");
 return (0);

err3:
 FUNC_32(FUNC_15(VAR_50->sim));
err2:
 FUNC_14(VAR_50->sim, VAR_39);
err1:
 FUNC_9(VAR_48, VAR_37, VAR_18, VAR_50->r_irq);
err0:
 FUNC_9(VAR_48, VAR_38, VAR_50->unit, VAR_50->r_mem);
 FUNC_30(&VAR_50->mtx);
 FUNC_27(&VAR_50->mtx);
 return (VAR_55);
}
