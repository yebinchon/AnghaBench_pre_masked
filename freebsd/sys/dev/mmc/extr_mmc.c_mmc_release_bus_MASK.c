
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int * owner; } ;
typedef int * device_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mmc_softc*) ;
 int FUNC_2 (struct mmc_softc*) ;
 int FUNC_3 (int *) ;
 struct mmc_softc* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, device_t VAR_1)
{
 struct mmc_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_0);

 FUNC_1(VAR_2);
 if (!VAR_2->owner)
  FUNC_5("mmc: releasing unowned bus.");
 if (VAR_2->owner != VAR_1)
  FUNC_5("mmc: you don't own the bus.  game over.");
 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(FUNC_3(VAR_0), VAR_0);
 if (VAR_3)
  return (VAR_3);
 FUNC_1(VAR_2);
 VAR_2->owner = ((void*)0);
 FUNC_2(VAR_2);
 return (0);
}
