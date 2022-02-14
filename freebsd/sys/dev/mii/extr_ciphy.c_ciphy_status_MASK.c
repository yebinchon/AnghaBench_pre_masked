
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_dev; struct mii_data* mii_pdata; } ;
struct mii_data {scalar_t__ mii_media_active; int mii_media_status; } ;


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



 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_21 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_22)
{
 struct mii_data *VAR_23 = VAR_22->mii_pdata;
 int VAR_24, VAR_25;

 VAR_23->mii_media_status = VAR_14;
 VAR_23->mii_media_active = VAR_15;

 VAR_24 = FUNC_1(VAR_22, VAR_21) | FUNC_1(VAR_22, VAR_21);

 if (VAR_24 & VAR_0)
  VAR_23->mii_media_status |= VAR_13;

 VAR_25 = FUNC_1(VAR_22, VAR_9);

 if (VAR_25 & VAR_5)
  VAR_23->mii_media_active |= VAR_19;

 if (VAR_25 & VAR_4) {
  if ((VAR_24 & VAR_6) == 0) {

   VAR_23->mii_media_active |= VAR_20;
   return;
  }
 }

 VAR_24 = FUNC_1(VAR_22, VAR_8);
 switch (VAR_24 & VAR_3) {
 case 130:
  VAR_23->mii_media_active |= VAR_12;
  break;
 case 129:
  VAR_23->mii_media_active |= VAR_11;
  break;
 case 128:
  VAR_23->mii_media_active |= VAR_10;
  break;
 default:
  FUNC_2(VAR_22->mii_dev, "unknown PHY speed %x\n",
      VAR_24 & VAR_3);
  break;
 }

 if (VAR_24 & VAR_2)
  VAR_23->mii_media_active |= VAR_17 | FUNC_3(VAR_22);
 else
  VAR_23->mii_media_active |= VAR_18;

 if ((FUNC_0(VAR_23->mii_media_active) == VAR_10) &&
    (FUNC_1(VAR_22, VAR_7) & VAR_1) != 0)
  VAR_23->mii_media_active |= VAR_16;
}
