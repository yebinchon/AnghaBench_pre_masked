
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct usb_xfer {int nframes; TYPE_3__* endpoint; scalar_t__ isoc_time_complete; TYPE_2__* xroot; } ;
struct octusb_softc {int sc_bus; TYPE_1__* sc_port; } ;
struct TYPE_8__ {size_t port_index; } ;
struct TYPE_7__ {int isoc_next; int is_synced; } ;
struct TYPE_6__ {TYPE_4__* udev; int bus; } ;
struct TYPE_5__ {int state; } ;


 int FUNC_0 (int,char*,...) ;
 struct octusb_softc* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_1)
{
 struct octusb_softc *VAR_2 = FUNC_1(VAR_1->xroot->bus);
 uint32_t VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;

 FUNC_0(5, "xfer=%p next=%d nframes=%d\n",
     VAR_1, VAR_1->endpoint->isoc_next, VAR_1->nframes);



 VAR_4 = FUNC_2(
     &VAR_2->sc_port[VAR_1->xroot->udev->port_index].state);





 VAR_3 = (VAR_4 - VAR_1->endpoint->isoc_next) & 0x7FF;

 if (FUNC_4(VAR_1->xroot->udev) == VAR_0) {
  VAR_5 = (VAR_1->nframes + 7) / 8;
 } else {
  VAR_5 = VAR_1->nframes;
 }

 if ((VAR_1->endpoint->is_synced == 0) || (VAR_3 < VAR_5)) {






  VAR_1->endpoint->isoc_next = (VAR_4 + 3) & 0x7FF;
  VAR_1->endpoint->is_synced = 1;
  FUNC_0(2, "start next=%d\n", VAR_1->endpoint->isoc_next);
 }




 VAR_3 = (VAR_1->endpoint->isoc_next - VAR_4) & 0x7FF;




 VAR_1->isoc_time_complete =
     FUNC_3(&VAR_2->sc_bus, VAR_4) + VAR_3 +
     VAR_5;


 VAR_1->endpoint->isoc_next += VAR_5;
}
