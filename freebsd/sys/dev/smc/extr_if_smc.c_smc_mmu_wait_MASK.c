
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int smc_reg; int smc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline void
FUNC_3(struct smc_softc *VAR_4)
{

 FUNC_0((FUNC_1(VAR_4->smc_reg, VAR_0) &
     VAR_1) == 2, ("%s: smc_mmu_wait called when not in bank 2",
     FUNC_2(VAR_4->smc_dev)));
 while (FUNC_1(VAR_4->smc_reg, VAR_2) & VAR_3)
  ;
}
