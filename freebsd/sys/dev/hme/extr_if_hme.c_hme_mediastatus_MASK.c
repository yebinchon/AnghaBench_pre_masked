
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_flags; struct hme_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct hme_softc {TYPE_1__* sc_mii; } ;
struct TYPE_2__ {int mii_media_status; int mii_media_active; } ;


 int FUNC_0 (struct hme_softc*) ;
 int FUNC_1 (struct hme_softc*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_1, struct ifmediareq *VAR_2)
{
 struct hme_softc *VAR_3 = VAR_1->if_softc;

 FUNC_0(VAR_3);
 if ((VAR_1->if_flags & VAR_0) == 0) {
  FUNC_1(VAR_3);
  return;
 }

 FUNC_2(VAR_3->sc_mii);
 VAR_2->ifm_active = VAR_3->sc_mii->mii_media_active;
 VAR_2->ifm_status = VAR_3->sc_mii->mii_media_status;
 FUNC_1(VAR_3);
}
