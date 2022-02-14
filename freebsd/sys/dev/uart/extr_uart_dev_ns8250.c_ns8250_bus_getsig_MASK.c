
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct uart_softc {int sc_hwsig; int sc_pps_mode; int sc_hwmtx; int sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct uart_softc *VAR_7)
{
 uint32_t VAR_8, VAR_9;
 uint8_t VAR_10;
 do {
  VAR_8 = VAR_7->sc_hwsig;
  VAR_9 = VAR_8;
  FUNC_4(VAR_7->sc_hwmtx);
  VAR_10 = FUNC_3(&VAR_7->sc_bas, VAR_3);
  FUNC_5(VAR_7->sc_hwmtx);
  if (VAR_7->sc_pps_mode & VAR_6) {
   FUNC_0(VAR_9, VAR_10, VAR_2);
   FUNC_0(VAR_9, VAR_10, VAR_0);
   FUNC_0(VAR_9, VAR_10, VAR_1);
  } else {
   FUNC_1(VAR_9, VAR_10, VAR_2);
   FUNC_1(VAR_9, VAR_10, VAR_0);
   FUNC_1(VAR_9, VAR_10, VAR_1);
  }
  FUNC_1(VAR_9, VAR_10, VAR_4);
 } while (!FUNC_2(&VAR_7->sc_hwsig, VAR_8, VAR_9 & ~VAR_5));
 return (VAR_9);
}
