
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * fingers; } ;
struct TYPE_6__ {int buttons; } ;
struct TYPE_8__ {int fwversion; int hwversion; int issemimt; int isclickpad; int hascrc; int haspressure; int ntracesx; int ntracesy; int hastrackpoint; int dpmmx; int dpmmy; int dptracex; int dptracey; int sizex; int sizey; } ;
struct psm_softc {TYPE_2__ elanaction; TYPE_1__ hw; TYPE_3__ elanhw; int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef TYPE_3__ elantechhw_t ;
typedef int elanhw ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,int,int ,int*) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*) ;
 int FUNC_7 (struct psm_softc*) ;
 int VAR_10 ;
 int FUNC_8 (int ,int*,int ,int) ;
 void* FUNC_9 (int,int) ;
 int FUNC_10 (int const**) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ,int) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_13(struct psm_softc *VAR_12, enum probearg VAR_13)
{
 static const int VAR_14[] =

     { 0, 0, 2, 0, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
 static const int VAR_15[][3] = {

  { 0x020030, 1152, 768 },
  { 0x020800, 1152, 768 },
  { 0x020b00, 1152, 768 },
  { 0x040215, 900, 500 },
  { 0x040216, 819, 405 },
  { 0x040219, 900, 500 },
 };
 elantechhw_t VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22[3], VAR_23, VAR_24;
 KBDC VAR_25 = VAR_12->kbdc;

 FUNC_3(3, (VAR_7, "elantech: BEGIN init\n"));

 FUNC_12(VAR_25, 1);
 FUNC_12(VAR_25, 1);
 FUNC_12(VAR_25, 1);
 if (FUNC_8(VAR_25, VAR_22, 0, 3) != 3)
  return (VAR_6);

 if (!FUNC_1(VAR_22))
  return (VAR_6);


 if (FUNC_5(VAR_25, 2, VAR_2, VAR_22))
  return (VAR_6);

 FUNC_4(&VAR_16, sizeof(VAR_16));

 VAR_16.fwversion = (VAR_22[0] << 16) | (VAR_22[1] << 8) | VAR_22[2];
 VAR_17 = VAR_22[0] & 0x0f;
 VAR_18 = VAR_14[VAR_17];

 if (VAR_11 >= 2)
  FUNC_11("Elantech touchpad hardware v.%d firmware v.0x%06x\n",
      VAR_18, VAR_16.fwversion);

 if (FUNC_0(VAR_16.fwversion)) {
  FUNC_11 ("  Unsupported touchpad hardware (v1)\n");
  return (VAR_6);
 }
 if (VAR_18 == 0) {
  FUNC_11 ("  Unknown touchpad hardware (firmware v.0x%06x)\n",
      VAR_16.fwversion);
  return (VAR_6);
 }


 VAR_16.hwversion = VAR_18;
 VAR_16.issemimt = VAR_18 == 2;
 VAR_16.isclickpad = (VAR_22[1] & 0x10) != 0;
 VAR_16.hascrc = (VAR_22[1] & 0x40) != 0;
 VAR_16.haspressure = VAR_16.fwversion >= 0x020800;


 if (FUNC_5(VAR_25, VAR_18, VAR_0, VAR_22) != 0) {
  FUNC_11("  Failed to read capability bits\n");
  return (VAR_6);
 }

 VAR_16.ntracesx = FUNC_9(VAR_22[1], 3);
 VAR_16.ntracesy = FUNC_9(VAR_22[2], 3);
 VAR_16.hastrackpoint = (VAR_22[0] & 0x80) != 0;


 switch (VAR_18) {
 case 4:
  if (FUNC_5(VAR_25, VAR_18, VAR_4, VAR_22)
      == 0) {
   VAR_23 = (VAR_22[1] & 0x0f) * 10 + 790;
   VAR_24 = ((VAR_22[1] & 0xf0) >> 4) * 10 + 790;
   VAR_16.dpmmx = (VAR_23 * 10 + 5) / 254;
   VAR_16.dpmmy = (VAR_24 * 10 + 5) / 254;
   break;
  }

 case 2:
 case 3:
  VAR_16.dpmmx = VAR_16.dpmmy = 32;
  break;
 }

 if (!VAR_10)
  return (VAR_6);

 if (FUNC_6(VAR_25, &VAR_16)) {
  FUNC_11("couldn't initialize elantech touchpad\n");
  return (VAR_6);
 }






 VAR_16.dptracex = VAR_16.dptracey = 64;
 for (VAR_20 = 0; VAR_20 < FUNC_10(VAR_15); VAR_20++) {
  if (VAR_16.fwversion == VAR_15[VAR_20][0]) {
   VAR_16.sizex = VAR_15[VAR_20][1];
   VAR_16.sizey = VAR_15[VAR_20][2];
   goto found;
  }
 }
 if (FUNC_5(VAR_25, VAR_18, VAR_1, VAR_22) != 0) {
  FUNC_11("  Failed to read touchpad size\n");
  VAR_16.sizex = 10000;
  VAR_16.sizey = 10000;
 } else if (VAR_18 == 2) {
  if ((VAR_16.fwversion >> 16) == 0x14 && (VAR_22[1] & 0x10) &&
      !FUNC_5(VAR_25, VAR_18, VAR_5, VAR_22)) {
   VAR_16.dptracex = VAR_22[1] / 2;
   VAR_16.dptracey = VAR_22[2] / 2;
  }
  VAR_19 = ((VAR_16.fwversion >> 8) == 0x0208) ? 1 : 2;
  VAR_16.sizex = (VAR_16.ntracesx - VAR_19) * VAR_16.dptracex;
  VAR_16.sizey = (VAR_16.ntracesy - VAR_19) * VAR_16.dptracey;
 } else {
  VAR_16.sizex = (VAR_22[0] & 0x0f) << 8 | VAR_22[1];
  VAR_16.sizey = (VAR_22[0] & 0xf0) << 4 | VAR_22[2];
  VAR_19 = (VAR_16.sizex % (VAR_16.ntracesx - 2) == 0) ? 2 : 1;
  VAR_16.dptracex = VAR_16.sizex / (VAR_16.ntracesx - VAR_19);
  VAR_16.dptracey = VAR_16.sizey / (VAR_16.ntracesy - VAR_19);
 }
found:
 if (VAR_11 >= 2) {
  FUNC_11("  Model information:\n");
  FUNC_11("   MaxX:       %d\n", VAR_16.sizex);
  FUNC_11("   MaxY:       %d\n", VAR_16.sizey);
  FUNC_11("   DpmmX:      %d\n", VAR_16.dpmmx);
  FUNC_11("   DpmmY:      %d\n", VAR_16.dpmmy);
  FUNC_11("   TracesX:    %d\n", VAR_16.ntracesx);
  FUNC_11("   TracesY:    %d\n", VAR_16.ntracesy);
  FUNC_11("   DptraceX:   %d\n", VAR_16.dptracex);
  FUNC_11("   DptraceY:   %d\n", VAR_16.dptracey);
  FUNC_11("   SemiMT:     %d\n", VAR_16.issemimt);
  FUNC_11("   Clickpad:   %d\n", VAR_16.isclickpad);
  FUNC_11("   Trackpoint: %d\n", VAR_16.hastrackpoint);
  FUNC_11("   CRC:        %d\n", VAR_16.hascrc);
  FUNC_11("   Pressure:   %d\n", VAR_16.haspressure);
 }

 FUNC_3(3, (VAR_7, "elantech: END init\n"));

 if (VAR_13 == VAR_8) {
  VAR_12->elanhw = VAR_16;
  VAR_12->hw.buttons = 3;


  FUNC_7(VAR_12);

  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++)
   FUNC_2(VAR_12->elanaction.fingers[VAR_21]);
 }

 return (VAR_9);
}
