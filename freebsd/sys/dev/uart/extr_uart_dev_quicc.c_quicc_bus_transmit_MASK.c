
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {scalar_t__ chan; } ;
struct uart_softc {char* sc_txbuf; int sc_txbusy; int sc_hwmtx; struct uart_bas sc_bas; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uart_bas*,int) ;
 scalar_t__ FUNC_2 (struct uart_bas*,int) ;
 int FUNC_3 (struct uart_bas*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_0)
{
 volatile char *VAR_1;
 struct uart_bas *VAR_2;
 uint16_t VAR_3, VAR_4;

 VAR_2 = &VAR_0->sc_bas;
 FUNC_4(VAR_0->sc_hwmtx);
 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_2->chan - 1));
 VAR_3 = FUNC_1(VAR_2, VAR_4);
 VAR_1 = (void *)(uintptr_t)FUNC_2(VAR_2, VAR_4 + 4);
 *VAR_1 = VAR_0->sc_txbuf[0];
 FUNC_3(VAR_2, VAR_4 + 2, 1);
 FUNC_3(VAR_2, VAR_4, VAR_3 | 0x9000);
 VAR_0->sc_txbusy = 1;
 FUNC_5(VAR_0->sc_hwmtx);
 return (0);
}
