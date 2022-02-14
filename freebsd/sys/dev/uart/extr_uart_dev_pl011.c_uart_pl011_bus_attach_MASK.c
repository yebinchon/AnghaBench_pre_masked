
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;
struct uart_pl011_softc {int imsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct uart_softc *VAR_6)
{
 struct uart_pl011_softc *VAR_7;
 struct uart_bas *VAR_8;

 VAR_7 = (struct uart_pl011_softc *)VAR_6;
 VAR_8 = &VAR_6->sc_bas;


 VAR_7->imsc = (VAR_4 | VAR_1 | VAR_5);
 FUNC_0(VAR_8, VAR_3, VAR_7->imsc);


 FUNC_0(VAR_8, VAR_2, VAR_0);

 return (0);
}
