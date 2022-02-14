
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int synhw ;
struct TYPE_6__ {int infoMinor; int infoMajor; int infoRot180; int infoPortrait; int infoSensor; int infoHardware; int infoNewAbs; int capPen; int infoSimplC; int infoGeometry; int capExtended; int nExtendedQueries; int capMiddle; int capPassthrough; int capLowPower; int capMultiFingerReport; int capSleep; int capFourButtons; int capBallistics; int capMultiFinger; int capPalmDetect; int infoXupmm; int infoYupmm; int verticalScroll; int horizontalScroll; int verticalWheel; int nExtendedButtons; int capEWmode; int capClickPad; int capDeluxeLEDs; int noAbsoluteFilter; int capReportsV; int capUniformClickPad; int capReportsMin; int capInterTouch; int capReportsMax; int capClearPad; int capAdvancedGestures; int capCoveredPad; int maximumXCoord; int maximumYCoord; int minimumXCoord; int minimumYCoord; int forcePad; int topButtonPad; } ;
typedef TYPE_2__ synapticshw_t ;
struct psmcpnp_softc {int type; } ;
struct TYPE_5__ {int buttons; int model; } ;
struct psm_softc {TYPE_1__ hw; TYPE_2__ synhw; int unit; int kbdc; } ;
typedef enum probearg { ____Placeholder_probearg } probearg ;
typedef int * device_t ;
typedef int KBDC ;


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
 int FUNC_0 (TYPE_2__,int,int) ;
 int VAR_14 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ) ;
 struct psmcpnp_softc* FUNC_5 (int *) ;
 int FUNC_6 (struct psm_softc*,int) ;
 int FUNC_7 (int ,int*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct psm_softc*) ;
 int FUNC_12 (struct psm_softc*,int ) ;
 int VAR_15 ;
 int FUNC_13 (struct psm_softc*,char*,char*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_14(struct psm_softc *VAR_18, enum probearg VAR_19)
{
 device_t VAR_20;
 struct psmcpnp_softc *VAR_21;
 KBDC VAR_22 = VAR_18->kbdc;
 synapticshw_t VAR_23;
 int VAR_24[3];
 int VAR_25;

 FUNC_1(3, (VAR_1, "synaptics: BEGIN init\n"));







 FUNC_10(VAR_22, 1);


 if (FUNC_8(VAR_22, VAR_8) == 0)
  return (VAR_0);
 if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
  return (VAR_0);
 if (VAR_24[1] != 0x47)
  return (VAR_0);

 FUNC_2(&VAR_23, sizeof(VAR_23));
 VAR_23.infoMinor = VAR_24[0];
 VAR_23.infoMajor = VAR_24[2] & 0x0f;

 if (VAR_17 >= 2)
  FUNC_9("Synaptics Touchpad v%d.%d\n", VAR_23.infoMajor,
      VAR_23.infoMinor);

 if (VAR_23.infoMajor < 4) {
  FUNC_9("  Unsupported (pre-v4) Touchpad detected\n");
  return (VAR_0);
 }


 if (FUNC_8(VAR_22, VAR_11) == 0)
  return (VAR_0);
 if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
  return (VAR_0);
 if ((VAR_24[1] & 0x01) != 0) {
  FUNC_9("  Failed to read model information\n");
  return (VAR_0);
 }

 VAR_23.infoRot180 = (VAR_24[0] & 0x80) != 0;
 VAR_23.infoPortrait = (VAR_24[0] & 0x40) != 0;
 VAR_23.infoSensor = VAR_24[0] & 0x3f;
 VAR_23.infoHardware = (VAR_24[1] & 0xfe) >> 1;
 VAR_23.infoNewAbs = (VAR_24[2] & 0x80) != 0;
 VAR_23.capPen = (VAR_24[2] & 0x40) != 0;
 VAR_23.infoSimplC = (VAR_24[2] & 0x20) != 0;
 VAR_23.infoGeometry = VAR_24[2] & 0x0f;

 if (VAR_17 >= 2) {
  FUNC_9("  Model information:\n");
  FUNC_9("   infoRot180: %d\n", VAR_23.infoRot180);
  FUNC_9("   infoPortrait: %d\n", VAR_23.infoPortrait);
  FUNC_9("   infoSensor: %d\n", VAR_23.infoSensor);
  FUNC_9("   infoHardware: %d\n", VAR_23.infoHardware);
  FUNC_9("   infoNewAbs: %d\n", VAR_23.infoNewAbs);
  FUNC_9("   capPen: %d\n", VAR_23.capPen);
  FUNC_9("   infoSimplC: %d\n", VAR_23.infoSimplC);
  FUNC_9("   infoGeometry: %d\n", VAR_23.infoGeometry);
 }


 if (FUNC_8(VAR_22, VAR_5) == 0)
  return (VAR_0);
 if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
  return (VAR_0);
 if (!FUNC_0(VAR_23, 7, 5) && VAR_24[1] != 0x47) {
  FUNC_9("  Failed to read extended capability bits\n");
  return (VAR_0);
 }

 VAR_20 = FUNC_4(FUNC_3(VAR_4),
     VAR_18->unit);
 VAR_21 = (VAR_20 != ((void*)0)) ? FUNC_5(VAR_20) : ((void*)0);


 VAR_25 = 0;
 VAR_23.capExtended = (VAR_24[0] & 0x80) != 0;
 if (VAR_23.capExtended) {
  VAR_23.nExtendedQueries = (VAR_24[0] & 0x70) >> 4;
  VAR_23.capMiddle = (VAR_24[0] & 0x04) != 0;
  VAR_23.capPassthrough = (VAR_24[2] & 0x80) != 0;
  VAR_23.capLowPower = (VAR_24[2] & 0x40) != 0;
  VAR_23.capMultiFingerReport =
      (VAR_24[2] & 0x20) != 0;
  VAR_23.capSleep = (VAR_24[2] & 0x10) != 0;
  VAR_23.capFourButtons = (VAR_24[2] & 0x08) != 0;
  VAR_23.capBallistics = (VAR_24[2] & 0x04) != 0;
  VAR_23.capMultiFinger = (VAR_24[2] & 0x02) != 0;
  VAR_23.capPalmDetect = (VAR_24[2] & 0x01) != 0;

  if (!FUNC_10(VAR_22, 1))
   return (VAR_0);
  if (FUNC_8(VAR_22, VAR_13) == 0)
   return (VAR_0);
  if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
   return (VAR_0);

  if (VAR_24[0] != 0 && (VAR_24[1] & 0x80) && VAR_24[2] != 0) {
   VAR_23.infoXupmm = VAR_24[0];
   VAR_23.infoYupmm = VAR_24[2];
  }

  if (VAR_17 >= 2) {
   FUNC_9("  Extended capabilities:\n");
   FUNC_9("   capExtended: %d\n", VAR_23.capExtended);
   FUNC_9("   capMiddle: %d\n", VAR_23.capMiddle);
   FUNC_9("   nExtendedQueries: %d\n",
       VAR_23.nExtendedQueries);
   FUNC_9("   capPassthrough: %d\n", VAR_23.capPassthrough);
   FUNC_9("   capLowPower: %d\n", VAR_23.capLowPower);
   FUNC_9("   capMultiFingerReport: %d\n",
       VAR_23.capMultiFingerReport);
   FUNC_9("   capSleep: %d\n", VAR_23.capSleep);
   FUNC_9("   capFourButtons: %d\n", VAR_23.capFourButtons);
   FUNC_9("   capBallistics: %d\n", VAR_23.capBallistics);
   FUNC_9("   capMultiFinger: %d\n", VAR_23.capMultiFinger);
   FUNC_9("   capPalmDetect: %d\n", VAR_23.capPalmDetect);
   FUNC_9("   infoXupmm: %d\n", VAR_23.infoXupmm);
   FUNC_9("   infoYupmm: %d\n", VAR_23.infoYupmm);
  }






  if (VAR_23.nExtendedQueries >= 1) {
   if (!FUNC_10(VAR_22, 1))
    return (VAR_0);
   if (FUNC_8(VAR_22,
       VAR_7) == 0)
    return (VAR_0);
   if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
    return (VAR_0);
   VAR_23.verticalScroll = (VAR_24[0] & 0x01) != 0;
   VAR_23.horizontalScroll = (VAR_24[0] & 0x02) != 0;
   VAR_23.verticalWheel = (VAR_24[0] & 0x08) != 0;
   VAR_23.nExtendedButtons = (VAR_24[1] & 0xf0) >> 4;
   VAR_23.capEWmode = (VAR_24[0] & 0x04) != 0;
   if (VAR_17 >= 2) {
    FUNC_9("  Extended model ID:\n");
    FUNC_9("   verticalScroll: %d\n",
        VAR_23.verticalScroll);
    FUNC_9("   horizontalScroll: %d\n",
        VAR_23.horizontalScroll);
    FUNC_9("   verticalWheel: %d\n",
        VAR_23.verticalWheel);
    FUNC_9("   nExtendedButtons: %d\n",
        VAR_23.nExtendedButtons);
    FUNC_9("   capEWmode: %d\n",
        VAR_23.capEWmode);
   }





   VAR_25 = VAR_23.nExtendedButtons + VAR_23.capMiddle;
  } else




   VAR_25 = VAR_23.capFourButtons ? 1 : 0;


  if (VAR_23.nExtendedQueries >= 4) {
   if (!FUNC_10(VAR_22, 1))
    return (VAR_0);
   if (FUNC_8(VAR_22,
       VAR_6) == 0)
    return (VAR_0);
   if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
    return (VAR_0);

   VAR_23.capClickPad = (VAR_24[1] & 0x01) << 1;
   VAR_23.capClickPad |= (VAR_24[0] & 0x10) != 0;
   VAR_23.capDeluxeLEDs = (VAR_24[1] & 0x02) != 0;
   VAR_23.noAbsoluteFilter = (VAR_24[1] & 0x04) != 0;
   VAR_23.capReportsV = (VAR_24[1] & 0x08) != 0;
   VAR_23.capUniformClickPad = (VAR_24[1] & 0x10) != 0;
   VAR_23.capReportsMin = (VAR_24[1] & 0x20) != 0;
   VAR_23.capInterTouch = (VAR_24[1] & 0x40) != 0;
   VAR_23.capReportsMax = (VAR_24[0] & 0x02) != 0;
   VAR_23.capClearPad = (VAR_24[0] & 0x04) != 0;
   VAR_23.capAdvancedGestures = (VAR_24[0] & 0x08) != 0;
   VAR_23.capCoveredPad = (VAR_24[0] & 0x80) != 0;

   if (VAR_23.capReportsMax) {
    if (!FUNC_10(VAR_22, 1))
     return (VAR_0);
    if (FUNC_8(VAR_22,
        VAR_9) == 0)
     return (VAR_0);
    if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
     return (VAR_0);

    VAR_23.maximumXCoord = (VAR_24[0] << 5) |
           ((VAR_24[1] & 0x0f) << 1);
    VAR_23.maximumYCoord = (VAR_24[2] << 5) |
           ((VAR_24[1] & 0xf0) >> 3);
   } else {




    VAR_23.maximumXCoord = 5472;
    VAR_23.maximumYCoord = 4448;
   }

   if (VAR_23.capReportsMin) {
    if (!FUNC_10(VAR_22, 1))
     return (VAR_0);
    if (FUNC_8(VAR_22,
        VAR_10) == 0)
     return (VAR_0);
    if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
     return (VAR_0);

    VAR_23.minimumXCoord = (VAR_24[0] << 5) |
           ((VAR_24[1] & 0x0f) << 1);
    VAR_23.minimumYCoord = (VAR_24[2] << 5) |
           ((VAR_24[1] & 0xf0) >> 3);
   } else {




    VAR_23.minimumXCoord = 1472;
    VAR_23.minimumYCoord = 1408;
   }





   if (VAR_23.capClickPad && VAR_21 != ((void*)0)) {
    switch (VAR_21->type) {
    case 129:
     VAR_23.forcePad = 1;
     break;
    case 128:
     VAR_23.topButtonPad = 1;
     break;
    default:
     break;
    }
   }

   if (VAR_17 >= 2) {
    FUNC_9("  Continued capabilities:\n");
    FUNC_9("   capClickPad: %d\n",
           VAR_23.capClickPad);
    FUNC_9("   capDeluxeLEDs: %d\n",
           VAR_23.capDeluxeLEDs);
    FUNC_9("   noAbsoluteFilter: %d\n",
           VAR_23.noAbsoluteFilter);
    FUNC_9("   capReportsV: %d\n",
           VAR_23.capReportsV);
    FUNC_9("   capUniformClickPad: %d\n",
           VAR_23.capUniformClickPad);
    FUNC_9("   capReportsMin: %d\n",
           VAR_23.capReportsMin);
    FUNC_9("   capInterTouch: %d\n",
           VAR_23.capInterTouch);
    FUNC_9("   capReportsMax: %d\n",
           VAR_23.capReportsMax);
    FUNC_9("   capClearPad: %d\n",
           VAR_23.capClearPad);
    FUNC_9("   capAdvancedGestures: %d\n",
           VAR_23.capAdvancedGestures);
    FUNC_9("   capCoveredPad: %d\n",
           VAR_23.capCoveredPad);
    if (VAR_23.capReportsMax) {
     FUNC_9("   maximumXCoord: %d\n",
            VAR_23.maximumXCoord);
     FUNC_9("   maximumYCoord: %d\n",
            VAR_23.maximumYCoord);
    }
    if (VAR_23.capReportsMin) {
     FUNC_9("   minimumXCoord: %d\n",
            VAR_23.minimumXCoord);
     FUNC_9("   minimumYCoord: %d\n",
            VAR_23.minimumYCoord);
    }
    if (VAR_23.capClickPad) {
     FUNC_9("  Clickpad capabilities:\n");
     FUNC_9("   forcePad: %d\n",
            VAR_23.forcePad);
     FUNC_9("   topButtonPad: %d\n",
            VAR_23.topButtonPad);
    }
   }
   VAR_25 += VAR_23.capClickPad;
  }
 }

 if (VAR_17 >= 2) {
  if (VAR_23.capExtended)
   FUNC_9("  Additional Buttons: %d\n", VAR_25);
  else
   FUNC_9("  No extended capabilities\n");
 }





 VAR_25 += 3;
 if (FUNC_8(VAR_22, VAR_12) == 0)
  return (VAR_0);
 if (FUNC_7(VAR_22, VAR_24, 0, 3) != 3)
  return (VAR_0);
 if (!FUNC_0(VAR_23, 7, 5) && VAR_24[1] != 0x47) {
  FUNC_9("  Failed to read mode byte\n");
  return (VAR_0);
 }

 if (VAR_19 == VAR_3)
  VAR_18->synhw = VAR_23;
 if (!VAR_15)
  return (VAR_0);


 VAR_18->hw.model = VAR_2;

 FUNC_12(VAR_18, FUNC_11(VAR_18));

 if (VAR_16 && VAR_23.capPassthrough) {
  FUNC_6(VAR_18, VAR_19);
 }

 FUNC_1(3, (VAR_1, "synaptics: END init (%d buttons)\n", VAR_25));

 if (VAR_19 == VAR_3) {

  FUNC_13(VAR_18, "synaptics",
      "Synaptics TouchPad");
  VAR_18->hw.buttons = VAR_25;
 }

 return (VAR_14);
}
