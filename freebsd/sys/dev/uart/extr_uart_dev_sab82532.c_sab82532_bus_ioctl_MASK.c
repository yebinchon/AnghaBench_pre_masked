
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



 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_7, int VAR_8, intptr_t VAR_9)
{
 struct uart_bas *VAR_10;
 uint8_t VAR_11, VAR_12;
 int VAR_13;

 VAR_10 = &VAR_7->sc_bas;
 VAR_13 = 0;
 FUNC_2(VAR_7->sc_hwmtx);
 switch (VAR_8) {
 case 130:
  VAR_11 = FUNC_1(VAR_10, VAR_1);
  if (VAR_9)
   VAR_11 |= VAR_2;
  else
   VAR_11 &= ~VAR_2;
  FUNC_3(VAR_10, VAR_1, VAR_11);
  FUNC_0(VAR_10);
  break;
 case 129:
  VAR_12 = FUNC_1(VAR_10, VAR_3);
  if (VAR_9) {
   VAR_12 &= ~VAR_6;
   VAR_12 |= VAR_5;
  } else {
   VAR_12 |= VAR_6;
   VAR_12 &= ~VAR_5;
  }
  FUNC_3(VAR_10, VAR_3, VAR_12);
  FUNC_0(VAR_10);
  break;
 case 128:
  VAR_12 = FUNC_1(VAR_10, VAR_3);
  if (VAR_9)
   VAR_12 &= ~VAR_4;
  else
   VAR_12 |= VAR_4;
  FUNC_3(VAR_10, VAR_3, VAR_12);
  FUNC_0(VAR_10);
  break;
 default:
  VAR_13 = VAR_0;
  break;
 }
 FUNC_4(VAR_7->sc_hwmtx);
 return (VAR_13);
}
