
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {scalar_t__ chan; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uart_bas*,int) ;
 int FUNC_2 (struct uart_bas*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct uart_softc *VAR_0)
{
 struct uart_bas *VAR_1;
 uint16_t VAR_2, VAR_3;


 VAR_1 = &VAR_0->sc_bas;
 FUNC_3(VAR_0->sc_hwmtx);
 VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_1->chan - 1));
 VAR_2 = FUNC_1(VAR_1, VAR_3);
 FUNC_2(VAR_1, VAR_3, VAR_2 | 0x9000);
 FUNC_4(VAR_0->sc_hwmtx);
}
