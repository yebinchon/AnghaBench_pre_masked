
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct uart_bas *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = 250000;
 while ((FUNC_2(VAR_3, VAR_2) & VAR_0) == 0 && --VAR_5)
  FUNC_0(4);
 FUNC_3(VAR_3, VAR_1, VAR_4);
 FUNC_1(VAR_3);
}
