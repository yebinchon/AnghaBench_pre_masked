
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_bas {int rclk; } ;
struct uart_softc {int sc_rxfifosz; int sc_txfifosz; int sc_hwiflow; int sc_hwoflow; int sc_dev; struct uart_bas sc_bas; } ;
struct TYPE_2__ {int uc_rclk; } ;


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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (struct uart_bas*,int) ;
 int FUNC_5 (struct uart_bas*) ;
 int FUNC_6 (struct uart_bas*) ;
 TYPE_1__ VAR_11 ;
 int FUNC_7 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_8 (struct uart_softc *VAR_12)
{
 struct uart_bas *VAR_13;
 int VAR_14;

 VAR_13 = &VAR_12->sc_bas;
 VAR_13->rclk = VAR_11.uc_rclk = FUNC_0(VAR_0);

 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14) {
  return (VAR_14);
        }

 FUNC_7(VAR_13, VAR_7, (VAR_4 | VAR_5));






        FUNC_3(VAR_13, VAR_8);


 FUNC_7(VAR_13, VAR_6, VAR_1 | VAR_3 | VAR_2);

 FUNC_6(VAR_13);

 FUNC_4(VAR_13, VAR_9|VAR_10);

        if (FUNC_1(VAR_12->sc_dev)) {
             FUNC_2(VAR_12->sc_dev, "Octeon-16550 channel 1");
        } else {
             FUNC_2(VAR_12->sc_dev, "Octeon-16550 channel 0");
        }

 VAR_12->sc_rxfifosz = 64;
 VAR_12->sc_txfifosz = 64;
 return (0);
}
