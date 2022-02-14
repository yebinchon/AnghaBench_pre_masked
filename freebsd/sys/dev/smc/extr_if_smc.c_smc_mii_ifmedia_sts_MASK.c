
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int * smc_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {struct smc_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;


 struct mii_data* FUNC_0 (int *) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_0, struct ifmediareq *VAR_1)
{
 struct smc_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = VAR_0->if_softc;
 if (VAR_2->smc_miibus == ((void*)0))
  return;

 VAR_3 = FUNC_0(VAR_2->smc_miibus);
 FUNC_1(VAR_3);
 VAR_1->ifm_active = VAR_3->mii_media_active;
 VAR_1->ifm_status = VAR_3->mii_media_status;
}
