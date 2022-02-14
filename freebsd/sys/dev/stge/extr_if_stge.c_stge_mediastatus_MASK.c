
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stge_softc {int sc_miibus; } ;
struct mii_data {int mii_media_active; int mii_media_status; } ;
struct ifnet {struct stge_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;


 struct mii_data* FUNC_0 (int ) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_0, struct ifmediareq *VAR_1)
{
 struct stge_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = VAR_0->if_softc;
 VAR_3 = FUNC_0(VAR_2->sc_miibus);

 FUNC_1(VAR_3);
 VAR_1->ifm_status = VAR_3->mii_media_status;
 VAR_1->ifm_active = VAR_3->mii_media_active;
}
