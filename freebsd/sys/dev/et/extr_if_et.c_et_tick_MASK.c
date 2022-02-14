
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct ifnet {int dummy; } ;
struct et_softc {int sc_tick; int sc_miibus; struct ifnet* ifp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct et_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct et_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct et_softc*) ;
 scalar_t__ FUNC_4 (struct et_softc*) ;
 int VAR_1 ;
 int FUNC_5 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct et_softc *VAR_3;
 struct ifnet *VAR_4;
 struct mii_data *VAR_5;

 VAR_3 = VAR_2;
 FUNC_0(VAR_3);
 VAR_4 = VAR_3->ifp;
 VAR_5 = FUNC_2(VAR_3->sc_miibus);

 FUNC_5(VAR_5);
 FUNC_3(VAR_3);
 if (FUNC_4(VAR_3) == VAR_0)
  return;
 FUNC_1(&VAR_3->sc_tick, VAR_1, FUNC_6, VAR_3);
}
