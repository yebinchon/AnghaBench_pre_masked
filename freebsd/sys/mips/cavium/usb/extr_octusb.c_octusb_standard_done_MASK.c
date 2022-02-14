
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_error_t ;
struct TYPE_4__ {int control_act; scalar_t__ control_xfr; scalar_t__ control_hdr; } ;
struct usb_xfer {int aframes; int nframes; TYPE_3__* endpoint; struct octusb_qh** qh_start; TYPE_1__ flags_int; int * td_transfer_cache; int * td_transfer_first; } ;
struct octusb_softc {TYPE_2__* sc_port; } ;
struct octusb_qh {size_t root_port_index; int ep_handle; struct octusb_softc* sc; } ;
struct TYPE_6__ {int toggle_next; } ;
struct TYPE_5__ {int state; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct usb_xfer*,int ) ;
 int FUNC_3 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_4(struct usb_xfer *VAR_0)
{
 struct octusb_softc *VAR_1;
 struct octusb_qh *VAR_2;
 usb_error_t VAR_3 = 0;

 FUNC_0(12, "xfer=%p endpoint=%p transfer done\n",
     VAR_0, VAR_0->endpoint);



 VAR_0->td_transfer_cache = VAR_0->td_transfer_first;

 if (VAR_0->flags_int.control_xfr) {

  if (VAR_0->flags_int.control_hdr)
   VAR_3 = FUNC_3(VAR_0);

  VAR_0->aframes = 1;

  if (VAR_0->td_transfer_cache == ((void*)0))
   goto done;
 }
 while (VAR_0->aframes != VAR_0->nframes) {

  VAR_3 = FUNC_3(VAR_0);

  VAR_0->aframes++;

  if (VAR_0->td_transfer_cache == ((void*)0))
   goto done;
 }

 if (VAR_0->flags_int.control_xfr &&
     !VAR_0->flags_int.control_act)
  VAR_3 = FUNC_3(VAR_0);

done:


 VAR_2 = VAR_0->qh_start[0];
 VAR_1 = VAR_2->sc;

 VAR_0->endpoint->toggle_next =
     FUNC_1(
     &VAR_1->sc_port[VAR_2->root_port_index].state,
     VAR_2->ep_handle) ? 1 : 0;

 FUNC_2(VAR_0, VAR_3);
}
