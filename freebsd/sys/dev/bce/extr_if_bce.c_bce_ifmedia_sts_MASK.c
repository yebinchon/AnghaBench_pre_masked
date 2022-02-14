
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_flags; struct bce_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct bce_softc {int bce_phy_flags; int bce_miibus; } ;


 int FUNC_0 (struct bce_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bce_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct bce_softc*,struct ifmediareq*) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_3, struct ifmediareq *VAR_4)
{
 struct bce_softc *VAR_5 = VAR_3->if_softc;
 struct mii_data *VAR_6;

 FUNC_2(VAR_1);

 FUNC_0(VAR_5);

 if ((VAR_3->if_flags & VAR_2) == 0) {
  FUNC_1(VAR_5);
  return;
 }

 if ((VAR_5->bce_phy_flags & VAR_0) != 0)
  FUNC_4(VAR_5, VAR_4);
 else {
  VAR_6 = FUNC_5(VAR_5->bce_miibus);
  FUNC_6(VAR_6);
  VAR_4->ifm_active = VAR_6->mii_media_active;
  VAR_4->ifm_status = VAR_6->mii_media_status;
 }

 FUNC_1(VAR_5);

 FUNC_3(VAR_1);
}
