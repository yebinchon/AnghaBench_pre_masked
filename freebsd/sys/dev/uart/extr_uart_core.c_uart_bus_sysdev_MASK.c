
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int * sc_sysdev; } ;
typedef int device_t ;


 struct uart_softc* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_0)
{
 struct uart_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 return ((VAR_1->sc_sysdev != ((void*)0)) ? 1 : 0);
}
