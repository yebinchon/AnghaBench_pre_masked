
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {struct mii_data* tsec_mii; } ;
struct mii_data {int dummy; } ;
struct ifnet {struct tsec_softc* if_softc; } ;


 int FUNC_0 (struct tsec_softc*) ;
 int FUNC_1 (struct tsec_softc*) ;
 int FUNC_2 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_0)
{
 struct tsec_softc *VAR_1 = VAR_0->if_softc;
 struct mii_data *VAR_2;

 FUNC_0(VAR_1);

 VAR_2 = VAR_1->tsec_mii;
 FUNC_2(VAR_2);

 FUNC_1(VAR_1);
 return (0);
}
