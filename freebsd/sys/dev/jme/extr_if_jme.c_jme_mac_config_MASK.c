
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_active; } ;
struct jme_softc {int jme_flags; scalar_t__ jme_rev; scalar_t__ jme_chip_rev; int jme_phyaddr; int jme_dev; int jme_miibus; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_3 (int ) ;
 int const FUNC_4 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct jme_softc*) ;
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
 struct mii_data* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_8(struct jme_softc *VAR_33)
{
 struct mii_data *VAR_34;
 uint32_t VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 uint32_t VAR_40;

 FUNC_5(VAR_33);

 VAR_34 = FUNC_6(VAR_33->jme_miibus);

 FUNC_1(VAR_33, VAR_17, VAR_3);
 FUNC_2(10);
 FUNC_1(VAR_33, VAR_17, 0);
 VAR_35 = 0;
 VAR_40 = 0;
 VAR_37 = FUNC_0(VAR_33, VAR_19);
 VAR_37 &= ~VAR_24;
 VAR_38 = FUNC_0(VAR_33, VAR_20);
 VAR_38 &= ~(VAR_26 | VAR_29);
 VAR_39 = FUNC_0(VAR_33, VAR_21);
 VAR_39 &= ~VAR_30;
 if ((FUNC_3(VAR_34->mii_media_active) & VAR_14) != 0) {
  VAR_35 |= VAR_2;
  VAR_37 &= ~VAR_23;
  VAR_38 &= ~(VAR_28 | VAR_27 |
      VAR_25 | VAR_26 |
      VAR_29);
  if ((FUNC_3(VAR_34->mii_media_active) & VAR_13) != 0)
   VAR_39 |= VAR_30;
  if ((FUNC_3(VAR_34->mii_media_active) & VAR_12) != 0)
   VAR_37 |= VAR_24;

  FUNC_1(VAR_33, VAR_22, FUNC_0(VAR_33, VAR_22) &
      ~(VAR_32 | VAR_31));
 } else {
  VAR_37 |= VAR_23;
  VAR_38 |= VAR_28 | VAR_27 | VAR_25;

  FUNC_1(VAR_33, VAR_22, FUNC_0(VAR_33, VAR_22) |
      VAR_32 | VAR_31);
 }

 switch (FUNC_4(VAR_34->mii_media_active)) {
 case 128:
  VAR_35 |= VAR_4;
  VAR_40 |= VAR_9 | VAR_7;
  break;
 case 129:
  VAR_35 |= VAR_5;
  VAR_40 |= VAR_9 | VAR_7;
  break;
 case 130:
  if ((VAR_33->jme_flags & VAR_15) != 0)
   break;
  VAR_35 |= VAR_6;
  VAR_40 |= VAR_10 | VAR_8;
  if ((FUNC_3(VAR_34->mii_media_active) & VAR_14) == 0)
   VAR_38 |= VAR_26 | VAR_29;
  break;
 default:
  break;
 }
 if (VAR_33->jme_rev == VAR_0 &&
     VAR_33->jme_chip_rev == VAR_1) {




  VAR_36 = FUNC_0(VAR_33, VAR_18);
  if ((FUNC_3(VAR_34->mii_media_active) & VAR_14) != 0)
   VAR_36 &= ~VAR_11;
  else
   VAR_36 |= VAR_11;
  FUNC_1(VAR_33, VAR_18, VAR_36);

  if (FUNC_4(VAR_34->mii_media_active) == 129) {

   FUNC_7(VAR_33->jme_dev, VAR_33->jme_phyaddr,
       0x1B, 0x0000);
  } else {

   FUNC_7(VAR_33->jme_dev, VAR_33->jme_phyaddr,
       0x1B, 0x0004);
  }
 }
 if ((VAR_33->jme_flags & VAR_16) != 0)
  VAR_35 |= VAR_40;
 FUNC_1(VAR_33, VAR_17, VAR_35);
 FUNC_1(VAR_33, VAR_19, VAR_37);
 FUNC_1(VAR_33, VAR_20, VAR_38);
 FUNC_1(VAR_33, VAR_21, VAR_39);
}
