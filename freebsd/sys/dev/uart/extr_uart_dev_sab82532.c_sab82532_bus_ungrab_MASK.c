
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct uart_softc *VAR_6)
{
 struct uart_bas *VAR_7;
 uint8_t VAR_8;

 VAR_7 = &VAR_6->sc_bas;
 VAR_8 = VAR_4|VAR_5|VAR_1|VAR_2|
     VAR_3;
 FUNC_1(VAR_6->sc_hwmtx);
 FUNC_2(VAR_7, VAR_0, 0xff & ~VAR_8);
 FUNC_0(VAR_7);
 FUNC_3(VAR_6->sc_hwmtx);
}
