
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {scalar_t__ chan; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct uart_bas*,int) ;
 scalar_t__ FUNC_3 (struct uart_bas*,int) ;
 int FUNC_4 (struct uart_bas*,int,int) ;
 int FUNC_5 (struct mtx*) ;
 int FUNC_6 (struct mtx*) ;

__attribute__((used)) static int
FUNC_7(struct uart_bas *VAR_0, struct mtx *VAR_1)
{
 volatile char *VAR_2;
 int VAR_3;
 uint16_t VAR_4, VAR_5;

 FUNC_5(VAR_1);

 VAR_4 = FUNC_2(VAR_0, FUNC_1(VAR_0->chan - 1));

 while ((VAR_5 = FUNC_2(VAR_0, VAR_4)) & 0x8000) {
  FUNC_6(VAR_1);
  FUNC_0(4);
  FUNC_5(VAR_1);
 }

 VAR_2 = (void *)(uintptr_t)FUNC_3(VAR_0, VAR_4 + 4);
 VAR_3 = *VAR_2;
 FUNC_4(VAR_0, VAR_4, VAR_5 | 0x8000);

 FUNC_6(VAR_1);

 return (VAR_3);
}
