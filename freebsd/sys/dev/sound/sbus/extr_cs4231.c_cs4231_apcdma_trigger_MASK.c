
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct cs4231_softc {int sc_dev; } ;
struct cs4231_channel {int locked; scalar_t__ dir; int togo; int nextaddr; int buffer; } ;


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
 int FUNC_0 (struct cs4231_softc*,int ) ;
 int FUNC_1 (struct cs4231_softc*,int ,int) ;
 int VAR_18 ;
 int FUNC_2 (struct cs4231_softc*) ;
 int VAR_19 ;
 int FUNC_3 (struct cs4231_softc*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (struct cs4231_softc*,int ) ;
 int FUNC_6 (struct cs4231_softc*,int ,int) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct cs4231_softc *VAR_24, struct cs4231_channel *VAR_25)
{
 u_int32_t VAR_26, VAR_27;
 u_int32_t VAR_28;

 FUNC_2(VAR_24);
 if (VAR_25->locked) {
  FUNC_7(VAR_24->sc_dev, "%s channel already triggered\n",
      VAR_25->dir == VAR_22 ? "playback" : "capture");
  FUNC_3(VAR_24);
  return;
 }

 VAR_28 = FUNC_8(VAR_25->buffer);
 VAR_27 = FUNC_9(VAR_25->buffer) / 2;
 if (VAR_27 > VAR_19)
  VAR_27 = VAR_19;
 VAR_25->togo = VAR_27;
 if (VAR_25->dir == VAR_22) {
  FUNC_4(("TRG: PNVA = 0x%x, togo = 0x%x\n", VAR_28, VAR_27));

  FUNC_5(VAR_24, VAR_21);
  VAR_26 = FUNC_0(VAR_24, VAR_2);
  FUNC_1(VAR_24, VAR_17, VAR_28);
  FUNC_1(VAR_24, VAR_16, VAR_27);

  if ((VAR_26 & VAR_12) == 0 ||
      (VAR_26 & VAR_15) != 0) {
   FUNC_1(VAR_24, VAR_2, FUNC_0(VAR_24, VAR_2) &
       ~(VAR_13 | VAR_15));
   FUNC_1(VAR_24, VAR_2, FUNC_0(VAR_24, VAR_2) |
       VAR_10 | VAR_13 | VAR_9 |
       VAR_8 | VAR_14 | VAR_12);
   FUNC_6(VAR_24, VAR_20,
       FUNC_5(VAR_24, VAR_20) |
       VAR_23);
  }

  if (FUNC_0(VAR_24, VAR_2) & VAR_11) {
   VAR_28 += VAR_27;
   FUNC_1(VAR_24, VAR_17, VAR_28);
   FUNC_1(VAR_24, VAR_16, VAR_27);
  }
 } else {
  FUNC_4(("TRG: CNVA = 0x%x, togo = 0x%x\n", VAR_28, VAR_27));

  FUNC_5(VAR_24, VAR_21);
  FUNC_1(VAR_24, VAR_1, VAR_28);
  FUNC_1(VAR_24, VAR_0, VAR_27);
  VAR_26 = FUNC_0(VAR_24, VAR_2);
  if ((VAR_26 & VAR_4) == 0 ||
      (VAR_26 & VAR_7) != 0) {
   VAR_26 &= VAR_7;
   VAR_26 |= VAR_10 | VAR_6 | VAR_5 |
       VAR_8 | VAR_4;
   FUNC_1(VAR_24, VAR_2, VAR_26);
   FUNC_6(VAR_24, VAR_20,
       FUNC_5(VAR_24, VAR_20) |
       VAR_18);
  }

  if (FUNC_0(VAR_24, VAR_2) & VAR_3) {
   VAR_28 += VAR_27;
   FUNC_1(VAR_24, VAR_1, VAR_28);
   FUNC_1(VAR_24, VAR_0, VAR_27);
  }
 }
 VAR_25->nextaddr = VAR_28;
 VAR_25->locked = 1;
 FUNC_3(VAR_24);
}
