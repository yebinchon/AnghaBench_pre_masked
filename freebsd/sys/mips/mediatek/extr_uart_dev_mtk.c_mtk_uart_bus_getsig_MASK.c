
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
 int FUNC_0 (int,int,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_11)
{
 uint32_t VAR_12, VAR_13, VAR_14;
 uint8_t VAR_15;

 return(0);
 do {
  VAR_13 = VAR_11->sc_hwsig;
  VAR_14 = VAR_13;
  FUNC_3(VAR_11->sc_hwmtx);
  VAR_15 = FUNC_2(&VAR_11->sc_bas, VAR_10);
  FUNC_4(VAR_11->sc_hwmtx);

  FUNC_0(VAR_15 & VAR_7, VAR_14, VAR_0, VAR_2);
  FUNC_0(VAR_15 & VAR_8, VAR_14, VAR_1, VAR_3);
  FUNC_0(VAR_15 & VAR_9, VAR_14, VAR_5, VAR_4);
  VAR_12 = VAR_14 & ~VAR_6;
 } while (!FUNC_1(&VAR_11->sc_hwsig, VAR_13, VAR_12));

 return (VAR_14);
}
