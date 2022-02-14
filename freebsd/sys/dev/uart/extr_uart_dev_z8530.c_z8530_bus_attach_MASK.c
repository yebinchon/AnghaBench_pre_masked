
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_softc {int tpc; int txidle; } ;
struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_devinfo* sc_sysdev; struct uart_bas sc_bas; } ;
struct uart_devinfo {int parity; int stopbits; int databits; int baudrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 (struct uart_softc*) ;
 int FUNC_3 (struct uart_bas*,int ,int ,int ,int ,int*) ;
 int FUNC_4 (struct uart_bas*,int,int,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_16)
{
 struct z8530_softc *VAR_17 = (struct z8530_softc*)VAR_16;
 struct uart_bas *VAR_18;
 struct uart_devinfo *VAR_19;

 VAR_18 = &VAR_16->sc_bas;
 if (VAR_16->sc_sysdev != ((void*)0)) {
  VAR_19 = VAR_16->sc_sysdev;
  VAR_17->tpc = VAR_8|VAR_9;
  FUNC_3(VAR_18, VAR_19->baudrate, VAR_19->databits, VAR_19->stopbits,
      VAR_19->parity, &VAR_17->tpc);
 } else {
  VAR_17->tpc = FUNC_4(VAR_18, 9600, 8, 1, VAR_10);
  VAR_17->tpc &= ~(VAR_8|VAR_9);
 }
 VAR_17->txidle = 1;

 (void)FUNC_2(VAR_16);

 FUNC_1(VAR_18, VAR_11, VAR_0 | VAR_1 | VAR_2);
 FUNC_0(VAR_18);
 FUNC_1(VAR_18, VAR_12, VAR_5 | VAR_4 | VAR_3);
 FUNC_0(VAR_18);
 FUNC_1(VAR_18, VAR_13, 0);
 FUNC_0(VAR_18);
 FUNC_1(VAR_18, VAR_15, VAR_17->tpc);
 FUNC_0(VAR_18);
 FUNC_1(VAR_18, VAR_14, VAR_7 | VAR_6);
 FUNC_0(VAR_18);
 return (0);
}
