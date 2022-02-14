
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {scalar_t__ sc_hwoflow; scalar_t__ sc_hwiflow; } ;



__attribute__((used)) static int
FUNC_0(struct uart_softc *VAR_0)
{

 VAR_0->sc_hwiflow = 0;
 VAR_0->sc_hwoflow = 0;

 return (0);
}
