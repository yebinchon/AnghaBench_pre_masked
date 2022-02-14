
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {struct mii_data* mii_pdata; } ;
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
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_28)
{
 struct mii_data *VAR_29 = VAR_28->mii_pdata;
 struct ifmedia_entry *VAR_30 = VAR_29->mii_media.ifm_cur;
 int VAR_31, VAR_32, VAR_33, VAR_34;

 VAR_29->mii_media_status = VAR_17;
 VAR_29->mii_media_active = VAR_18;

 VAR_31 = FUNC_0(VAR_28, VAR_26) | FUNC_0(VAR_28, VAR_26);
 if (VAR_31 & VAR_9)
  VAR_29->mii_media_status |= VAR_16;

 VAR_32 = FUNC_0(VAR_28, VAR_25);
 if (VAR_32 & VAR_6) {
  VAR_29->mii_media_active |= VAR_22;
  VAR_29->mii_media_status = 0;
  return;
 }

 if (VAR_32 & VAR_7)
  VAR_29->mii_media_active |= VAR_21;

 if (VAR_32 & VAR_5) {





  if ((VAR_31 & VAR_8) == 0) {

   VAR_29->mii_media_active |= VAR_22;
   return;
  }

  VAR_33 = FUNC_0(VAR_28, VAR_23) & FUNC_0(VAR_28, VAR_24);




  if (VAR_33 & VAR_4)
   VAR_29->mii_media_active |= VAR_14|VAR_19;
  else if (VAR_33 & VAR_2)
   VAR_29->mii_media_active |= VAR_13|VAR_20;
  else if (VAR_33 & VAR_3)
   VAR_29->mii_media_active |= VAR_14|VAR_20;
  else if (VAR_33 & VAR_1)
   VAR_29->mii_media_active |= VAR_15|VAR_19;
  else if (VAR_33 & VAR_0)
   VAR_29->mii_media_active |= VAR_15|VAR_20;
  else {







   VAR_34 = FUNC_0(VAR_28, VAR_27);
   if (VAR_34 & VAR_11)
    VAR_29->mii_media_active |= VAR_15|VAR_20;
   else {
    if (VAR_34 & VAR_10)
     VAR_29->mii_media_active |= VAR_19;
    else
     VAR_29->mii_media_active |= VAR_20;
    if (VAR_34 & VAR_12)
     VAR_29->mii_media_active |= VAR_14;
    else
     VAR_29->mii_media_active |= VAR_15;
   }
  }
  if ((VAR_29->mii_media_active & VAR_19) != 0)
   VAR_29->mii_media_active |= FUNC_1(VAR_28);
 } else
  VAR_29->mii_media_active = VAR_30->ifm_media;
}
