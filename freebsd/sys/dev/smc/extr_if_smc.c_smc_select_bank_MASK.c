
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smc_softc {int smc_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static __inline void
FUNC_2(struct smc_softc *VAR_4, uint16_t VAR_5)
{

 FUNC_0(VAR_4->smc_reg, VAR_0, 2,
     VAR_2 | VAR_3);
 FUNC_1(VAR_4->smc_reg, VAR_0, VAR_5 & VAR_1);
 FUNC_0(VAR_4->smc_reg, VAR_0, 2,
     VAR_2 | VAR_3);
}
