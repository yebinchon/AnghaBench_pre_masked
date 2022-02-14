
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mii_softc {int mii_flags; int mii_extcapabilities; int mii_capabilities; TYPE_2__* mii_pdata; } ;
struct ifmedia_entry {int ifm_media; } ;
struct TYPE_3__ {struct ifmedia_entry* ifm_cur; } ;
struct TYPE_4__ {TYPE_1__ mii_media; } ;


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
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct mii_softc*,int ,int) ;

int
FUNC_2(struct mii_softc *VAR_24)
{
 struct ifmedia_entry *VAR_25 = VAR_24->mii_pdata->mii_media.ifm_cur;
 int VAR_26, VAR_27;





 if ((VAR_24->mii_flags & VAR_20) != 0) {
  VAR_26 = 0;
  if ((VAR_24->mii_extcapabilities & VAR_13) != 0)
   VAR_26 |= VAR_2;
  if ((VAR_24->mii_extcapabilities & VAR_14) != 0)
   VAR_26 |= VAR_3;

  if ((VAR_25->ifm_media & VAR_17) != 0 ||
      (VAR_24->mii_flags & VAR_18) != 0)
   VAR_26 |= VAR_5;
  FUNC_1(VAR_24, VAR_22, VAR_26);
 } else {
  VAR_26 = FUNC_0(VAR_24->mii_capabilities) |
      VAR_0;
  if ((VAR_25->ifm_media & VAR_17) != 0 ||
      (VAR_24->mii_flags & VAR_18) != 0) {
   if ((VAR_24->mii_capabilities &
       (VAR_9 | VAR_8)) != 0)
    VAR_26 |= VAR_1;

   if (((VAR_24->mii_flags & VAR_19) != 0) &&
       (VAR_24->mii_extcapabilities &
       (VAR_12 | VAR_11)) != 0)
    VAR_26 |= VAR_4;
  }
  FUNC_1(VAR_24, VAR_22, VAR_26);
  if ((VAR_24->mii_flags & VAR_19) != 0) {
   VAR_27 = 0;
   if ((VAR_24->mii_extcapabilities & VAR_11) != 0)
    VAR_27 |= VAR_15;
   if ((VAR_24->mii_extcapabilities & VAR_12) != 0)
    VAR_27 |= VAR_16;
   FUNC_1(VAR_24, VAR_21, VAR_27);
  }
 }
 FUNC_1(VAR_24, VAR_23, VAR_6 | VAR_7);
 return (VAR_10);
}
