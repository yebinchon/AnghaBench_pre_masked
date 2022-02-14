
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {int nfe_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
typedef int if_t ;


 int FUNC_0 (struct nfe_softc*) ;
 int FUNC_1 (struct nfe_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 struct nfe_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_5(if_t VAR_0, struct ifmediareq *VAR_1)
{
 struct nfe_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_2->nfe_miibus);
 FUNC_4(VAR_3);

 VAR_1->ifm_active = VAR_3->mii_media_active;
 VAR_1->ifm_status = VAR_3->mii_media_status;
 FUNC_1(VAR_2);
}
