
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_5)
{
 struct uart_bas *VAR_6;

 VAR_6 = &VAR_5->sc_bas;
 FUNC_2(VAR_6, VAR_1, 0xff);
 FUNC_2(VAR_6, VAR_2, 0xff);
 FUNC_0(VAR_6);
 FUNC_1(VAR_6, VAR_3);
 FUNC_1(VAR_6, VAR_4);
 FUNC_0(VAR_6);
 FUNC_2(VAR_6, VAR_0, 0);
 FUNC_0(VAR_6);
 return (0);
}
