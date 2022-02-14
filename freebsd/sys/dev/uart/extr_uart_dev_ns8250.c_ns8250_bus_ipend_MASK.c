
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
struct ns8250_softc {int ier; scalar_t__ busy_detect; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_bas*,int ,int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct uart_softc *VAR_16)
{
 struct uart_bas *VAR_17;
 struct ns8250_softc *VAR_18;
 int VAR_19;
 uint8_t VAR_20, VAR_21;

 VAR_18 = (struct ns8250_softc *)VAR_16;
 VAR_17 = &VAR_16->sc_bas;
 FUNC_3(VAR_16->sc_hwmtx);
 VAR_20 = FUNC_2(VAR_17, VAR_9);

 if (VAR_18->busy_detect && (VAR_20 & VAR_1) == VAR_1) {
  (void)FUNC_2(VAR_17, VAR_0);
  FUNC_5(VAR_16->sc_hwmtx);
  return (0);
 }
 if (VAR_20 & VAR_2) {
  FUNC_5(VAR_16->sc_hwmtx);
  return (0);
 }
 VAR_19 = 0;
 if (VAR_20 & VAR_3) {
  VAR_21 = FUNC_2(VAR_17, VAR_10);
  if (VAR_21 & VAR_6)
   VAR_19 |= VAR_12;
  if (VAR_21 & VAR_5)
   VAR_19 |= VAR_11;
  if (VAR_21 & VAR_7)
   VAR_19 |= VAR_13;
 } else {
  if (VAR_20 & VAR_4) {
   VAR_19 |= VAR_15;
   FUNC_4(VAR_17, VAR_8, VAR_18->ier);
   FUNC_1(VAR_17);
  } else
   VAR_19 |= VAR_14;
 }
 if (VAR_19 == 0)
  FUNC_0(VAR_17);
 FUNC_5(VAR_16->sc_hwmtx);
 return (VAR_19);
}
