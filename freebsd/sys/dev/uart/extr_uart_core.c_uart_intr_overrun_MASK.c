
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {size_t sc_rxput; int * sc_rxbuf; scalar_t__ sc_opened; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct uart_softc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct uart_softc*,int ) ;
 int FUNC_3 (struct uart_softc*,int ) ;

__attribute__((used)) static __inline int
FUNC_4(void *VAR_3)
{
 struct uart_softc *VAR_4 = VAR_3;

 if (VAR_4->sc_opened) {
  FUNC_1(VAR_4);
  if (FUNC_2(VAR_4, VAR_2))
   VAR_4->sc_rxbuf[VAR_4->sc_rxput] = VAR_2;
  FUNC_3(VAR_4, VAR_0);
 }
 FUNC_0(VAR_4, VAR_1);
 return (0);
}
