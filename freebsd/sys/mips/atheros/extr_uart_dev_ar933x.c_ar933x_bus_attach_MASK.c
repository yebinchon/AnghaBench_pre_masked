
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;
struct ar933x_softc {int u_ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_4)
{
 struct ar933x_softc *VAR_5 = (struct ar933x_softc *)VAR_4;
 struct uart_bas *VAR_6 = &VAR_4->sc_bas;
 uint32_t VAR_7;
 VAR_5->u_ier = VAR_3;


 FUNC_1(VAR_6, VAR_2, VAR_5->u_ier);


 VAR_7 = FUNC_0(VAR_6, VAR_1);
 VAR_7 |= VAR_0;
 FUNC_1(VAR_6, VAR_1, VAR_7);

 return (0);
}
