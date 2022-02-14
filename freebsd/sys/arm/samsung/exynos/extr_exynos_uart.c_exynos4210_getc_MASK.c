
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int bsh; int bst; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct uart_bas *VAR_3, struct mtx *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->bst, VAR_3->bsh, VAR_1);
 while (!(VAR_5 & VAR_2)) {
  VAR_5 = FUNC_0(VAR_3->bst, VAR_3->bsh, VAR_1);
  continue;
 }

 return (FUNC_0(VAR_3->bst, VAR_3->bsh, VAR_0));
}
