
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


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
 int FUNC_0 (struct uart_softc*,int ) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_12)
{
 struct uart_bas *VAR_13;
 int VAR_14;
 uint8_t VAR_15, VAR_16, VAR_17;



 VAR_13 = &VAR_12->sc_bas;
 VAR_14 = 0;

 FUNC_2(VAR_12->sc_hwmtx);
 VAR_15 = FUNC_1(&VAR_12->sc_bas, VAR_7);
 VAR_16 = FUNC_1(&VAR_12->sc_bas, VAR_10);
 FUNC_3(&VAR_12->sc_bas, VAR_10, VAR_16);
 VAR_17 = FUNC_1(&VAR_12->sc_bas, VAR_11);
 FUNC_3(&VAR_12->sc_bas, VAR_11, VAR_17);
 if (VAR_15 & VAR_6) {
  FUNC_4(VAR_12->sc_hwmtx);
  return (0);
 }
 switch ((VAR_15 >> 1) & 0x07) {
 case 128:
  VAR_14 |= VAR_4;
  break;
 case 131:
  FUNC_0(VAR_12, VAR_5);

 case 132:
  VAR_14 |= VAR_2;
  break;
 case 129:
 case 130:
  VAR_14 |= VAR_3;
  if (VAR_16 & VAR_8)
   VAR_14 |= VAR_0;
  if (VAR_16 & VAR_9)
   VAR_14 |= VAR_1;
  break;
 default:

  break;
 }

 FUNC_4(VAR_12->sc_hwmtx);

 return (VAR_14);
}
