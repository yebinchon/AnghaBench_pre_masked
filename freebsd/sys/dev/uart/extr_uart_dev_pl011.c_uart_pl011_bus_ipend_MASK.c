
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; scalar_t__ sc_txbusy; struct uart_bas sc_bas; } ;
struct uart_pl011_softc {int imsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_11)
{
 struct uart_pl011_softc *VAR_12;
 struct uart_bas *VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 VAR_12 = (struct uart_pl011_softc *)VAR_11;
 VAR_13 = &VAR_11->sc_bas;

 FUNC_2(VAR_11->sc_hwmtx);
 VAR_14 = FUNC_0(VAR_13, VAR_8);
 VAR_15 = 0;

 if (VAR_14 & (VAR_9 | VAR_2))
  VAR_15 |= VAR_5;
 if (VAR_14 & VAR_0)
  VAR_15 |= VAR_3;
 if (VAR_14 & VAR_1)
  VAR_15 |= VAR_4;
 if (VAR_14 & VAR_10) {
  if (VAR_11->sc_txbusy)
   VAR_15 |= VAR_6;


  FUNC_1(VAR_13, VAR_7, VAR_12->imsc & ~VAR_10);
 }

 FUNC_3(VAR_11->sc_hwmtx);

 return (VAR_15);
}
