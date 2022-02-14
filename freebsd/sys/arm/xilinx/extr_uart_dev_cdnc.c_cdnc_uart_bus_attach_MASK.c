
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_devinfo* sc_sysdev; struct uart_bas sc_bas; } ;
struct uart_devinfo {int parity; int stopbits; int databits; int baudrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*,int ,int) ;
 int FUNC_1 (struct uart_softc*) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_6)
{
 struct uart_bas *VAR_7 = &VAR_6->sc_bas;
 struct uart_devinfo *VAR_8;

 if (VAR_6->sc_sysdev != ((void*)0)) {
  VAR_8 = VAR_6->sc_sysdev;
  (void)FUNC_3(VAR_7, VAR_8->baudrate, VAR_8->databits,
        VAR_8->stopbits, VAR_8->parity);
 } else
  FUNC_2(VAR_7);

 (void)FUNC_1(VAR_6);


 FUNC_0(VAR_7, VAR_0,
     VAR_4 | VAR_3 |
     VAR_5 | VAR_2 |
     VAR_1);

 return (0);
}
