
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
 int FUNC_0 (struct mii_softc*,int ) ;
 int VAR_20 ;
 int VAR_21 ;


 int FUNC_1 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_22)
{
 struct mii_data *VAR_23 = VAR_22->mii_pdata;
 struct ifmedia_entry *VAR_24 = VAR_23->mii_media.ifm_cur;
 int VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_23->mii_media_status = VAR_9;
 VAR_23->mii_media_active = VAR_10;

 VAR_25 = FUNC_0(VAR_22, VAR_18) | FUNC_0(VAR_22, VAR_18);

 VAR_27 = FUNC_0(VAR_22, VAR_19);

 if (VAR_27 & VAR_21)
  VAR_23->mii_media_status |= VAR_8;

 VAR_26 = FUNC_0(VAR_22, VAR_17);
 if (VAR_26 & VAR_1) {
  VAR_23->mii_media_active |= VAR_15;
  VAR_23->mii_media_status = 0;
  return;
 }

 if (VAR_26 & VAR_2)
  VAR_23->mii_media_active |= VAR_14;

 if (VAR_26 & VAR_0) {




  if ((VAR_25 & VAR_3) == 0) {

   VAR_23->mii_media_active |= VAR_15;
   return;
  }

  switch (VAR_27 & (128 | 129)) {
  case 128:
   VAR_23->mii_media_active |= VAR_5;
   VAR_28 = FUNC_0(VAR_22, VAR_16);
   if (VAR_28 & VAR_4)
    VAR_23->mii_media_active |= VAR_11;
   break;

  case 129:
   VAR_23->mii_media_active |= VAR_6;
   break;

  case 0:
   VAR_23->mii_media_active |= VAR_7;
   break;

  default:
   VAR_23->mii_media_active |= VAR_15;
   VAR_23->mii_media_status = 0;
   return;
  }

  if (VAR_27 & VAR_20)
   VAR_23->mii_media_active |=
       VAR_12 | FUNC_1(VAR_22);
  else
   VAR_23->mii_media_active |= VAR_13;
 } else
  VAR_23->mii_media_active = VAR_24->ifm_media;
}
