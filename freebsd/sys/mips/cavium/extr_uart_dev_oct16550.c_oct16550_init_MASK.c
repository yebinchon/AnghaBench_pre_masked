
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uart_bas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int,int,int,int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_5 (struct uart_bas *VAR_4, int VAR_5, int VAR_6, int VAR_7,
    int VAR_8)
{
 u_char VAR_9;

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);


 VAR_9 = FUNC_3(VAR_4, VAR_2) & 0x0;
 FUNC_4(VAR_4, VAR_2, VAR_9);
 FUNC_2(VAR_4);



 FUNC_2(VAR_4);


 FUNC_4(VAR_4, VAR_3, VAR_1 | VAR_0);
 FUNC_2(VAR_4);

 FUNC_0(VAR_4);
}
