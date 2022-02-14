
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
 int FUNC_0 (struct mii_softc*,int ) ;
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

__attribute__((used)) static void
FUNC_1(struct mii_softc *VAR_19)
{
 struct mii_data *VAR_20 = VAR_19->mii_pdata;
 int VAR_21, VAR_22, VAR_23;

 VAR_20->mii_media_status = VAR_2;
 VAR_20->mii_media_active = VAR_3;

 VAR_21 = FUNC_0(VAR_19, VAR_17) |
     FUNC_0(VAR_19, VAR_17);
 if (VAR_21 & VAR_13)
  VAR_20->mii_media_status |= VAR_1;


 VAR_22 = FUNC_0(VAR_19, VAR_18);

 VAR_22 = FUNC_0(VAR_19, VAR_16);

 if (VAR_22 & VAR_11)
  VAR_20->mii_media_active |= VAR_6;

 if (VAR_22 & VAR_9) {
  if ((VAR_21 & VAR_12) == 0) {
   if (VAR_21 & VAR_13) {
    VAR_20->mii_media_active |= VAR_0|VAR_5;
    return;
   }

   VAR_20->mii_media_active |= VAR_7;
   return;
  }

  VAR_20->mii_media_active |= VAR_0;
  VAR_23 = FUNC_0(VAR_19, VAR_14) &
      FUNC_0(VAR_19, VAR_15);
  if (VAR_23 & VAR_8)
   VAR_20->mii_media_active |= VAR_4;
  else
   VAR_20->mii_media_active |= VAR_5;
  return;
 }

 VAR_20->mii_media_active |= VAR_0;
 if (VAR_22 & VAR_10)
  VAR_20->mii_media_active |= VAR_4;
 else
  VAR_20->mii_media_active |= VAR_5;
}
