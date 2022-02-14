
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {struct mii_data* mii_pdata; } ;
struct mii_data {int mii_media_active; int mii_media_status; } ;


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
 int FUNC_0 (struct mii_softc*,int ) ;
 int VAR_16 ;
 int VAR_17 ;


 int VAR_18 ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_19)
{
 struct mii_data *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_20 = VAR_19->mii_pdata;

 VAR_20->mii_media_status = VAR_7;
 VAR_20->mii_media_active = VAR_8;

 VAR_21 = FUNC_0(VAR_19, VAR_14) | FUNC_0(VAR_19, VAR_14);
 VAR_23 = FUNC_0(VAR_19, VAR_15);

 if ((VAR_23 & VAR_17) != 0)
  VAR_20->mii_media_status |= VAR_6;

 VAR_22 = FUNC_0(VAR_19, VAR_13);
 if ((VAR_22 & VAR_1) != 0) {
  VAR_20->mii_media_active |= VAR_12;
  VAR_20->mii_media_status = 0;
  return;
 }

 if ((VAR_22 & VAR_2) != 0)
  VAR_20->mii_media_active |= VAR_11;

 if ((VAR_22 & VAR_0) != 0) {
  if ((VAR_21 & VAR_3) == 0) {

   VAR_20->mii_media_active |= VAR_12;
   return;
  }
 }

 switch (VAR_23 & VAR_18) {
 case 128:
  VAR_20->mii_media_active |= VAR_4;
  break;
 case 129:
  VAR_20->mii_media_active |= VAR_5;
  break;
 default:
  VAR_20->mii_media_active |= VAR_12;
  return;
 }
 if ((VAR_23 & VAR_16) != 0)
  VAR_20->mii_media_active |= VAR_9 | FUNC_1(VAR_19);
 else
  VAR_20->mii_media_active |= VAR_10;
}
