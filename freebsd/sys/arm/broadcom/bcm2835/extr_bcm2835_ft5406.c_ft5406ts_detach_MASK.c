
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ft5406ts_softc {int sc_evdev; } ;
typedef int device_t ;


 int FUNC_0 (struct ft5406ts_softc*) ;
 struct ft5406ts_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct ft5406ts_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->sc_evdev);

 FUNC_0(VAR_1);

 return (0);
}
