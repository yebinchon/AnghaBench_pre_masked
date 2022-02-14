
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int smc_intr; int smc_tq; int smc_dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct smc_softc *VAR_1;

 VAR_1 = (struct smc_softc *)VAR_0;
 FUNC_0(VAR_1->smc_dev, "watchdog timeout\n");
 FUNC_1(VAR_1->smc_tq, &VAR_1->smc_intr);
}
