
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwsig; int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int,int,int ,int ) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_14)
{
 struct uart_bas *VAR_15 = &VAR_14->sc_bas;
 uint32_t VAR_16, VAR_17, VAR_18;
 uint8_t VAR_19;

 do {
  VAR_17 = VAR_14->sc_hwsig;
  VAR_18 = VAR_17;
  FUNC_3(VAR_14->sc_hwmtx);
  VAR_19 = FUNC_0(VAR_15, VAR_0);
  FUNC_4(VAR_14->sc_hwmtx);
  FUNC_1(VAR_19 & VAR_3,
         VAR_18, VAR_11, VAR_9);
  FUNC_1(VAR_19 & VAR_1,
         VAR_18, VAR_5, VAR_7);
  FUNC_1(VAR_19 & VAR_2,
         VAR_18, VAR_6, VAR_8);
  FUNC_1(VAR_19 & VAR_4,
         VAR_18, VAR_13, VAR_10);
  VAR_16 = VAR_18 & ~VAR_12;
 } while (!FUNC_2(&VAR_14->sc_hwsig, VAR_17, VAR_16));
 return (VAR_18);
}
