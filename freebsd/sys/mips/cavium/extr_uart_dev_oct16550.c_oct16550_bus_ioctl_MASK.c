
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int rclk; } ;
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
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (struct uart_softc *VAR_11, int VAR_12, intptr_t VAR_13)
{
 struct uart_bas *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 uint8_t VAR_18, VAR_19;

 VAR_14 = &VAR_11->sc_bas;
 VAR_17 = 0;
 FUNC_2(VAR_11->sc_hwmtx);
 switch (VAR_12) {
 case 130:
  VAR_19 = FUNC_1(VAR_14, VAR_9);
  if (VAR_13)
   VAR_19 |= VAR_5;
  else
   VAR_19 &= ~VAR_5;
  FUNC_3(VAR_14, VAR_9, VAR_19);
  FUNC_0(VAR_14);
  break;
 case 129:
  VAR_19 = FUNC_1(VAR_14, VAR_9);
  FUNC_0(VAR_14);
  FUNC_3(VAR_14, VAR_9, 0xbf);
  FUNC_0(VAR_14);
  VAR_18 = FUNC_1(VAR_14, VAR_8);
  if (VAR_13)
   VAR_18 |= VAR_1;
  else
   VAR_18 &= ~VAR_1;
  FUNC_3(VAR_14, VAR_8, VAR_18);
  FUNC_0(VAR_14);
  FUNC_3(VAR_14, VAR_9, VAR_19);
  FUNC_0(VAR_14);
  break;
 case 128:
  VAR_19 = FUNC_1(VAR_14, VAR_9);
  FUNC_0(VAR_14);
  FUNC_3(VAR_14, VAR_9, 0xbf);
  FUNC_0(VAR_14);
  VAR_18 = FUNC_1(VAR_14, VAR_8);
  if (VAR_13)
   VAR_18 |= VAR_0;
  else
   VAR_18 &= ~VAR_0;
  FUNC_3(VAR_14, VAR_8, VAR_18);
  FUNC_0(VAR_14);
  FUNC_3(VAR_14, VAR_9, VAR_19);
  FUNC_0(VAR_14);
  break;
 case 131:
  VAR_19 = FUNC_1(VAR_14, VAR_9);
  FUNC_3(VAR_14, VAR_9, VAR_19 | VAR_4);
  FUNC_0(VAR_14);
  VAR_16 = FUNC_1(VAR_14, VAR_7) |
      (FUNC_1(VAR_14, VAR_6) << 8);
  FUNC_0(VAR_14);
  FUNC_3(VAR_14, VAR_9, VAR_19);
  FUNC_0(VAR_14);
  VAR_15 = (VAR_16 > 0) ? VAR_14->rclk / VAR_16 / 16 : 0;
                VAR_10 = 1;
  if (VAR_15 > 0)
   *(int*)VAR_13 = VAR_15;
  else
   VAR_17 = VAR_3;
  break;
 default:
  VAR_17 = VAR_2;
  break;
 }
 FUNC_4(VAR_11->sc_hwmtx);
 return (VAR_17);
}
