
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_devinfo* sc_sysdev; struct uart_bas sc_bas; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; int parity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uart_bas*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_4 (struct uart_softc*) ;
 int FUNC_5 (struct uart_bas*,int,int,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_33)
{
 struct uart_bas *VAR_34;
 struct uart_devinfo *VAR_35;

 VAR_34 = &VAR_33->sc_bas;
 if (VAR_33->sc_sysdev != ((void*)0)) {
  VAR_35 = VAR_33->sc_sysdev;
  FUNC_5(VAR_34, VAR_35->baudrate, VAR_35->databits, VAR_35->stopbits,
      VAR_35->parity);
 } else {
  FUNC_5(VAR_34, 115200, 8, 1, 0);
 }

 (void)FUNC_4(VAR_33);


 FUNC_3(VAR_34, FUNC_2(VAR_30), 0xffff);
 FUNC_3(VAR_34, FUNC_2(VAR_31), 0xffff);

 FUNC_0(VAR_34, VAR_29, VAR_7);
 FUNC_1(VAR_34, VAR_26, VAR_18);
 FUNC_0(VAR_34, VAR_26, VAR_13);
 FUNC_0(VAR_34, VAR_28, VAR_22);
 FUNC_1(VAR_34, VAR_27, VAR_3);
 FUNC_0(VAR_34, VAR_26, VAR_25);
 FUNC_0(VAR_34, VAR_26, VAR_24);
 FUNC_0(VAR_34, VAR_29, VAR_23);
 FUNC_0(VAR_34, VAR_29, VAR_15);
 FUNC_1(VAR_34, VAR_29, VAR_5);
 FUNC_0(VAR_34, VAR_29, VAR_32);
 FUNC_0(VAR_34, VAR_26, VAR_1);
 FUNC_0(VAR_34, VAR_28, VAR_0);
 FUNC_0(VAR_34, VAR_27, VAR_11);
 FUNC_0(VAR_34, VAR_29, VAR_10);
 FUNC_0(VAR_34, VAR_28, VAR_2);
 FUNC_0(VAR_34, VAR_28, VAR_4);
 FUNC_0(VAR_34, VAR_28, VAR_12);
 FUNC_0(VAR_34, VAR_28, VAR_16);
 FUNC_0(VAR_34, VAR_26, VAR_19);
 FUNC_0(VAR_34, VAR_27, VAR_20);
 FUNC_0(VAR_34, VAR_28, VAR_9);
 FUNC_0(VAR_34, VAR_28, VAR_17);
 FUNC_0(VAR_34, VAR_28, VAR_6);
 FUNC_0(VAR_34, VAR_28, VAR_8);
 FUNC_1(VAR_34, VAR_27, VAR_14);
 FUNC_1(VAR_34, VAR_28, VAR_21);

 return (0);
}
