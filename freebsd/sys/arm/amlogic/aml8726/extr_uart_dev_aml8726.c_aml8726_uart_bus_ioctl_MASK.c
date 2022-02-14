
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
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
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_14, int VAR_15, intptr_t VAR_16)
{
 struct uart_bas *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 uint32_t VAR_21, VAR_22, VAR_23;

 VAR_17 = &VAR_14->sc_bas;
 FUNC_1(VAR_14->sc_hwmtx);

 VAR_20 = 0;
 switch (VAR_15) {
 case 130:
  VAR_21 = FUNC_0(VAR_17, VAR_2);
  VAR_21 &= VAR_0;

  VAR_22 = FUNC_0(VAR_17, VAR_6);
  VAR_22 &= VAR_4;

  VAR_19 = ((VAR_22 >> VAR_5) <<
      VAR_1) | VAR_21;

  switch (VAR_13) {
  case 133:
  case 132:
  case 131:
   VAR_23 = FUNC_0(VAR_17, VAR_10);
   if ((VAR_23 & VAR_7) != 0) {
    VAR_19 = (VAR_23 & VAR_8) >>
        VAR_9;
   }
   break;
  default:
   break;
  }

  VAR_18 = VAR_17->rclk / 4 / (VAR_19 + 1);
  if (VAR_18 > 0)
   *(int*)VAR_16 = VAR_18;
  else
   VAR_20 = VAR_12;
  break;

 case 129:
 case 128:
  VAR_21 = FUNC_0(VAR_17, VAR_2);
  if (VAR_16)
   VAR_21 &= ~VAR_3;
  else
   VAR_21 |= VAR_3;
  FUNC_2(VAR_17, VAR_2, VAR_21);
  break;

 default:
  VAR_20 = VAR_11;
  break;
 }

 FUNC_3(VAR_14->sc_hwmtx);

 return (VAR_20);
}
