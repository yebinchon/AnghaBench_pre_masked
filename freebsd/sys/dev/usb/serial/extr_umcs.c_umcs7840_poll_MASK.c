
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umcs7840_softc {int sc_intr_xfer; TYPE_1__* sc_ports; } ;
struct ucom_softc {size_t sc_portno; struct umcs7840_softc* sc_parent; } ;
struct TYPE_2__ {int * sc_xfer; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct ucom_softc *VAR_1)
{
 struct umcs7840_softc *VAR_2 = VAR_1->sc_parent;

 FUNC_0("Port %d poll\n", VAR_1->sc_portno);
 FUNC_1(VAR_2->sc_ports[VAR_1->sc_portno].sc_xfer, VAR_0);
 FUNC_1(&VAR_2->sc_intr_xfer, 1);
}
