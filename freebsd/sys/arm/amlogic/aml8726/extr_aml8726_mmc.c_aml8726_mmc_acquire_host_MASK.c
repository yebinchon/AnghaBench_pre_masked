
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_mmc_softc {scalar_t__ bus_busy; int mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_mmc_softc*) ;
 int FUNC_1 (struct aml8726_mmc_softc*) ;
 int VAR_0 ;
 struct aml8726_mmc_softc* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct aml8726_mmc_softc*,int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3)
{
 struct aml8726_mmc_softc *VAR_4 = FUNC_2(VAR_2);

 FUNC_0(VAR_4);

 while (VAR_4->bus_busy)
  FUNC_3(VAR_4, &VAR_4->mtx, VAR_0, "mmc", VAR_1 / 5);
 VAR_4->bus_busy++;

 FUNC_1(VAR_4);

 return (0);
}
