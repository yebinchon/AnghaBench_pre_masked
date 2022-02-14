
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rate; int resolution; int accelfactor; int packetsize; int * syncmask; int level; } ;
struct TYPE_4__ {int hwid; int buttons; int model; int type; int iftype; } ;
struct psm_softc {int unit; int config; int kbdc; TYPE_2__ mode; TYPE_2__ dflt_mode; int flags; TYPE_1__ hw; int muxport; int * intr; } ;
typedef int device_t ;
struct TYPE_6__ {int packetsize; int syncmask; int model; scalar_t__ (* probefunc ) (struct psm_softc*,int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;




 int VAR_20 ;
 int VAR_21 ;
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
 int FUNC_1 (int) ;
 scalar_t__ VAR_36 ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct psm_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int*,int ,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int) ;
 char* FUNC_23 (int ) ;
 int FUNC_24 (char*,int,...) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ,int) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int ,int,int) ;
 void* FUNC_30 (int ,int) ;
 int FUNC_31 (int ,int) ;
 int FUNC_32 (int ,int) ;
 scalar_t__ FUNC_33 (struct psm_softc*,int ) ;
 int FUNC_34 (int ) ;
 TYPE_3__* VAR_37 ;
 int VAR_38 ;
 int FUNC_35 (int ,int ) ;

__attribute__((used)) static int
FUNC_36(device_t VAR_39)
{
 int VAR_40 = FUNC_7(VAR_39);
 struct psm_softc *VAR_41 = FUNC_6(VAR_39);
 int VAR_42[3];
 int VAR_43;
 int VAR_44;
 int VAR_45;
 int VAR_46;






 VAR_45 = VAR_4;
 VAR_41->intr = FUNC_2(VAR_39, VAR_34, &VAR_45, VAR_33);
 if (VAR_41->intr == ((void*)0)) {
  if (VAR_36)
   FUNC_8(VAR_39, "unable to allocate IRQ\n");
  return (VAR_0);
 }
 FUNC_3(VAR_39, VAR_34, VAR_45, VAR_41->intr);

 VAR_41->unit = VAR_40;
 VAR_41->kbdc = FUNC_1(FUNC_7(FUNC_5(VAR_39)));
 VAR_41->config = FUNC_4(VAR_39) & VAR_21;
 VAR_41->flags = 0;
 VAR_41->muxport = VAR_32;
 if (VAR_36)
  ++VAR_38;

 FUNC_9(VAR_39, "PS/2 Mouse");

 if (!FUNC_21(VAR_41->kbdc, VAR_35)) {
  FUNC_24("psm%d: unable to lock the controller.\n", VAR_40);
  if (VAR_36)
   --VAR_38;
  return (VAR_0);
 }
 FUNC_11(VAR_41->kbdc, 10);


 VAR_44 = FUNC_20(VAR_41->kbdc) & ~VAR_5;
 VAR_43 = FUNC_15(VAR_41->kbdc);
 if (VAR_38)
  FUNC_24("psm%d: current command byte:%04x\n", VAR_40,
      VAR_43);
 if (VAR_43 == -1) {

  FUNC_24("psm%d: unable to get the current command byte value.\n",
   VAR_40);
  FUNC_13(VAR_0);
 }





 if (!FUNC_29(VAR_41->kbdc,
     VAR_11 | VAR_5,
     VAR_9 | VAR_8 |
     VAR_10 | VAR_6)) {




  if (FUNC_0(VAR_41->kbdc))
   FUNC_27(VAR_41->kbdc, VAR_43);
  FUNC_24("psm%d: unable to set the command byte.\n", VAR_40);
  FUNC_13(VAR_0);
 }
 FUNC_35(VAR_41->kbdc, VAR_3);
 switch ((VAR_46 = FUNC_34(VAR_41->kbdc))) {
 case 1:
 case 2:
 case 3:
 case 132:
  if (VAR_38)
   FUNC_24("psm%d: strange result for test aux port "
       "(%d).\n", VAR_40, VAR_46);

 case 0:
  break;
 case -1:
 default:
  FUNC_25(VAR_41->kbdc);
  if (VAR_41->config & VAR_24)
   break;
  if (FUNC_0(VAR_41->kbdc))
   FUNC_27(VAR_41->kbdc, VAR_43);
  if (VAR_38)
   FUNC_24("psm%d: the aux port is not functioning (%d).\n",
       VAR_40, VAR_46);
  FUNC_13(VAR_0);
 }

 if (VAR_41->config & VAR_28) {




 } else {
  if (!FUNC_26(VAR_41->kbdc)) {
   FUNC_25(VAR_41->kbdc);
   if (FUNC_0(VAR_41->kbdc))
    FUNC_27(VAR_41->kbdc, VAR_43);
   if (VAR_38)
    FUNC_24("psm%d: failed to reset the aux "
        "device.\n", VAR_40);
   FUNC_13(VAR_0);
  } else if (!FUNC_26(VAR_41->kbdc)) {
   FUNC_25(VAR_41->kbdc);
   if (VAR_38 >= 2)
    FUNC_24("psm%d: failed to reset the aux device "
        "(2).\n", VAR_40);
  }
 }







 if (!FUNC_12(VAR_41->kbdc) || !FUNC_10(VAR_41->kbdc)) {

  FUNC_25(VAR_41->kbdc);
  if (FUNC_0(VAR_41->kbdc))
   FUNC_27(VAR_41->kbdc, VAR_43);
  if (VAR_38)
   FUNC_24("psm%d: failed to enable the aux device.\n",
       VAR_40);
  FUNC_13(VAR_0);
 }


 if (FUNC_17(VAR_41->kbdc, VAR_42, 0, 3) >= 3) {
  VAR_41->dflt_mode.rate = VAR_41->mode.rate = VAR_42[2];
  VAR_41->dflt_mode.resolution = VAR_41->mode.resolution = VAR_42[1];
 } else {
  VAR_41->dflt_mode.rate = VAR_41->mode.rate = -1;
  VAR_41->dflt_mode.resolution = VAR_41->mode.resolution = -1;
 }


 VAR_41->hw.iftype = VAR_12;


 VAR_41->hw.hwid = FUNC_14(VAR_41->kbdc);
 if (!FUNC_18(VAR_41->hw.hwid)) {
  if (FUNC_0(VAR_41->kbdc))
   FUNC_27(VAR_41->kbdc, VAR_43);
  if (VAR_38)
   FUNC_24("psm%d: unknown device type (%d).\n", VAR_40,
       VAR_41->hw.hwid);
  FUNC_13(VAR_0);
 }
 switch (VAR_41->hw.hwid) {
 case 131:
  VAR_41->hw.type = VAR_16;
  break;
 case 128:
 case 129:
 case 130:
 case 134:
 case 133:
  VAR_41->hw.type = VAR_13;
  break;
 default:
  VAR_41->hw.type = VAR_17;
  break;
 }

 if (VAR_41->config & VAR_27) {
  VAR_41->hw.buttons = 2;
  VAR_46 = VAR_2;
 } else {

  VAR_41->hw.buttons = FUNC_16(VAR_41->kbdc);


  for (VAR_46 = 0; VAR_37[VAR_46].probefunc != ((void*)0); ++VAR_46)
   if ((*VAR_37[VAR_46].probefunc)(VAR_41, VAR_18)) {
    if (VAR_38 >= 2)
     FUNC_24("psm%d: found %s\n", VAR_40,
         FUNC_23(VAR_37[VAR_46].model));
    break;
   }
 }

 VAR_41->hw.model = VAR_37[VAR_46].model;

 VAR_41->dflt_mode.level = VAR_30;
 VAR_41->dflt_mode.packetsize = VAR_14;
 VAR_41->dflt_mode.accelfactor = (VAR_41->config & VAR_20) >> 4;
 if (VAR_41->config & VAR_26)
  VAR_41->dflt_mode.syncmask[0] = 0;
 else
  VAR_41->dflt_mode.syncmask[0] = VAR_37[VAR_46].syncmask;
 if (VAR_41->config & VAR_22)
  VAR_41->dflt_mode.syncmask[0] &= ~VAR_15;
 VAR_41->dflt_mode.syncmask[1] = 0;
 VAR_41->mode = VAR_41->dflt_mode;
 VAR_41->mode.packetsize = VAR_37[VAR_46].packetsize;
 if (VAR_41->config & VAR_29)
  VAR_41->mode.resolution =
      FUNC_30(VAR_41->kbdc,
      (VAR_41->config & VAR_29) - 1);
 else if (VAR_41->mode.resolution >= 0)
  VAR_41->mode.resolution =
      FUNC_30(VAR_41->kbdc, VAR_41->dflt_mode.resolution);
 if (VAR_41->mode.rate > 0)
  VAR_41->mode.rate =
      FUNC_31(VAR_41->kbdc, VAR_41->dflt_mode.rate);
 FUNC_32(VAR_41->kbdc, 1);


 VAR_41->flags |= VAR_31;







 if (FUNC_17(VAR_41->kbdc, VAR_42, 0, 3) < 3)
  FUNC_24("psm%d: failed to get status.\n", VAR_40);
 else {




  VAR_41->dflt_mode.rate = VAR_41->mode.rate = VAR_42[2];
  VAR_41->dflt_mode.resolution = VAR_41->mode.resolution = VAR_42[1];
 }


 if (!FUNC_29(VAR_41->kbdc,
     VAR_11 | VAR_5,
     (VAR_43 & VAR_11) |
     VAR_7 | VAR_6)) {




  if (FUNC_0(VAR_41->kbdc))
   FUNC_27(VAR_41->kbdc, VAR_43);
  FUNC_24("psm%d: unable to set the command byte.\n", VAR_40);
  FUNC_13(VAR_0);
 }


 FUNC_22(VAR_41->kbdc, VAR_44 | VAR_5);
 FUNC_21(VAR_41->kbdc, VAR_1);
 return (0);
}
