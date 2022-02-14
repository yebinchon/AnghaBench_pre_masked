
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_extcapabilities; struct mii_data* mii_pdata; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {int mii_media_active; int mii_media_status; TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


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
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_18)
{
 struct mii_data *VAR_19 = VAR_18->mii_pdata;
 struct ifmedia_entry *VAR_20 = VAR_19->mii_media.ifm_cur;
 int VAR_21, VAR_22, VAR_23;

 VAR_19->mii_media_status = VAR_9;
 VAR_19->mii_media_active = VAR_10;

 VAR_21 = FUNC_0(VAR_18, VAR_17) | FUNC_0(VAR_18, VAR_17);

 if (VAR_21 & VAR_5)
  VAR_19->mii_media_status |= VAR_8;

 VAR_22 = FUNC_0(VAR_18, VAR_16);
 if (VAR_22 & VAR_2) {
  VAR_19->mii_media_active |= VAR_14;
  VAR_19->mii_media_status = 0;
  return;
 }

 if (VAR_22 & VAR_3)
  VAR_19->mii_media_active |= VAR_13;

 if (VAR_22 & VAR_1) {




  if ((VAR_21 & VAR_4) == 0) {

   VAR_19->mii_media_active |= VAR_14;
   return;
  }





  VAR_19->mii_media_active |= VAR_7;
  VAR_23 = FUNC_0(VAR_18, VAR_15);
  if ((VAR_18->mii_extcapabilities & VAR_6) != 0 &&
      (VAR_23 & VAR_0) != 0)
   VAR_19->mii_media_active |=
       VAR_11 | FUNC_1(VAR_18);
  else
   VAR_19->mii_media_active |= VAR_12;
 } else
  VAR_19->mii_media_active = VAR_20->ifm_media;
}
