
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct cs4231_softc {int sc_burst; int sc_dev; } ;
struct cs4231_channel {int locked; scalar_t__ dir; int togo; int nextaddr; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct cs4231_softc*) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
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
 int FUNC_3 (struct cs4231_softc*,int ) ;
 int FUNC_4 (struct cs4231_softc*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct cs4231_softc*,int ) ;
 int FUNC_6 (struct cs4231_softc*,int ,int) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (struct cs4231_softc*,int ) ;
 int FUNC_8 (struct cs4231_softc*,int ,int) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct cs4231_softc *VAR_19, struct cs4231_channel *VAR_20)
{
 u_int32_t VAR_21, VAR_22;
 u_int32_t VAR_23;

 FUNC_0(VAR_19);
 if (VAR_20->locked) {
  FUNC_9(VAR_19->sc_dev, "%s channel already triggered\n",
      VAR_20->dir == VAR_17 ? "playback" : "capture");
  FUNC_1(VAR_19);
  return;
 }

 VAR_23 = FUNC_10(VAR_20->buffer);
 VAR_22 = FUNC_11(VAR_20->buffer) / 2;
 if (VAR_22 % 64 == 0)
  VAR_19->sc_burst = VAR_5;
 else if (VAR_22 % 32 == 0)
  VAR_19->sc_burst = VAR_7;
 else if (VAR_22 % 16 == 0)
  VAR_19->sc_burst = VAR_6;
 else
  VAR_19->sc_burst = VAR_4;
 VAR_20->togo = VAR_22;
 FUNC_2(("TRG: DNAR = 0x%x, togo = 0x%x\n", VAR_23, VAR_22));
 if (VAR_20->dir == VAR_17) {
  FUNC_7(VAR_19, VAR_2);
  VAR_21 = FUNC_5(VAR_19, VAR_16);

  if (VAR_21 & VAR_9) {
   FUNC_6(VAR_19, VAR_15, VAR_22);
   FUNC_6(VAR_19, VAR_14, VAR_23);
  } else {
   FUNC_6(VAR_19, VAR_16, VAR_12);
   FUNC_6(VAR_19, VAR_16, VAR_19->sc_burst);
   FUNC_6(VAR_19, VAR_15, VAR_22);
   FUNC_6(VAR_19, VAR_14, VAR_23);

   FUNC_6(VAR_19, VAR_16, VAR_19->sc_burst |
       VAR_9 | VAR_10 | VAR_8 |
       VAR_11);
   FUNC_8(VAR_19, VAR_1,
       FUNC_7(VAR_19, VAR_1) |
       VAR_18);
  }

  if (FUNC_5(VAR_19, VAR_16) & VAR_3) {
   VAR_23 += VAR_22;
   FUNC_6(VAR_19, VAR_15, VAR_22);
   FUNC_6(VAR_19, VAR_14, VAR_23);
  }
 } else {
  FUNC_7(VAR_19, VAR_2);
  VAR_21 = FUNC_3(VAR_19, VAR_16);

  if (VAR_21 & VAR_9) {
   FUNC_4(VAR_19, VAR_15, VAR_22);
   FUNC_4(VAR_19, VAR_14, VAR_23);
  } else {
   FUNC_4(VAR_19, VAR_16, VAR_12);
   FUNC_4(VAR_19, VAR_16, VAR_19->sc_burst);
   FUNC_4(VAR_19, VAR_15, VAR_22);
   FUNC_4(VAR_19, VAR_14, VAR_23);

   FUNC_4(VAR_19, VAR_16, VAR_19->sc_burst |
       VAR_13 | VAR_9 | VAR_10 |
       VAR_8 | VAR_11);
   FUNC_8(VAR_19, VAR_1,
       FUNC_7(VAR_19, VAR_1) |
       VAR_0);
  }

  if (FUNC_3(VAR_19, VAR_16) & VAR_3) {
   VAR_23 += VAR_22;
   FUNC_4(VAR_19, VAR_15, VAR_22);
   FUNC_4(VAR_19, VAR_14, VAR_23);
  }
 }
 VAR_20->nextaddr = VAR_23;
 VAR_20->locked = 1;
 FUNC_1(VAR_19);
}
