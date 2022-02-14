
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct altera_jtag_uart_softc {int dummy; } ;


 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;
 int FUNC_2 (struct altera_jtag_uart_softc*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct altera_jtag_uart_softc *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_3);

 FUNC_3(&VAR_2, 1);
 VAR_4 = FUNC_1(VAR_3);
 VAR_4 &= ~(VAR_0 | VAR_1);
 FUNC_2(VAR_3, VAR_4);
}
