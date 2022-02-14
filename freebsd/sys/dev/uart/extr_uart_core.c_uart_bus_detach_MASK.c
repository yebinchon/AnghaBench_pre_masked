
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_softc {int sc_leaving; TYPE_2__* sc_class; int sc_hwmtx_s; int * sc_rres; int sc_rrid; int sc_rtype; int * sc_ires; int sc_irid; int sc_icookie; struct uart_softc* sc_rxbuf; struct uart_softc* sc_txbuf; TYPE_1__* sc_sysdev; } ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_4__ {int (* detach ) (struct uart_softc*) ;int * hwmtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_3__* FUNC_3 (int ) ;
 struct uart_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct uart_softc*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct uart_softc*) ;
 int FUNC_9 (struct uart_softc*) ;

int
FUNC_10(device_t VAR_2)
{
 struct uart_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_2);

 VAR_3->sc_leaving = 1;

 if (VAR_3->sc_sysdev != ((void*)0))
  VAR_3->sc_sysdev->hwmtx = ((void*)0);

 FUNC_0(VAR_3);

 if (VAR_3->sc_sysdev != ((void*)0) && VAR_3->sc_sysdev->detach != ((void*)0))
  (*VAR_3->sc_sysdev->detach)(VAR_3);
 else
  FUNC_9(VAR_3);

 FUNC_6(VAR_3->sc_txbuf, VAR_0);
 FUNC_6(VAR_3->sc_rxbuf, VAR_0);

 if (VAR_3->sc_ires != ((void*)0)) {
  FUNC_2(VAR_2, VAR_3->sc_ires, VAR_3->sc_icookie);
  FUNC_1(VAR_2, VAR_1, VAR_3->sc_irid,
      VAR_3->sc_ires);
 }
 FUNC_1(VAR_2, VAR_3->sc_rtype, VAR_3->sc_rrid, VAR_3->sc_rres);

 FUNC_7(&VAR_3->sc_hwmtx_s);

 if (VAR_3->sc_class->size > FUNC_3(VAR_2)->size) {
  FUNC_5(VAR_2, ((void*)0));
  FUNC_6(VAR_3, VAR_0);
 }

 return (0);
}
