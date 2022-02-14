
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {scalar_t__ chan; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uart_bas*,int) ;

__attribute__((used)) static int
FUNC_2(struct uart_bas *VAR_0)
{
 uint16_t VAR_1;

 VAR_1 = FUNC_1(VAR_0, FUNC_0(VAR_0->chan - 1));
 return ((FUNC_1(VAR_0, VAR_1) & 0x8000) ? 0 : 1);
}
