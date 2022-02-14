
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stge_softc {int sc_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {struct stge_softc* if_softc; } ;


 struct mii_data* FUNC_0 (int ) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_0)
{
 struct stge_softc *VAR_1;
 struct mii_data *VAR_2;

 VAR_1 = VAR_0->if_softc;
 VAR_2 = FUNC_0(VAR_1->sc_miibus);
 FUNC_1(VAR_2);

 return (0);
}
