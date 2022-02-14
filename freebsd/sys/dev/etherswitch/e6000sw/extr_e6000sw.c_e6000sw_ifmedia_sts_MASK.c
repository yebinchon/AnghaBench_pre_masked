
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_dunit; int * if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
typedef int e6000sw_softc_t ;


 struct mii_data* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_0, struct ifmediareq *VAR_1)
{
 e6000sw_softc_t *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = VAR_0->if_softc;
 VAR_3 = FUNC_0(VAR_2, VAR_0->if_dunit);

 if (VAR_3 == ((void*)0))
  return;

 FUNC_1(VAR_3);
 VAR_1->ifm_active = VAR_3->mii_media_active;
 VAR_1->ifm_status = VAR_3->mii_media_status;
}
