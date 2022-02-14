
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct z8530_softc {scalar_t__ txidle; } ;
struct uart_bas {int chan; } ;
struct uart_softc {int sc_hwsig; int sc_hwmtx; struct uart_bas sc_bas; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int,int,int ,int ) ;
 int VAR_28 ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_bas*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_29)
{
 struct z8530_softc *VAR_30 = (struct z8530_softc*)VAR_29;
 struct uart_bas *VAR_31;
 int VAR_32;
 uint32_t VAR_33;
 uint8_t VAR_34, VAR_35, VAR_36, VAR_37;

 VAR_31 = &VAR_29->sc_bas;
 VAR_32 = 0;

 FUNC_3(VAR_29->sc_hwmtx);
 switch (VAR_31->chan) {
 case 1:
  VAR_35 = FUNC_2(VAR_31, VAR_13);
  break;
 case 2:
  VAR_36 = FUNC_2(VAR_31, VAR_14) & 0x0E;
  switch (VAR_36) {
  case 129: VAR_35 = VAR_10; break;
  case 128: VAR_35 = VAR_9; break;
  case 130: VAR_35 = VAR_8; break;
  default: VAR_35 = 0; break;
  }
  break;
 default:
  VAR_35 = 0;
  break;
 }

 if (VAR_35 & VAR_8)
  VAR_32 |= VAR_24;

 if (VAR_35 & VAR_10) {
  FUNC_4(VAR_31, VAR_11, VAR_6);
  FUNC_1(VAR_31);
  if (VAR_30->txidle) {
   VAR_32 |= VAR_26;
   VAR_30->txidle = 0;
  }
 }

 if (VAR_35 & VAR_9) {
  FUNC_4(VAR_31, VAR_11, VAR_7);
  FUNC_1(VAR_31);
  VAR_34 = FUNC_2(VAR_31, VAR_12);
  if (VAR_34 & VAR_0)
   VAR_32 |= VAR_22;
  VAR_33 = VAR_29->sc_hwsig;
  FUNC_0(VAR_34 & VAR_1, VAR_33, VAR_16, VAR_18);
  FUNC_0(VAR_34 & VAR_2, VAR_33, VAR_17, VAR_19);
  FUNC_0(VAR_34 & VAR_3, VAR_33, VAR_21, VAR_20);
  if (VAR_33 & VAR_27)
   VAR_32 |= VAR_25;
  VAR_37 = FUNC_2(VAR_31, VAR_15);
  if (VAR_37 & VAR_28) {
   FUNC_4(VAR_31, VAR_11, VAR_4);
   FUNC_1(VAR_31);
   VAR_32 |= VAR_23;
  }
 }

 if (VAR_32) {
  FUNC_4(VAR_31, VAR_11, VAR_5);
  FUNC_1(VAR_31);
 }

 FUNC_5(VAR_29->sc_hwmtx);

 return (VAR_32);
}
