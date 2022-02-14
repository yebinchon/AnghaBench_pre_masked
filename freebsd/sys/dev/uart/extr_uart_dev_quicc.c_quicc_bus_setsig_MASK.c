
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; int sc_hwsig; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_4, int VAR_5)
{
 struct uart_bas *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_6 = &VAR_4->sc_bas;
 do {
  VAR_8 = VAR_4->sc_hwsig;
  VAR_7 = VAR_8;
  if (VAR_5 & VAR_0) {
   FUNC_0(VAR_5 & VAR_2, VAR_7, VAR_2,
       VAR_0);
  }
  if (VAR_5 & VAR_1) {
   FUNC_0(VAR_5 & VAR_3, VAR_7, VAR_3,
       VAR_1);
  }
 } while (!FUNC_1(&VAR_4->sc_hwsig, VAR_8, VAR_7));

 FUNC_2(VAR_4->sc_hwmtx);

 FUNC_3(VAR_4->sc_hwmtx);
 return (0);
}
