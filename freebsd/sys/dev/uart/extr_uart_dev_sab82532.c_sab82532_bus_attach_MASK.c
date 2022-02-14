
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int * sc_sysdev; struct uart_bas sc_bas; } ;


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
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (struct uart_softc*,int) ;
 int FUNC_2 (struct uart_bas*,int,int,int,int ) ;
 int FUNC_3 (struct uart_bas*) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_13)
{
 struct uart_bas *VAR_14;
 uint8_t VAR_15, VAR_16;

 VAR_14 = &VAR_13->sc_bas;
 if (VAR_13->sc_sysdev == ((void*)0))
  FUNC_2(VAR_14, 9600, 8, 1, VAR_12);

 VAR_15 = VAR_4|VAR_5|VAR_1|VAR_2|
     VAR_3;
 FUNC_4(VAR_14, VAR_0, 0xff & ~VAR_15);
 VAR_16 = VAR_8|VAR_7|VAR_9;
 FUNC_4(VAR_14, VAR_6, 0xff & ~VAR_16);
 FUNC_3(VAR_14);

 if (VAR_13->sc_sysdev == ((void*)0))
  FUNC_1(VAR_13, VAR_10|VAR_11);
 (void)FUNC_0(VAR_13);
 return (0);
}
