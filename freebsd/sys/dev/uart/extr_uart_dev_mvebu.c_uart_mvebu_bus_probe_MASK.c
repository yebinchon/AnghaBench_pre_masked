
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_softc {int sc_txfifosz; int sc_rxfifosz; scalar_t__ sc_hwoflow; scalar_t__ sc_hwiflow; int sc_dev; } ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_2)
{
 if (!FUNC_2(VAR_2->sc_dev))
  return (VAR_0);

 if (!FUNC_1(VAR_2->sc_dev, VAR_1)->ocd_data)
  return (VAR_0);

 FUNC_0(VAR_2->sc_dev, "Marvell Armada 3700 UART");

 VAR_2->sc_txfifosz = 32;
 VAR_2->sc_rxfifosz = 64;
 VAR_2->sc_hwiflow = 0;
 VAR_2->sc_hwoflow = 0;

 return (0);
}
