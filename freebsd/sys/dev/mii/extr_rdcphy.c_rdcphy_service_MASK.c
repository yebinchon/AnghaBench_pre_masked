
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdcphy_softc {int mii_link_tick; } ;
struct mii_softc {int dummy; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {int mii_media_active; int mii_media_status; TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (struct mii_softc*) ;
 int VAR_4 ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*,int const) ;

__attribute__((used)) static int
FUNC_5(struct mii_softc *VAR_5, struct mii_data *VAR_6, int VAR_7)
{
 struct rdcphy_softc *VAR_8;
 struct ifmedia_entry *VAR_9;

 VAR_8 = (struct rdcphy_softc *)VAR_5;
 VAR_9 = VAR_6->mii_media.ifm_cur;

 switch (VAR_7) {
 case 129:
  break;

 case 130:
  FUNC_2(VAR_5);
  switch (FUNC_0(VAR_9->ifm_media)) {
  case 132:
  case 131:
   VAR_6->mii_media_status = 0;
   VAR_6->mii_media_active = VAR_2 | VAR_3;
   VAR_8->mii_link_tick = VAR_4;

   FUNC_4(VAR_5, 130);
   return (0);
  default:
   break;
  }
  break;

 case 128:
  if (FUNC_3(VAR_5) == VAR_0)
   return (0);
  if (FUNC_0(VAR_9->ifm_media) != VAR_1) {
   if (VAR_8->mii_link_tick > 0) {
    VAR_8->mii_link_tick--;
    return (0);
   }
  }
  break;
 }


 FUNC_1(VAR_5);


 FUNC_4(VAR_5, VAR_7);
 return (0);
}
