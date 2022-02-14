
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {scalar_t__ chan; } ;
struct uart_softc {struct uart_devinfo* sc_sysdev; struct uart_bas sc_bas; } ;
struct uart_devinfo {int parity; int stopbits; int databits; int baudrate; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct uart_softc*) ;
 int FUNC_2 (struct uart_bas*,int ,int ,int ,int ) ;
 int FUNC_3 (struct uart_bas*,int) ;
 int FUNC_4 (struct uart_bas*,int,int,int,int ) ;
 int FUNC_5 (struct uart_bas*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_1)
{
 struct uart_bas *VAR_2;
 struct uart_devinfo *VAR_3;
 uint16_t VAR_4, VAR_5;

 VAR_2 = &VAR_1->sc_bas;
 if (VAR_1->sc_sysdev != ((void*)0)) {
  VAR_3 = VAR_1->sc_sysdev;
  FUNC_2(VAR_2, VAR_3->baudrate, VAR_3->databits, VAR_3->stopbits,
      VAR_3->parity);
 } else {
  FUNC_4(VAR_2, 9600, 8, 1, VAR_0);
 }


 VAR_5 = FUNC_3(VAR_2, FUNC_0(VAR_2->chan - 1));
 VAR_4 = FUNC_3(VAR_2, VAR_5);
 FUNC_5(VAR_2, VAR_5, VAR_4 | 0x9000);

 (void)FUNC_1(VAR_1);

 return (0);
}
