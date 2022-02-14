
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct cs4231_softc {int sc_flags; int sc_dev; } ;
struct cs4231_channel {scalar_t__ locked; scalar_t__ dir; struct cs4231_softc* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cs4231_softc*,int ) ;
 int FUNC_1 (struct cs4231_softc*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct cs4231_softc*) ;
 int VAR_10 ;
 int FUNC_3 (struct cs4231_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int FUNC_5 (struct cs4231_softc*,int ) ;
 int FUNC_6 (struct cs4231_softc*,int ,int) ;
 int VAR_15 ;
 int FUNC_7 (struct cs4231_softc*,int ) ;
 int FUNC_8 (struct cs4231_softc*,int ,int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct cs4231_softc*,int ) ;
 int FUNC_10 (struct cs4231_softc*,int ,int) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void
FUNC_12(struct cs4231_channel *VAR_19)
{
 struct cs4231_softc *VAR_20;
 u_int8_t VAR_21;
 int VAR_22;

 VAR_20 = VAR_19->parent;
 FUNC_2(VAR_20);
 if (VAR_19->locked == 0) {
  FUNC_3(VAR_20);
  return;
 }

 if (VAR_19->dir == VAR_16 ) {
  if ((VAR_20->sc_flags & VAR_10) != 0) {

   FUNC_1(VAR_20, VAR_0, FUNC_0(VAR_20, VAR_0) &
       ~(VAR_2 | VAR_4 | VAR_6 |
       VAR_3 | VAR_5 | VAR_7));
  } else {
   FUNC_8(VAR_20, VAR_15,
       FUNC_7(VAR_20, VAR_15) & ~VAR_14);
  }

  VAR_21 = FUNC_9(VAR_20, VAR_12);
  for (VAR_22 = VAR_13;
      VAR_22 && (VAR_21 & VAR_18) == 0; VAR_22--) {
   FUNC_4(5);
   VAR_21 = FUNC_9(VAR_20, VAR_12);
  }
  if (VAR_22 == 0)
   FUNC_11(VAR_20->sc_dev, "timeout waiting for "
       "playback FIFO drain\n");
  FUNC_10(VAR_20, VAR_11,
      FUNC_9(VAR_20, VAR_11) & (~VAR_17));
 } else {
  if ((VAR_20->sc_flags & VAR_10) != 0) {

   FUNC_1(VAR_20, VAR_0, VAR_1);
  } else {
   FUNC_6(VAR_20, VAR_15,
       FUNC_5(VAR_20, VAR_15) & ~VAR_14);
  }

  VAR_21 = FUNC_9(VAR_20, VAR_12);
  for (VAR_22 = VAR_13;
      VAR_22 && (VAR_21 & VAR_9) == 0; VAR_22--) {
   FUNC_4(5);
   VAR_21 = FUNC_9(VAR_20, VAR_12);
  }
  if (VAR_22 == 0)
   FUNC_11(VAR_20->sc_dev, "timeout waiting for "
       "capture FIFO drain\n");
  FUNC_10(VAR_20, VAR_11,
      FUNC_9(VAR_20, VAR_11) & (~VAR_8));
 }
 VAR_19->locked = 0;
 FUNC_3(VAR_20);
}
