
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct uart_softc {int sc_hwsig; int sc_hwmtx; int sc_bas; } ;


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
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (struct uart_softc *VAR_14)
{
 uint32_t VAR_15, VAR_16, VAR_17;
 uint8_t VAR_18;

 do {
  VAR_16 = VAR_14->sc_hwsig;
  VAR_17 = VAR_16;
  FUNC_3(VAR_14->sc_hwmtx);
  VAR_18 = FUNC_2(&VAR_14->sc_bas, VAR_4);
  FUNC_4(VAR_14->sc_hwmtx);
  FUNC_0(VAR_18 & VAR_2, VAR_17, VAR_11, VAR_9);
  FUNC_0(VAR_18 & VAR_0, VAR_17, VAR_5, VAR_7);
  FUNC_0(VAR_18 & VAR_1, VAR_17, VAR_6, VAR_8);
  FUNC_0(VAR_18 & VAR_3, VAR_17, VAR_13, VAR_10);
  VAR_15 = VAR_17 & ~VAR_12;
 } while (!FUNC_1(&VAR_14->sc_hwsig, VAR_16, VAR_15));
 return (VAR_17);
}
