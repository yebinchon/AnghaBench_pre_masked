
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct uart_softc {int sc_rxfifosz; int sc_txfifosz; int sc_dev; TYPE_1__ sc_bas; } ;
typedef int buf ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_0)
{
 char VAR_1[80];
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->sc_bas);
 if (VAR_2)
  return (VAR_2);

 VAR_0->sc_rxfifosz = 1;
 VAR_0->sc_txfifosz = 1;

 FUNC_2(VAR_1, sizeof(VAR_1), "quicc, channel %d", VAR_0->sc_bas.chan);
 FUNC_0(VAR_0->sc_dev, VAR_1);
 return (0);
}
