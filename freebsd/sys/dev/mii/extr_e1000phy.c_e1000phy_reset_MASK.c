
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_flags; int mii_mpd_model; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (struct mii_softc*,int) ;
 int FUNC_7 (struct mii_softc*,int,int) ;

__attribute__((used)) static void
FUNC_8(struct mii_softc *VAR_24)
{
 uint16_t VAR_25, VAR_26;

 VAR_25 = FUNC_6(VAR_24, VAR_8);
 if ((VAR_24->mii_flags & VAR_22) != 0) {
  VAR_25 &= ~VAR_11;
  FUNC_7(VAR_24, VAR_8, VAR_25);
  if (VAR_24->mii_mpd_model == 136) {

   VAR_26 = FUNC_6(VAR_24, VAR_3);
   FUNC_7(VAR_24, VAR_3, 2);
   VAR_25 = FUNC_6(VAR_24, VAR_8);
   VAR_25 &= ~VAR_17;
   VAR_25 |= VAR_16;
   FUNC_7(VAR_24, VAR_8, VAR_25);
   if ((VAR_24->mii_flags & VAR_23) != 0) {

    FUNC_7(VAR_24, VAR_3, 1);
    VAR_25 = FUNC_6(VAR_24, VAR_8);
    VAR_25 |= VAR_14;
    FUNC_7(VAR_24, VAR_8, VAR_25);
   }
   FUNC_7(VAR_24, VAR_3, VAR_26);
  }
 } else {
  switch (VAR_24->mii_mpd_model) {
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 128:

   VAR_25 &= ~VAR_13;
   VAR_25 |= VAR_11;
   if (VAR_24->mii_mpd_model == 135 ||
       VAR_24->mii_mpd_model == 134)
    VAR_25 &= ~VAR_19;
   VAR_25 |= VAR_9;
   break;
  case 129:
   VAR_25 |= (VAR_11 >> 1);
   VAR_25 |= VAR_9;
   break;
  case 130:
   VAR_25 |= VAR_10;
   VAR_25 &= ~(VAR_12 |
       VAR_21);
   VAR_25 |= VAR_15;

   FUNC_7(VAR_24, 0x1C, FUNC_6(VAR_24, 0x1C) | 0x0001);
   break;
  default:
   VAR_25 &= ~VAR_11;
   VAR_25 |= VAR_9;
   break;
  }
  if (VAR_24->mii_mpd_model != 130) {

   VAR_25 &= ~VAR_18;
  }
  FUNC_7(VAR_24, VAR_8, VAR_25);

  if (VAR_24->mii_mpd_model == 135 ||
      VAR_24->mii_mpd_model == 134 ||
      VAR_24->mii_mpd_model == 132 ||
      VAR_24->mii_mpd_model == 131) {
   FUNC_7(VAR_24, VAR_3, 2);
   VAR_25 = FUNC_6(VAR_24, VAR_8);
   VAR_25 |= VAR_20;
   FUNC_7(VAR_24, VAR_8, VAR_25);
   FUNC_7(VAR_24, VAR_3, 0);
  }
 }

 switch (VAR_24->mii_mpd_model) {
 case 129:
 case 136:
 case 133:
  break;
 case 135:
 case 134:
  VAR_26 = FUNC_6(VAR_24, VAR_3);

  FUNC_7(VAR_24, VAR_3, 3);
  FUNC_7(VAR_24, VAR_8,
      FUNC_3(1) |
      FUNC_2(8) |
      FUNC_5(7) |
      FUNC_4(7));

  FUNC_7(VAR_24, VAR_6, FUNC_1(VAR_7) |
      FUNC_0(VAR_0));
  FUNC_7(VAR_24, VAR_3, VAR_26);
  break;
 case 130:

  FUNC_7(VAR_24, 0x16, 0x0B << 8 | 0x05 << 4 | 0x04);

  FUNC_7(VAR_24, 0x1D, 17);
  FUNC_7(VAR_24, 0x1E, 0x3F60);
  break;
 default:

  VAR_25 = FUNC_6(VAR_24, VAR_4);
  VAR_25 |= VAR_5;
  FUNC_7(VAR_24, VAR_4, VAR_25);
  break;
 }


 VAR_25 = FUNC_6(VAR_24, VAR_1);
 VAR_25 |= VAR_2;
 FUNC_7(VAR_24, VAR_1, VAR_25);
}
