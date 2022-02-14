
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vr_softc {int vr_miibus; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_flags; struct vr_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;


 int VAR_0 ;
 int FUNC_0 (struct vr_softc*) ;
 int FUNC_1 (struct vr_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_1, struct ifmediareq *VAR_2)
{
 struct vr_softc *VAR_3;
 struct mii_data *VAR_4;

 VAR_3 = VAR_1->if_softc;
 VAR_4 = FUNC_2(VAR_3->vr_miibus);
 FUNC_0(VAR_3);
 if ((VAR_1->if_flags & VAR_0) == 0) {
  FUNC_1(VAR_3);
  return;
 }
 FUNC_3(VAR_4);
 VAR_2->ifm_active = VAR_4->mii_media_active;
 VAR_2->ifm_status = VAR_4->mii_media_status;
 FUNC_1(VAR_3);
}
