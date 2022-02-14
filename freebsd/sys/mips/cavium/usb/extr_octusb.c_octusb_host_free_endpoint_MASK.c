
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octusb_td {TYPE_2__* qh; } ;
struct octusb_softc {TYPE_1__* sc_port; } ;
struct TYPE_4__ {scalar_t__ ep_allocated; size_t root_port_index; int ep_handle; int fixup_handle; struct octusb_softc* sc; } ;
struct TYPE_3__ {int state; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct octusb_td *VAR_0)
{
 struct octusb_softc *VAR_1;

 if (VAR_0->qh->ep_allocated == 0)
  return;


 VAR_1 = VAR_0->qh->sc;

 if (VAR_0->qh->fixup_handle >= 0) {

  FUNC_0(&VAR_1->sc_port[VAR_0->qh->root_port_index].state,
      VAR_0->qh->ep_handle, VAR_0->qh->fixup_handle);
 }
 FUNC_1(&VAR_1->sc_port[VAR_0->qh->root_port_index].state, VAR_0->qh->ep_handle);

 VAR_0->qh->ep_allocated = 0;
}
