
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct usb_xfer {int nframes; TYPE_2__* endpoint; scalar_t__ isoc_time_complete; TYPE_1__* xroot; } ;
struct musbotg_softc {int sc_bus; } ;
struct TYPE_4__ {int isoc_next; int is_synced; } ;
struct TYPE_3__ {int udev; int bus; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct musbotg_softc*,int ) ;
 int VAR_1 ;
 struct musbotg_softc* FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct usb_xfer*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_3)
{
 struct musbotg_softc *VAR_4 = FUNC_2(VAR_3->xroot->bus);
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 FUNC_0(5, "xfer=%p next=%d nframes=%d\n",
     VAR_3, VAR_3->endpoint->isoc_next, VAR_3->nframes);



 VAR_6 = FUNC_1(VAR_4, VAR_1);





 VAR_5 = (VAR_6 - VAR_3->endpoint->isoc_next) & VAR_0;

 if (FUNC_5(VAR_3->xroot->udev) == VAR_2) {
  VAR_7 = (VAR_3->nframes + 7) / 8;
 } else {
  VAR_7 = VAR_3->nframes;
 }

 if ((VAR_3->endpoint->is_synced == 0) ||
     (VAR_5 < VAR_7)) {






  VAR_3->endpoint->isoc_next = (VAR_6 + 3) & VAR_0;
  VAR_3->endpoint->is_synced = 1;
  FUNC_0(2, "start next=%d\n", VAR_3->endpoint->isoc_next);
 }




 VAR_5 = (VAR_3->endpoint->isoc_next - VAR_6) & VAR_0;




 VAR_3->isoc_time_complete =
     FUNC_4(&VAR_4->sc_bus, VAR_6) + VAR_5 +
     VAR_7;


 VAR_3->endpoint->isoc_next += VAR_7;


 FUNC_3(VAR_3);
}
