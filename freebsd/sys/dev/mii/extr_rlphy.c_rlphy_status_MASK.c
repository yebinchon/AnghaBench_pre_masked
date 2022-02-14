
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {scalar_t__ mii_mpd_model; scalar_t__ mii_mpd_rev; struct mii_data* mii_pdata; } ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct mii_softc*,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_26)
{
 struct mii_data *VAR_27 = VAR_26->mii_pdata;
 struct ifmedia_entry *VAR_28 = VAR_27->mii_media.ifm_cur;
 int VAR_29, VAR_30, VAR_31;

 VAR_27->mii_media_status = VAR_14;
 VAR_27->mii_media_active = VAR_15;

 VAR_29 = FUNC_0(VAR_26, VAR_23) | FUNC_0(VAR_26, VAR_23);
 if (VAR_29 & VAR_9)
  VAR_27->mii_media_status |= VAR_13;

 VAR_30 = FUNC_0(VAR_26, VAR_22);
 if (VAR_30 & VAR_6) {
  VAR_27->mii_media_active |= VAR_19;
  VAR_27->mii_media_status = 0;
  return;
 }

 if (VAR_30 & VAR_7)
  VAR_27->mii_media_active |= VAR_18;

 if (VAR_30 & VAR_5) {





  if ((VAR_29 & VAR_8) == 0) {

   VAR_27->mii_media_active |= VAR_19;
   return;
  }

  if ((VAR_31 = FUNC_0(VAR_26, VAR_20) &
      FUNC_0(VAR_26, VAR_21))) {
   if (VAR_31 & VAR_4)
    VAR_27->mii_media_active |= VAR_11|VAR_16;
   else if (VAR_31 & VAR_2)
    VAR_27->mii_media_active |= VAR_10|VAR_17;
   else if (VAR_31 & VAR_3)
    VAR_27->mii_media_active |= VAR_11|VAR_17;
   else if (VAR_31 & VAR_1)
    VAR_27->mii_media_active |= VAR_12|VAR_16;
   else if (VAR_31 & VAR_0)
    VAR_27->mii_media_active |= VAR_12|VAR_17;
   else
    VAR_27->mii_media_active |= VAR_19;
   if ((VAR_27->mii_media_active & VAR_16) != 0)
    VAR_27->mii_media_active |=
        FUNC_1(VAR_26);
   return;
  }
  if (!(VAR_26->mii_mpd_model == 0 && VAR_26->mii_mpd_rev == 0)) {
   if (FUNC_0(VAR_26, 0x0019) & 0x01)
    VAR_27->mii_media_active |= VAR_11;
   else
    VAR_27->mii_media_active |= VAR_12;
  } else {
   if (FUNC_0(VAR_26, VAR_24) &
       VAR_25)
    VAR_27->mii_media_active |= VAR_12;
   else
    VAR_27->mii_media_active |= VAR_11;
  }
  VAR_27->mii_media_active |= VAR_17;
 } else
  VAR_27->mii_media_active = VAR_28->ifm_media;
}
