
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiopower_softc {int sc_rbmask; int sc_pin; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gpiopower_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_2, int VAR_3)
{
 struct gpiopower_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = VAR_4->sc_rbmask ? (VAR_4->sc_rbmask & VAR_3) :
     ((VAR_3 & VAR_0) == 0);

 if (!VAR_5)
  return;

 if (VAR_3 & VAR_1)
  FUNC_2(VAR_2, "powering system off\n");
 else if ((VAR_3 & VAR_0) == 0)
  FUNC_2(VAR_2, "resetting system\n");
 else
  return;

 FUNC_3(VAR_4->sc_pin, 1);


 FUNC_0(10000000);
}
