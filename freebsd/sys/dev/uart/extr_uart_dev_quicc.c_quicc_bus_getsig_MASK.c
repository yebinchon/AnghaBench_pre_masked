
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_softc {int sc_hwsig; int sc_hwmtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_7)
{
 uint32_t VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11;

 do {
  VAR_9 = VAR_7->sc_hwsig;
  VAR_10 = VAR_9;
  FUNC_2(VAR_7->sc_hwmtx);

  VAR_11 = 0;
  FUNC_3(VAR_7->sc_hwmtx);
  FUNC_0(VAR_11, VAR_10, VAR_0, VAR_2);
  FUNC_0(VAR_11, VAR_10, VAR_1, VAR_3);
  FUNC_0(VAR_11, VAR_10, VAR_5, VAR_4);
  VAR_8 = VAR_10 & ~VAR_6;
 } while (!FUNC_1(&VAR_7->sc_hwsig, VAR_9, VAR_8));
 return (VAR_10);
}
