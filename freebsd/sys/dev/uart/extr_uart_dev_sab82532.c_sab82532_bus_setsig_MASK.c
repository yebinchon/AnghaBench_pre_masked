
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
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
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uart_bas*,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct uart_softc *VAR_9, int VAR_10)
{
 struct uart_bas *VAR_11;
 uint32_t VAR_12, VAR_13;
 uint8_t VAR_14, VAR_15;

 VAR_11 = &VAR_9->sc_bas;
 do {
  VAR_13 = VAR_9->sc_hwsig;
  VAR_12 = VAR_13;
  if (VAR_10 & VAR_5) {
   FUNC_0(VAR_10 & VAR_7, VAR_12, VAR_7,
       VAR_5);
  }
  if (VAR_10 & VAR_6) {
   FUNC_0(VAR_10 & VAR_8, VAR_12, VAR_8,
       VAR_6);
  }
 } while (!FUNC_1(&VAR_9->sc_hwsig, VAR_13, VAR_12));

 FUNC_4(VAR_9->sc_hwmtx);

 VAR_15 = FUNC_3(VAR_11, VAR_2);
 switch (VAR_11->chan) {
 case 1:
  if (VAR_12 & VAR_7)
   VAR_15 &= ~VAR_3;
  else
   VAR_15 |= VAR_3;
  break;
 case 2:
  if (VAR_12 & VAR_7)
   VAR_15 &= ~VAR_4;
  else
   VAR_15 |= VAR_4;
  break;
 }
 FUNC_5(VAR_11, VAR_2, VAR_15);


 VAR_14 = FUNC_3(VAR_11, VAR_0);
 if (VAR_12 & VAR_8)
  VAR_14 &= ~VAR_1;
 else
  VAR_14 |= VAR_1;
 FUNC_5(VAR_11, VAR_0, VAR_14);
 FUNC_2(VAR_11);
 FUNC_6(VAR_9->sc_hwmtx);
 return (0);
}
