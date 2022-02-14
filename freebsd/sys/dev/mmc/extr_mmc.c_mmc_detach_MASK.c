
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct mmc_softc*) ;
 struct mmc_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_softc*,int) ;
 int FUNC_3 (struct mmc_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct mmc_softc *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, 1);
 if (VAR_2 != 0)
  return (VAR_2);
 FUNC_3(VAR_1);
 FUNC_0(VAR_1);

 return (0);
}
