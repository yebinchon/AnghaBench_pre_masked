
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_4 (struct uart_softc *VAR_1)
{
 struct uart_bas *VAR_2;
 u_char VAR_3;

 VAR_2 = &VAR_1->sc_bas;
 VAR_3 = FUNC_2(VAR_2, VAR_0) & 0xf0;
 FUNC_3(VAR_2, VAR_0, VAR_3);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 return (0);
}
