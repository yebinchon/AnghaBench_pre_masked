
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
struct uart_mvebu_softc {int intrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct uart_softc *VAR_2)
{
 struct uart_mvebu_softc *VAR_3 = (struct uart_mvebu_softc *)VAR_2;
 struct uart_bas *VAR_4 = &VAR_2->sc_bas;
 uint32_t VAR_5;


 FUNC_2(VAR_2->sc_hwmtx);
 VAR_5 = FUNC_1(VAR_4, VAR_1);
 VAR_3->intrm = VAR_5 & VAR_0;
 FUNC_3(VAR_4, VAR_1, VAR_5 & ~VAR_0);
 FUNC_0(VAR_4);
 FUNC_4(VAR_2->sc_hwmtx);
}
