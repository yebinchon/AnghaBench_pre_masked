
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwgpiobus_softc {int * res; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,int) ;
 struct dwgpiobus_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, bus_size_t VAR_1, int VAR_2)
{
 struct dwgpiobus_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->res[0], VAR_1, VAR_2);

 return (0);
}
