
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;
struct ns8250_softc {int ier_rxbits; int ier_mask; int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_5)
{
 struct ns8250_softc *VAR_6;
 struct uart_bas *VAR_7;
 int VAR_8;

 VAR_6 = (struct ns8250_softc *)VAR_5;
 VAR_7 = &VAR_5->sc_bas;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 != 0)
  return (0);


 VAR_6->ier_rxbits = VAR_3 | VAR_0 | VAR_1 | VAR_2;
 VAR_6->ier_mask = ~(VAR_6->ier_rxbits);
 VAR_6->ier = FUNC_2(VAR_7, VAR_4) & VAR_6->ier_mask;
 VAR_6->ier |= VAR_6->ier_rxbits;
 FUNC_3(VAR_7, VAR_4, VAR_6->ier);
 FUNC_1(VAR_7);
 return (0);
}
