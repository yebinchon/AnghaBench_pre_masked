
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int * smc_miibus; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct smc_softc *VAR_0)
{

 if (VAR_0->smc_miibus == ((void*)0))
  return;
 FUNC_1(FUNC_0(VAR_0->smc_miibus));
}
