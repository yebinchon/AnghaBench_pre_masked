
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owc_gpiobus_softc {int sc_busdev; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct owc_gpiobus_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int **,int*) ;
 int FUNC_4 (int ) ;
 struct owc_gpiobus_softc* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct owc_gpiobus_softc *VAR_2;
 device_t *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_5(VAR_1);
 VAR_2->sc_dev = VAR_1;
 VAR_2->sc_busdev = FUNC_4(VAR_1);
 FUNC_0(VAR_2);
 VAR_4 = 0;
 if (FUNC_3(VAR_1, &VAR_3, &VAR_4) == 0)
  FUNC_6(VAR_3, VAR_0);
 if (VAR_4 == 0)
  FUNC_2(VAR_1, "ow", -1);
 FUNC_1(VAR_1);

 return (0);
}
