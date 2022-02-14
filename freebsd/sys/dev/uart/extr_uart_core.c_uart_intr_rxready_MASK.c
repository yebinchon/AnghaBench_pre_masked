
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_softc {int sc_rxput; int sc_rxbufsz; int sc_rxget; scalar_t__ sc_opened; int sc_altbrk; int * sc_rxbuf; TYPE_1__* sc_sysdev; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct uart_softc*,int ) ;

__attribute__((used)) static __inline int
FUNC_3(void *VAR_2)
{
 struct uart_softc *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = VAR_3->sc_rxput;
 FUNC_0(VAR_3);
 if (VAR_3->sc_opened)
  FUNC_2(VAR_3, VAR_0);
 else
  VAR_3->sc_rxput = VAR_3->sc_rxget;
 return (1);
}
