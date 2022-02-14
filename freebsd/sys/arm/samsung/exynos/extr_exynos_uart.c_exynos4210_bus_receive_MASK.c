
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int bsh; int bst; } ;
struct uart_softc {struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_3)
{
 struct uart_bas *VAR_4;

 VAR_4 = &VAR_3->sc_bas;
 while (FUNC_0(VAR_4->bst, VAR_4->bsh,
  VAR_0) & VAR_2)
  FUNC_2(VAR_3, FUNC_1(&VAR_3->sc_bas, VAR_1));

 return (0);
}
