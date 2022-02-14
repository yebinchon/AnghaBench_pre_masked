
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct mtx*) ;
 int FUNC_6 (struct mtx*) ;

__attribute__((used)) static int
FUNC_7(struct uart_bas *VAR_4, struct mtx *VAR_5)
{
 int VAR_6;

 FUNC_5(VAR_5);
 while (!(FUNC_2(VAR_4, VAR_3, VAR_1)))
  ;

 VAR_6 = FUNC_1(VAR_4, FUNC_3(VAR_2));
 FUNC_6(VAR_5);






 return (VAR_6 & 0xff);
}
