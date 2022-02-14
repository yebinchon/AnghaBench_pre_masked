
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int state; int kbdc; int unit; int mode; int lastinputerr; scalar_t__ pkterrors; scalar_t__ syncerrors; int callout; int watchdog; } ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct psm_softc*,int *) ;
 int FUNC_4 (struct psm_softc*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct psm_softc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;

__attribute__((used)) static int
FUNC_17(struct psm_softc *VAR_16, int VAR_17)
{
 int VAR_18;
 int VAR_19;
 int VAR_20;


 if (!FUNC_10(VAR_16->kbdc, VAR_15))
  return (VAR_0);
 VAR_20 = FUNC_15();


 VAR_16->watchdog = VAR_2;
 FUNC_1(&VAR_16->callout);


 FUNC_6(VAR_16->kbdc, 10);
 VAR_19 = FUNC_8(VAR_16->kbdc);
 FUNC_0(2, (VAR_9,
     "psm%d: current command byte: %04x (reinitialize).\n",
     VAR_16->unit, VAR_19));


 if ((VAR_19 == -1) || !FUNC_14(VAR_16->kbdc,
     FUNC_9(VAR_16->kbdc),
     VAR_6 | VAR_5 |
     VAR_7 | VAR_3)) {

  FUNC_16(VAR_20);
  FUNC_10(VAR_16->kbdc, VAR_2);
  FUNC_11(VAR_10,
      "psm%d: unable to set the command byte (reinitialize).\n",
      VAR_16->unit);
  return (VAR_0);
 }


 if (VAR_16->state & VAR_14) {

  FUNC_2(VAR_16->kbdc);
  FUNC_5(VAR_16->kbdc, 10);
 }
 FUNC_7(VAR_16);
 VAR_16->syncerrors = 0;
 VAR_16->pkterrors = 0;
 FUNC_12(&VAR_16->lastinputerr, 0, sizeof(VAR_16->lastinputerr));


 VAR_18 = 0;
 if (VAR_17) {
  if (FUNC_3(VAR_16, &VAR_16->mode)) {

   VAR_16->state |= VAR_14;
  } else {

   FUNC_13(VAR_16->kbdc, VAR_19);
   VAR_16->state &= ~VAR_14;
   FUNC_11(VAR_10,
       "psm%d: the aux device has gone! (reinitialize).\n",
       VAR_16->unit);
   VAR_18 = VAR_1;
  }
 }
 FUNC_16(VAR_20);


 if ((VAR_16->state & (VAR_13 | VAR_12 | VAR_11)) &&
     (VAR_18 == 0)) {

  VAR_18 = FUNC_4(VAR_16, VAR_19);
  if (VAR_18 != 0)
   FUNC_11(VAR_10, "psm%d: failed to enable the device "
       "(reinitialize).\n", VAR_16->unit);
 } else {

  if (!FUNC_14(VAR_16->kbdc,
      FUNC_9(VAR_16->kbdc),
      (VAR_19 & VAR_8) |
      VAR_4 | VAR_3)) {

   FUNC_11(VAR_10, "psm%d: failed to disable the aux port "
       "(reinitialize).\n", VAR_16->unit);
   VAR_18 = VAR_0;
  }
 }

 FUNC_10(VAR_16->kbdc, VAR_2);
 return (VAR_18);
}
