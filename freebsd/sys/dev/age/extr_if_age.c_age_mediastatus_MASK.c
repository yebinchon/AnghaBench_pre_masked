
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_active; int mii_media_status; } ;
struct ifnet {struct age_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct age_softc {int age_miibus; } ;


 int FUNC_0 (struct age_softc*) ;
 int FUNC_1 (struct age_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_0, struct ifmediareq *VAR_1)
{
 struct age_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = VAR_0->if_softc;
 FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_2->age_miibus);

 FUNC_3(VAR_3);
 VAR_1->ifm_status = VAR_3->mii_media_status;
 VAR_1->ifm_active = VAR_3->mii_media_active;
 FUNC_1(VAR_2);
}
