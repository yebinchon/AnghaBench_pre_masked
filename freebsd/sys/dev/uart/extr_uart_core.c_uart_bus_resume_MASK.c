
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct uart_softc*) ;
 struct uart_softc* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_0)
{
 struct uart_softc *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 return (FUNC_0(VAR_1));
}
