
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfe_softc {int nfe_flags; } ;
struct mii_data {int mii_media_active; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct nfe_softc*) ;
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
 int FUNC_3 (struct nfe_softc*,int ) ;
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
 int FUNC_4 (struct nfe_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct nfe_softc *VAR_31, struct mii_data *VAR_32)
{
 uint32_t VAR_33, VAR_34, VAR_35, VAR_36;
 uint32_t VAR_37;

 FUNC_2(VAR_31);

 VAR_35 = FUNC_3(VAR_31, VAR_16);
 VAR_35 &= ~(VAR_15 | VAR_14 | VAR_13);

 VAR_36 = FUNC_3(VAR_31, VAR_20);
 VAR_36 &= ~VAR_25;

 VAR_34 = VAR_10;
 VAR_33 = VAR_7;

 if ((FUNC_0(VAR_32->mii_media_active) & VAR_2) == 0) {
  VAR_35 |= VAR_15;
  VAR_34 |= VAR_9;
 }

 switch (FUNC_1(VAR_32->mii_media_active)) {
 case 130:
  VAR_33 |= VAR_4;
  VAR_36 |= VAR_22;
  VAR_35 |= VAR_13;
  break;
 case 129:
  VAR_33 |= VAR_5;
  VAR_36 |= VAR_23;
  VAR_35 |= VAR_14;
  break;
 case 128:
  VAR_33 |= VAR_6;
  VAR_36 |= VAR_24;
  break;
 }

 if ((VAR_35 & 0x10000000) != 0) {
  if (FUNC_1(VAR_32->mii_media_active) == 130)
   VAR_37 = VAR_17;
  else
   VAR_37 = VAR_18;
 } else
  VAR_37 = VAR_19;
 FUNC_4(VAR_31, VAR_26, VAR_37);

 FUNC_4(VAR_31, VAR_20, VAR_36);

 FUNC_4(VAR_31, VAR_16, VAR_35);
 FUNC_4(VAR_31, VAR_8, VAR_34);
 FUNC_4(VAR_31, VAR_3, VAR_33);

 if ((FUNC_0(VAR_32->mii_media_active) & VAR_2) != 0) {

  VAR_37 = FUNC_3(VAR_31, VAR_21);
  if ((FUNC_0(VAR_32->mii_media_active) &
      VAR_0) != 0)
   VAR_37 |= VAR_12;
  else
   VAR_37 &= ~VAR_12;
  FUNC_4(VAR_31, VAR_21, VAR_37);
  if ((VAR_31->nfe_flags & VAR_27) != 0) {
   VAR_37 = FUNC_3(VAR_31, VAR_8);
   if ((FUNC_0(VAR_32->mii_media_active) &
       VAR_1) != 0) {
    FUNC_4(VAR_31, VAR_28,
        VAR_30);
    VAR_37 |= VAR_11;
   } else {
    VAR_37 &= ~VAR_11;
    FUNC_4(VAR_31, VAR_28,
        VAR_29);
   }
   FUNC_4(VAR_31, VAR_8, VAR_37);
  }
 } else {

  VAR_37 = FUNC_3(VAR_31, VAR_21);
  VAR_37 &= ~VAR_12;
  FUNC_4(VAR_31, VAR_21, VAR_37);
  if ((VAR_31->nfe_flags & VAR_27) != 0) {
   FUNC_4(VAR_31, VAR_28,
       VAR_29);
   VAR_37 = FUNC_3(VAR_31, VAR_8);
   VAR_37 &= ~VAR_11;
   FUNC_4(VAR_31, VAR_8, VAR_37);
  }
 }
}
