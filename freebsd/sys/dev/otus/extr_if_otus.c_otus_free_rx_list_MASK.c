
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otus_softc {int sc_rx; int sc_rx_active; int sc_rx_inactive; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct otus_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct otus_softc *VAR_1)
{

 FUNC_0(&VAR_1->sc_rx_inactive);
 FUNC_0(&VAR_1->sc_rx_active);

 FUNC_1(VAR_1, VAR_1->sc_rx, VAR_0);
}
