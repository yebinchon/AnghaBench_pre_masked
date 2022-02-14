
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_softc {int sc_hwsig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct uart_softc *VAR_4, int VAR_5)
{
 uint32_t VAR_6, VAR_7;

 do {
  VAR_7 = VAR_4->sc_hwsig;
  VAR_6 = VAR_7;
  if (VAR_5 & VAR_0) {
   FUNC_0(VAR_5 & VAR_2, VAR_6, VAR_2, VAR_0);
  }
  if (VAR_5 & VAR_1) {
   FUNC_0(VAR_5 & VAR_3, VAR_6, VAR_3, VAR_1);
  }
  } while (!FUNC_1(&VAR_4->sc_hwsig, VAR_7, VAR_6));

 return (0);
}
