
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {scalar_t__ sc_txbusy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_softc*,int ) ;

__attribute__((used)) static __inline int
FUNC_1(void *VAR_1)
{
 struct uart_softc *VAR_2 = VAR_1;

 if (VAR_2->sc_txbusy) {
  VAR_2->sc_txbusy = 0;
  FUNC_0(VAR_2, VAR_0);
 }
 return (0);
}
