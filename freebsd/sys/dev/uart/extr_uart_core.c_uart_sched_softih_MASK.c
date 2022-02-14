
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_softc {int sc_ttypend; int sc_softih; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct uart_softc *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4;

 do {
  VAR_4 = VAR_1->sc_ttypend;
  VAR_3 = VAR_4 | VAR_2;
 } while (!FUNC_0(&VAR_1->sc_ttypend, VAR_4, VAR_3));

 if ((VAR_4 & VAR_0) == 0)
  FUNC_1(VAR_1->sc_softih, 0);
}
