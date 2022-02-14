
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_flags; int sc_bus; int * sc_intr_hdl; scalar_t__ sc_io_hdl; scalar_t__ sc_io_tag; } ;
struct vybrid_ehci_softc {scalar_t__* res; TYPE_1__ base; } ;
typedef TYPE_1__ ehci_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 (int ) ;
 struct vybrid_ehci_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_7 (int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct vybrid_ehci_softc *VAR_5;
 ehci_softc_t *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_4);
 VAR_6 = &VAR_5->base;


 if ((VAR_7 = FUNC_3(VAR_4)) != 0)
  return (VAR_7);




 if (VAR_6->sc_flags & VAR_0) {
  FUNC_6(VAR_6);
  VAR_6->sc_flags &= ~VAR_0;
 }





 if (VAR_6->sc_io_tag && VAR_6->sc_io_hdl)
  FUNC_1(VAR_6->sc_io_tag, VAR_6->sc_io_hdl,
      VAR_1, 0);

 if (VAR_5->res[5] && VAR_6->sc_intr_hdl) {
  VAR_7 = FUNC_2(VAR_4, VAR_5->res[5],
      VAR_6->sc_intr_hdl);
  if (VAR_7) {
   FUNC_5(VAR_4, "Could not tear down irq,"
       " %d\n", VAR_7);
   return (VAR_7);
  }
  VAR_6->sc_intr_hdl = ((void*)0);
 }

 FUNC_7(&VAR_6->sc_bus, &VAR_2);

 FUNC_0(VAR_4, VAR_3, VAR_5->res);

 return (0);
}
