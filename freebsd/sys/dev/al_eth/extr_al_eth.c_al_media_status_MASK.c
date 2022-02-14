
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_active; int mii_media_status; } ;
struct ifnet {struct al_eth_adapter* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct al_eth_adapter {struct mii_data* mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_2, struct ifmediareq *VAR_3)
{
 struct al_eth_adapter *VAR_4 = VAR_2->if_softc;
 struct mii_data *VAR_5;

 if (VAR_4->mii == ((void*)0)) {
  VAR_3->ifm_active = VAR_0 | VAR_1;
  VAR_3->ifm_status = 0;

  return;
 }

 VAR_5 = VAR_4->mii;
 FUNC_0(VAR_5);

 VAR_3->ifm_active = VAR_5->mii_media_active;
 VAR_3->ifm_status = VAR_5->mii_media_status;
}
