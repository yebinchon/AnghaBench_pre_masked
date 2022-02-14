
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smc_softc {int smc_intr; int smc_tq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smc_softc*,int ) ;
 int FUNC_1 (struct smc_softc*,int) ;
 int FUNC_2 (struct smc_softc*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4)
{
 struct smc_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = (struct smc_softc *)VAR_4;




 VAR_6 = (FUNC_0(VAR_5, VAR_0) & VAR_1);




 FUNC_1(VAR_5, 2);
 FUNC_2(VAR_5, VAR_3, 0);


 FUNC_1(VAR_5, VAR_6);

 FUNC_3(VAR_5->smc_tq, &VAR_5->smc_intr);
 return (VAR_2);
}
