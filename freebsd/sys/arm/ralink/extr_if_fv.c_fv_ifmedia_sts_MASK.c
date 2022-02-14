
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {struct fv_softc* if_softc; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct fv_softc {int fv_miibus; } ;


 int FUNC_0 (struct fv_softc*) ;
 int FUNC_1 (struct fv_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_2, struct ifmediareq *VAR_3)
{
 VAR_3->ifm_status = VAR_1 | VAR_0;

}
