
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*) ;

__attribute__((used)) static int
FUNC_2(struct uart_bas *VAR_1, struct mtx *VAR_2)
{
 int VAR_3;

 while (!FUNC_1(VAR_1))
  ;
 VAR_3 = FUNC_0(VAR_1, VAR_0) & 0xff;

 return (VAR_3);
}
