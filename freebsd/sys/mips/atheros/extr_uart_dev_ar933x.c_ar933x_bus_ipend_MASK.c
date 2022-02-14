
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; scalar_t__ sc_txbusy; struct uart_bas sc_bas; } ;
struct ar933x_softc {int u_ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_7)
{
 struct ar933x_softc *VAR_8 = (struct ar933x_softc *)VAR_7;
 struct uart_bas *VAR_9 = &VAR_7->sc_bas;
 int VAR_10 = 0;
 uint32_t VAR_11;

 FUNC_3(VAR_7->sc_hwmtx);




 VAR_11 = FUNC_0(VAR_9, VAR_1);
 FUNC_1(VAR_9, VAR_1, VAR_11);
 FUNC_2(VAR_9);




 if (VAR_11 & VAR_2) {
  VAR_10 |= VAR_4;
 }
 if (VAR_11 & VAR_3) {



  VAR_8->u_ier &= ~VAR_3;
  FUNC_1(VAR_9, VAR_0, VAR_8->u_ier);
  FUNC_2(VAR_9);
 }






 if (VAR_7->sc_txbusy) {
  if (VAR_11 & VAR_3) {
   VAR_10 |= VAR_6;
  } else {
   VAR_10 |= VAR_5;
  }
 }

 FUNC_4(VAR_7->sc_hwmtx);
 return (VAR_10);
}
