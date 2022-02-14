
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;
struct ns8250_softc {int ier_rxbits; int ier_mask; int ier; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_1)
{
 int VAR_2;
 struct ns8250_softc *VAR_3 = (struct ns8250_softc*)VAR_1;
 struct uart_bas *VAR_4 = &VAR_1->sc_bas;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 0)
  return (VAR_2);

 VAR_3->ier_rxbits = 0x1d;
 VAR_3->ier_mask = 0xc0;
 VAR_3->ier = FUNC_2(VAR_4, VAR_0) & VAR_3->ier_mask;
 VAR_3->ier |= VAR_3->ier_rxbits;
 FUNC_3(VAR_4, VAR_0, VAR_3->ier);
 FUNC_1(VAR_4);
 return (0);
}
