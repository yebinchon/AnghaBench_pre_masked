
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc_softc {int sc_ue; } ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {struct smsc_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;


 int FUNC_0 (struct smsc_softc*) ;
 int FUNC_1 (struct smsc_softc*) ;
 int FUNC_2 (struct mii_data*) ;
 struct mii_data* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_0, struct ifmediareq *VAR_1)
{
 struct smsc_softc *VAR_2 = VAR_0->if_softc;
 struct mii_data *VAR_3 = FUNC_3(&VAR_2->sc_ue);

 FUNC_0(VAR_2);
 FUNC_2(VAR_3);
 VAR_1->ifm_active = VAR_3->mii_media_active;
 VAR_1->ifm_status = VAR_3->mii_media_status;
 FUNC_1(VAR_2);
}
