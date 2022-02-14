
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*,int ) ;


 int FUNC_1 (struct uart_bas*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_6, int VAR_7, intptr_t VAR_8)
{
 struct uart_bas *VAR_9 = &VAR_6->sc_bas;
 uint32_t VAR_10, VAR_11;
 int VAR_12 = 0;

 FUNC_2(VAR_6->sc_hwmtx);

 switch (VAR_7) {
 case 129:
  VAR_10 = FUNC_0(VAR_9, VAR_0);
  if (VAR_8) {
   VAR_10 |= VAR_1;
   VAR_10 &= ~VAR_2;
  } else {
   VAR_10 |= VAR_2;
   VAR_10 &= ~VAR_1;
  }
  FUNC_1(VAR_9, VAR_0, VAR_10);
  break;
 case 128:
  VAR_11 = FUNC_0(VAR_9, VAR_3);
  if (VAR_8)
   VAR_11 |= VAR_4;
  else
   VAR_11 &= ~VAR_4;
  FUNC_1(VAR_9, VAR_3, VAR_11);
  break;
 default:
  VAR_12 = VAR_5;
  break;
 }

 FUNC_3(VAR_6->sc_hwmtx);

 return (VAR_12);
}
