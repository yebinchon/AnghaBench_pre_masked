
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_softc {int smc_usemem; } ;
typedef int device_t ;


 int VAR_0 ;
 struct smc_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct smc_softc *VAR_2;

 if (!FUNC_2(VAR_1))
  return (VAR_0);

 if (FUNC_1(VAR_1, "smsc,lan91c111")) {
  VAR_2 = FUNC_0(VAR_1);
  VAR_2->smc_usemem = 1;

  if (FUNC_3(VAR_1) != 0) {
   return (VAR_0);
  }

  return (0);
 }

 return (VAR_0);
}
