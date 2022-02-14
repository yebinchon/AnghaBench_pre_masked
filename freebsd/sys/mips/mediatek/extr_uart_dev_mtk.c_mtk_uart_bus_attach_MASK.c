
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {scalar_t__ rclk; } ;
struct uart_softc {int sc_rxfifosz; int sc_txfifosz; struct uart_devinfo* sc_sysdev; struct uart_bas sc_bas; } ;
struct uart_mtk_softc {int ier_mask; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; int parity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct uart_softc*) ;
 int FUNC_2 (struct uart_bas*,int,int,int,int ) ;
 int FUNC_3 (struct uart_bas*) ;
 int FUNC_4 (struct uart_bas*,int ) ;
 int FUNC_5 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_8)
{
 struct uart_bas *VAR_9;
 struct uart_devinfo *VAR_10;
 struct uart_mtk_softc *VAR_11 = (struct uart_mtk_softc *)VAR_8;

 VAR_9 = &VAR_8->sc_bas;

 if (!VAR_9->rclk) {
  VAR_9->rclk = FUNC_0();
 }

 if (VAR_8->sc_sysdev != ((void*)0)) {
  VAR_10 = VAR_8->sc_sysdev;
  FUNC_2(VAR_9, VAR_10->baudrate, VAR_10->databits, VAR_10->stopbits,
      VAR_10->parity);
 } else {
  FUNC_2(VAR_9, 57600, 8, 1, 0);
 }

 VAR_8->sc_rxfifosz = 16;
 VAR_8->sc_txfifosz = 16;

 (void)FUNC_1(VAR_8);


 FUNC_5(VAR_9, VAR_1,
     FUNC_4(VAR_9, VAR_1) |
     VAR_0 | VAR_3 | VAR_2);
 FUNC_3(VAR_9);

 VAR_11->ier_mask = 0xf0;
 FUNC_5(VAR_9, VAR_7,
     VAR_4 | VAR_5 | VAR_6);
 FUNC_3(VAR_9);

 return (0);
}
