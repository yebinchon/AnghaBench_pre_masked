
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct mii_data {int mii_media_status; int mii_media_active; struct ifmedia mii_media; } ;
struct ifnet {int if_drv_flags; } ;
struct dc_softc {int dc_link; struct ifnet* dc_ifp; int dc_miibus; } ;
typedef int device_t ;


 int FUNC_0 (struct dc_softc*) ;
 scalar_t__ FUNC_1 (struct dc_softc*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dc_softc*,int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_4)
{
 struct dc_softc *VAR_5;
 struct ifnet *VAR_6;
 struct mii_data *VAR_7;
 struct ifmedia *VAR_8;

 VAR_5 = FUNC_4(VAR_4);

 VAR_7 = FUNC_4(VAR_5->dc_miibus);
 VAR_6 = VAR_5->dc_ifp;
 if (VAR_7 == ((void*)0) || VAR_6 == ((void*)0) ||
     (VAR_6->if_drv_flags & VAR_0) == 0)
  return;

 VAR_8 = &VAR_7->mii_media;
 if (FUNC_1(VAR_5) && FUNC_2(VAR_8->ifm_media) == VAR_3) {
  FUNC_3(VAR_5, VAR_8->ifm_media);
  return;
 } else if (!FUNC_0(VAR_5))
  FUNC_3(VAR_5, VAR_7->mii_media_active);

 VAR_5->dc_link = 0;
 if ((VAR_7->mii_media_status & (VAR_1 | VAR_2)) ==
     (VAR_1 | VAR_2)) {
  switch (FUNC_2(VAR_7->mii_media_active)) {
  case 128:
  case 129:
   VAR_5->dc_link = 1;
   break;
  }
 }
}
