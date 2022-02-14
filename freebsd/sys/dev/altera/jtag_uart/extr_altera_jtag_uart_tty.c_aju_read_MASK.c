
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_jtag_uart_softc {char* ajus_buffer_datap; scalar_t__* ajus_buffer_validp; } ;


 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;

__attribute__((used)) static char
FUNC_2(struct altera_jtag_uart_softc *VAR_0)
{

 FUNC_0(VAR_0);

 while (!FUNC_1(VAR_0));
 *VAR_0->ajus_buffer_validp = 0;
 return (*VAR_0->ajus_buffer_datap);
}
