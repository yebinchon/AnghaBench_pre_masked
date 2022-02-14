
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_softc {scalar_t__ sc_opened; TYPE_1__* sc_sysdev; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct uart_softc*,int ) ;

__attribute__((used)) static __inline int
FUNC_2(void *VAR_2)
{
 struct uart_softc *VAR_3 = VAR_2;







 if (VAR_3->sc_opened)
  FUNC_1(VAR_3, VAR_0);
 return (0);
}
