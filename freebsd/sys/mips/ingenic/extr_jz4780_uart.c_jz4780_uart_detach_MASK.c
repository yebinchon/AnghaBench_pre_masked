
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_uart_softc {int * clk_baud; int * clk_mod; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 struct jz4780_uart_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct jz4780_uart_softc *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 != 0)
  return (VAR_2);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->clk_mod != ((void*)0)) {
  FUNC_0(VAR_1->clk_mod);
 }
 if (VAR_1->clk_baud != ((void*)0)) {
  FUNC_0(VAR_1->clk_baud);
 }
 return (0);
}
