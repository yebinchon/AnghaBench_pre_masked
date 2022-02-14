
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct altera_jtag_uart_softc {int* ajus_buffer_validp; int* ajus_buffer_datap; } ;


 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;

__attribute__((used)) static inline int
FUNC_2(struct altera_jtag_uart_softc *VAR_2)
{
 uint32_t VAR_3;

 FUNC_0(VAR_2);

 if (*VAR_2->ajus_buffer_validp)
  return (1);
 VAR_3 = FUNC_1(VAR_2);
 if ((VAR_3 & VAR_1) != 0) {
  *VAR_2->ajus_buffer_validp = 1;
  *VAR_2->ajus_buffer_datap = (VAR_3 & VAR_0);
  return (1);
 }
 return (0);
}
