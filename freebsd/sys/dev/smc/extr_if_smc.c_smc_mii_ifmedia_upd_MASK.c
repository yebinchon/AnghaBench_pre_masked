
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int * smc_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {struct smc_softc* if_softc; } ;


 int VAR_0 ;
 struct mii_data* FUNC_0 (int *) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1)
{
 struct smc_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = VAR_1->if_softc;
 if (VAR_2->smc_miibus == ((void*)0))
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_2->smc_miibus);
 return (FUNC_1(VAR_3));
}
