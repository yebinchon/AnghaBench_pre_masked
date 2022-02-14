
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_devinfo* sc_sysdev; struct uart_bas sc_bas; } ;
struct uart_devinfo {int databits; int stopbits; int parity; int baudrate; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (struct uart_bas*,int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_1)
{
 struct uart_bas *VAR_2;
 struct uart_devinfo *VAR_3;

 VAR_2 = &VAR_1->sc_bas;
 if (VAR_1->sc_sysdev != ((void*)0)) {
  VAR_3 = VAR_1->sc_sysdev;
  FUNC_1(VAR_2, VAR_3->baudrate, VAR_3->databits, VAR_3->stopbits,
      VAR_3->parity);
 } else
  FUNC_1(VAR_2, VAR_0, 8, 1, 0);

 (void)FUNC_0(VAR_1);



 return (0);
}
