
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct mii_data {int mii_media_status; int mii_media_active; struct ifmedia mii_media; } ;
struct ifnet {struct dc_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct dc_softc {int dc_miibus; } ;


 scalar_t__ FUNC_0 (struct dc_softc*) ;
 int FUNC_1 (struct dc_softc*) ;
 int FUNC_2 (struct dc_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 struct mii_data* FUNC_4 (int ) ;
 int FUNC_5 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_1, struct ifmediareq *VAR_2)
{
 struct dc_softc *VAR_3;
 struct mii_data *VAR_4;
 struct ifmedia *VAR_5;

 VAR_3 = VAR_1->if_softc;
 VAR_4 = FUNC_4(VAR_3->dc_miibus);
 FUNC_1(VAR_3);
 FUNC_5(VAR_4);
 VAR_5 = &VAR_4->mii_media;
 if (FUNC_0(VAR_3)) {
  if (FUNC_3(VAR_5->ifm_media) == VAR_0) {
   VAR_2->ifm_active = VAR_5->ifm_media;
   VAR_2->ifm_status = 0;
   FUNC_2(VAR_3);
   return;
  }
 }
 VAR_2->ifm_active = VAR_4->mii_media_active;
 VAR_2->ifm_status = VAR_4->mii_media_status;
 FUNC_2(VAR_3);
}
