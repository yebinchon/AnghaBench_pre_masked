
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_mmc_softc {int bus_busy; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_mmc_softc*) ;
 int FUNC_1 (struct aml8726_mmc_softc*) ;
 struct aml8726_mmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct aml8726_mmc_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct aml8726_mmc_softc *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2);

 VAR_2->bus_busy--;
 FUNC_3(VAR_2);

 FUNC_1(VAR_2);

 return (0);
}
