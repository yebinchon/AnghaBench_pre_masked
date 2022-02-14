
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct uart_bas *VAR_4, int VAR_5)
{
 char VAR_6;
 if (!VAR_3) return;
 VAR_6 = VAR_5;
 while (!(FUNC_1(VAR_4, VAR_0) & VAR_1));
 FUNC_2(VAR_4, VAR_2, VAR_5);
 FUNC_0(VAR_4);
 while (!(FUNC_1(VAR_4, VAR_0) & VAR_1));
}
