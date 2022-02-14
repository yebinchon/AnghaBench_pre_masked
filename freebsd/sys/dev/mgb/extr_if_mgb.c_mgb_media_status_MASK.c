
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; int mii_media_active; } ;
struct mgb_softc {int miibus; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
typedef int if_t ;


 int VAR_0 ;
 struct mii_data* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mgb_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_5(if_t VAR_1, struct ifmediareq *VAR_2)
{
 struct mgb_softc *VAR_3;
 struct mii_data *VAR_4;

 VAR_3 = FUNC_3(FUNC_2(VAR_1));
 VAR_4 = FUNC_0(VAR_3->miibus);
 if ((FUNC_1(VAR_1) & VAR_0) == 0)
  return;

 FUNC_4(VAR_4);
 VAR_2->ifm_active = VAR_4->mii_media_active;
 VAR_2->ifm_status = VAR_4->mii_media_status;
}
