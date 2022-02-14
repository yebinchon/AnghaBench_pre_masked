
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int smc_mii_tick_ch; int * smc_miibus; } ;


 int FUNC_0 (struct smc_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct smc_softc*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct smc_softc *VAR_2;

 VAR_2 = (struct smc_softc *)VAR_1;

 if (VAR_2->smc_miibus == ((void*)0))
  return;

 FUNC_0(VAR_2);

 FUNC_3(FUNC_2(VAR_2->smc_miibus));
 FUNC_1(&VAR_2->smc_mii_tick_ch, VAR_0, FUNC_4, VAR_2);
}
