
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_dev; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {int mii_media_active; int mii_ifp; TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;


 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;



 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_5(struct mii_softc *VAR_4, struct mii_data *VAR_5, int VAR_6)
{
 struct ifmedia_entry *VAR_7 = VAR_5->mii_media.ifm_cur;

 switch (VAR_6) {
 case 129:
  break;

 case 130:



  if ((FUNC_3(VAR_5->mii_ifp) & VAR_1) == 0)
   break;




  switch (FUNC_0(VAR_7->ifm_media)) {
  case 132:
   VAR_5->mii_media_active = VAR_2 | 132;
   if ((VAR_7->ifm_media & VAR_3) != 0)
    VAR_5->mii_media_active |= VAR_3;
   FUNC_1(VAR_4->mii_dev);
   return (0);
  case 131:
   VAR_5->mii_media_active = VAR_2 | 131;
   if ((VAR_7->ifm_media & VAR_3) != 0)
    VAR_5->mii_media_active |= VAR_3;
   FUNC_1(VAR_4->mii_dev);
   return (0);
  default:
   return (VAR_0);
  }
  break;

 case 128:



  if ((FUNC_3(VAR_5->mii_ifp) & VAR_1) == 0)
   return (0);

  break;
 }


 FUNC_2(VAR_4);


 FUNC_4(VAR_4, VAR_6);
 return (0);
}
