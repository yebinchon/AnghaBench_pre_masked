
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct uart_bas *VAR_8, int VAR_9)
{
 int VAR_10;
 VAR_10 = 1000;
 if (!(FUNC_3(VAR_8, VAR_4) & VAR_5)) {
  while ((FUNC_3(VAR_8, VAR_2) & VAR_7) == 0
      && --VAR_10)
   FUNC_0(4);
  FUNC_1(VAR_8, VAR_1, VAR_0);
 }

 FUNC_4(VAR_8, VAR_3, 1);


 while ((FUNC_3(VAR_8, VAR_4) & VAR_6) == 0)
  FUNC_0(4);


 FUNC_1(VAR_8, FUNC_2(0), (VAR_9 & 0xff));
}
