
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct smc_softc*) ;
 int FUNC_1 (struct smc_softc*) ;
 struct smc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int,int) ;
 int VAR_0 ;
 int FUNC_4 (struct smc_softc*,int) ;

int
FUNC_5(device_t VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct smc_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_1);

 FUNC_0(VAR_5);

 FUNC_4(VAR_5, 3);

 FUNC_3(VAR_1, &VAR_0, VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_5);
 return (0);
}
