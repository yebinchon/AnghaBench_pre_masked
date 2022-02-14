
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_active; int mii_media_status; } ;
struct mge_softc {struct mii_data* mii; int phy_attached; } ;
struct ifnet {struct mge_softc* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mge_softc*) ;
 int FUNC_1 (struct mge_softc*) ;
 int FUNC_2 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_5, struct ifmediareq *VAR_6)
{
 struct mge_softc *VAR_7;
 struct mii_data *VAR_8;

 VAR_7 = VAR_5->if_softc;
 FUNC_0(VAR_7);

 if (!VAR_7->phy_attached) {
  VAR_6->ifm_active = VAR_0 | VAR_4 | VAR_3;
  VAR_6->ifm_status = VAR_2 | VAR_1;
  goto out_unlock;
 }

 VAR_8 = VAR_7->mii;
 FUNC_2(VAR_8);

 VAR_6->ifm_active = VAR_8->mii_media_active;
 VAR_6->ifm_status = VAR_8->mii_media_status;

out_unlock:
 FUNC_1(VAR_7);
}
