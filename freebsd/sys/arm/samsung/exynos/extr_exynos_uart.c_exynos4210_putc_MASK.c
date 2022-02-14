
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int bsh; int bst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct uart_bas *VAR_3, int VAR_4)
{

 while ((FUNC_0(VAR_3->bst, VAR_3->bsh, VAR_0) &
  VAR_2) == VAR_2)
  continue;

 FUNC_1(VAR_3, VAR_1, VAR_4);
}
