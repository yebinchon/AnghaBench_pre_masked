
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct ifnet {int dummy; } ;
struct atse_softc {int atse_flags; int atse_tick; int atse_dev; int atse_miibus; struct ifnet* atse_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct atse_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct atse_softc*) ;
 struct mii_data* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct atse_softc *VAR_3;
 struct mii_data *VAR_4;
 struct ifnet *VAR_5;

 VAR_3 = (struct atse_softc *)VAR_2;
 FUNC_0(VAR_3);
 VAR_5 = VAR_3->atse_ifp;

 VAR_4 = FUNC_3(VAR_3->atse_miibus);
 FUNC_4(VAR_4);
 if ((VAR_3->atse_flags & VAR_0) == 0) {
  FUNC_1(VAR_3->atse_dev);
 }

 FUNC_2(&VAR_3->atse_tick, VAR_1, FUNC_5, VAR_3);
}
