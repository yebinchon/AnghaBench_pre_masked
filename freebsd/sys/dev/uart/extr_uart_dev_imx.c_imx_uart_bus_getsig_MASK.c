
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct uart_softc {int sc_hwsig; int sc_hwmtx; int sc_bas; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct uart_softc *VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;
 uint8_t VAR_9;

 do {
  VAR_7 = VAR_5->sc_hwsig;
  VAR_8 = VAR_7;
  FUNC_5(VAR_5->sc_hwmtx);
  VAR_9 = FUNC_1(&VAR_5->sc_bas, FUNC_2(VAR_4));
  FUNC_6(VAR_5->sc_hwmtx);

  FUNC_3(VAR_9 & FUNC_0(VAR_4, VAR_0), VAR_8, VAR_1, VAR_2);
  VAR_6 = VAR_8 & ~VAR_3;
 } while (!FUNC_4(&VAR_5->sc_hwsig, VAR_7, VAR_6));

 return (VAR_8);
}
