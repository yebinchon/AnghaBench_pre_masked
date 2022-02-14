
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_flags; int mii_extcapabilities; struct mii_data* mii_pdata; } ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*) ;

void
FUNC_2(struct mii_softc *VAR_36)
{
 struct mii_data *VAR_37 = VAR_36->mii_pdata;
 struct ifmedia_entry *VAR_38 = VAR_37->mii_media.ifm_cur;
 int VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;

 VAR_37->mii_media_status = VAR_22;
 VAR_37->mii_media_active = VAR_23;

 VAR_39 = FUNC_0(VAR_36, VAR_35) | FUNC_0(VAR_36, VAR_35);
 if (VAR_39 & VAR_9)
  VAR_37->mii_media_status |= VAR_21;

 VAR_40 = FUNC_0(VAR_36, VAR_34);
 if (VAR_40 & VAR_6) {
  VAR_37->mii_media_active |= VAR_28;
  VAR_37->mii_media_status = 0;
  return;
 }

 if (VAR_40 & VAR_7)
  VAR_37->mii_media_active |= VAR_27;

 if (VAR_40 & VAR_5) {





  if ((VAR_39 & VAR_8) == 0) {

   VAR_37->mii_media_active |= VAR_28;
   return;
  }

  VAR_41 = FUNC_0(VAR_36, VAR_32) & FUNC_0(VAR_36, VAR_33);
  if ((VAR_36->mii_flags & VAR_29) != 0 &&
      (VAR_36->mii_extcapabilities &
      (VAR_11 | VAR_10)) != 0) {
   VAR_42 = FUNC_0(VAR_36, VAR_30);
   VAR_43 = FUNC_0(VAR_36, VAR_31);
  } else
   VAR_42 = VAR_43 = 0;

  if ((VAR_42 & VAR_12) && (VAR_43 & VAR_14))
   VAR_37->mii_media_active |= VAR_17|VAR_25;
  else if ((VAR_42 & VAR_13) &&
      (VAR_43 & VAR_15))
   VAR_37->mii_media_active |= VAR_17|VAR_26;
  else if (VAR_41 & VAR_4)
   VAR_37->mii_media_active |= VAR_19|VAR_25;
  else if (VAR_41 & VAR_2)
   VAR_37->mii_media_active |= VAR_18|VAR_26;
  else if (VAR_41 & VAR_3)
   VAR_37->mii_media_active |= VAR_19|VAR_26;
  else if (VAR_41 & VAR_1)
   VAR_37->mii_media_active |= VAR_20|VAR_25;
  else if (VAR_41 & VAR_0)
   VAR_37->mii_media_active |= VAR_20|VAR_26;
  else
   VAR_37->mii_media_active |= VAR_28;

  if ((VAR_37->mii_media_active & VAR_17) != 0 &&
      (VAR_43 & VAR_16) != 0)
   VAR_37->mii_media_active |= VAR_24;

  if ((VAR_37->mii_media_active & VAR_25) != 0)
   VAR_37->mii_media_active |= FUNC_1(VAR_36);
 } else
  VAR_37->mii_media_active = VAR_38->ifm_media;
}
