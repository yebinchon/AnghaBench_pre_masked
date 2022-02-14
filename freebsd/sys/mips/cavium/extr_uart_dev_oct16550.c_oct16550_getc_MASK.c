
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct mtx*) ;

__attribute__((used)) static int
FUNC_5 (struct uart_bas *VAR_3, struct mtx *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_3(VAR_4);


 VAR_6 = FUNC_1(VAR_3);

 while ((FUNC_2(VAR_3, VAR_2) & VAR_0) == 0) {
  FUNC_4(VAR_4);
  FUNC_0(VAR_6);
  FUNC_3(VAR_4);
 }

 VAR_5 = FUNC_2(VAR_3, VAR_1);

 FUNC_4(VAR_4);

 return (VAR_5);
}
