
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_cpucfg_softc {int dev; } ;
typedef int device_t ;


 struct aml8726_cpucfg_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0)
{
 struct aml8726_cpucfg_softc *VAR_1 = FUNC_0(VAR_0);

 VAR_1->dev = VAR_0;

 return (0);
}
