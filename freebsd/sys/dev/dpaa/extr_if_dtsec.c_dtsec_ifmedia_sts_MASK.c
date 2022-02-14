
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {struct dtsec_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct dtsec_softc {TYPE_1__* sc_mii; } ;
struct TYPE_2__ {int mii_media_status; int mii_media_active; } ;


 int FUNC_0 (struct dtsec_softc*) ;
 int FUNC_1 (struct dtsec_softc*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0, struct ifmediareq *VAR_1)
{
 struct dtsec_softc *VAR_2 = VAR_0->if_softc;

 FUNC_0(VAR_2);

 FUNC_2(VAR_2->sc_mii);

 VAR_1->ifm_active = VAR_2->sc_mii->mii_media_active;
 VAR_1->ifm_status = VAR_2->sc_mii->mii_media_status;

 FUNC_1(VAR_2);
}
