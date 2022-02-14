
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct cgem_softc {int miibus; } ;
typedef int if_t ;


 int FUNC_0 (struct cgem_softc*) ;
 int FUNC_1 (struct cgem_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_5(if_t VAR_0, struct ifmediareq *VAR_1)
{
 struct cgem_softc *VAR_2 = (struct cgem_softc *) FUNC_3(VAR_0);
 struct mii_data *VAR_3;

 VAR_3 = FUNC_2(VAR_2->miibus);
 FUNC_0(VAR_2);
 FUNC_4(VAR_3);
 VAR_1->ifm_active = VAR_3->mii_media_active;
 VAR_1->ifm_status = VAR_3->mii_media_status;
 FUNC_1(VAR_2);
}
