
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_31)
{
 struct mii_data *VAR_32 = VAR_31->mii_pdata;
 struct ifmedia_entry *VAR_33 = VAR_32->mii_media.ifm_cur;
 int VAR_34, VAR_35, VAR_36, VAR_37;

 VAR_32->mii_media_status = VAR_19;
 VAR_32->mii_media_active = VAR_20;

 VAR_34 = FUNC_0(VAR_31, VAR_30) |
     FUNC_0(VAR_31, VAR_30);
 if (VAR_34 & VAR_10)
  VAR_32->mii_media_status |= VAR_18;

 VAR_35 = FUNC_0(VAR_31, VAR_29);
 if (VAR_35 & VAR_7) {
  VAR_32->mii_media_active |= VAR_24;
  VAR_32->mii_media_status = 0;
  return;
 }

 if (VAR_35 & VAR_8)
  VAR_32->mii_media_active |= VAR_23;

 if (VAR_35 & VAR_6) {




  if ((VAR_34 & VAR_9) == 0) {

   VAR_32->mii_media_active |= VAR_24;
   return;
  }

  if (FUNC_0(VAR_31, VAR_27) & VAR_0) {
   VAR_37 = FUNC_0(VAR_31, VAR_26) &
       FUNC_0(VAR_31, VAR_28);
   if (VAR_37 & VAR_5)
    VAR_32->mii_media_active |= VAR_16|VAR_21;
   else if (VAR_37 & VAR_3)
    VAR_32->mii_media_active |= VAR_15|VAR_22;
   else if (VAR_37 & VAR_4)
    VAR_32->mii_media_active |= VAR_16|VAR_22;
   else if (VAR_37 & VAR_2)
    VAR_32->mii_media_active |= VAR_17|VAR_21;
   else if (VAR_37 & VAR_1)
    VAR_32->mii_media_active |= VAR_17|VAR_22;
   else
    VAR_32->mii_media_active |= VAR_24;
   return;
  }




  VAR_36 = FUNC_0(VAR_31, VAR_25);
  if (VAR_36 & VAR_11)
   VAR_32->mii_media_active |= VAR_16|VAR_21;
  else if (VAR_36 & VAR_12)
   VAR_32->mii_media_active |= VAR_16|VAR_22;
  else if (VAR_36 & VAR_13)
   VAR_32->mii_media_active |= VAR_17|VAR_22;
  else if (VAR_36 & VAR_14)
   VAR_32->mii_media_active |= VAR_17|VAR_22;
  if ((VAR_32->mii_media_active & VAR_21) != 0)
   VAR_32->mii_media_active |= FUNC_1(VAR_31);
 } else
  VAR_32->mii_media_active = VAR_33->ifm_media;
}
