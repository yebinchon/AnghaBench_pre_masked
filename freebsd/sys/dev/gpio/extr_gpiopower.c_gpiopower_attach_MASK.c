
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiopower_softc {int sc_rbmask; int * sc_pin; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct gpiopower_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int **) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7)
{
 struct gpiopower_softc *VAR_8;
 phandle_t VAR_9;

 VAR_8 = FUNC_1(VAR_7);

 if ((VAR_9 = FUNC_4(VAR_7)) == -1)
  return (VAR_0);

 FUNC_6(VAR_7, "gpios", &VAR_8->sc_pin);
 if (VAR_8->sc_pin == ((void*)0)) {
  FUNC_2(VAR_7, "failed to map GPIO pin\n");
  return (VAR_0);
 }

 if (FUNC_5(VAR_7, "gpio-poweroff"))
  VAR_8->sc_rbmask = VAR_2 | VAR_3;
 else
  VAR_8->sc_rbmask = 0;
 FUNC_0(VAR_6, VAR_5, VAR_7,
     VAR_4);
 FUNC_3(VAR_8->sc_pin, VAR_1);

 return (0);
}
