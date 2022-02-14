
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int nframes; TYPE_5__* endpoint; scalar_t__ isoc_time_complete; TYPE_4__* xroot; } ;
struct TYPE_7__ {scalar_t__ status_high_speed; } ;
struct dwc_otg_softc {int sc_bus; TYPE_2__ sc_flags; } ;
struct TYPE_10__ {int isoc_next; int is_synced; } ;
struct TYPE_9__ {TYPE_3__* udev; int bus; } ;
struct TYPE_6__ {scalar_t__ usb_mode; } ;
struct TYPE_8__ {scalar_t__ speed; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int) ;
 struct dwc_otg_softc* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct dwc_otg_softc*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_8(struct usb_xfer *VAR_6)
{
 struct dwc_otg_softc *VAR_7 = FUNC_2(VAR_6->xroot->bus);
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint8_t VAR_11 = FUNC_7(VAR_6);

 FUNC_0(6, "xfer=%p next=%d nframes=%d\n",
     VAR_6, VAR_6->endpoint->isoc_next, VAR_6->nframes);

 if (VAR_6->xroot->udev->flags.usb_mode == VAR_4) {
  VAR_8 = FUNC_3(VAR_7, VAR_1);


  VAR_10 = (VAR_8 & VAR_3);
 } else {
  VAR_8 = FUNC_3(VAR_7, VAR_0);


  VAR_10 = FUNC_1(VAR_8);
 }




 if (VAR_7->sc_flags.status_high_speed)
  VAR_10 /= 8;

 VAR_10 &= VAR_2;





 if (VAR_6->xroot->udev->speed == VAR_5)
  VAR_9 = ((VAR_6->nframes << VAR_11) + 7) / 8;
 else
  VAR_9 = VAR_6->nframes;





 VAR_8 = (VAR_10 - VAR_6->endpoint->isoc_next) & VAR_2;

 if ((VAR_6->endpoint->is_synced == 0) || (VAR_8 < VAR_9)) {






  VAR_6->endpoint->isoc_next = (VAR_10 + 3) & VAR_2;
  VAR_6->endpoint->is_synced = 1;
  FUNC_0(3, "start next=%d\n", VAR_6->endpoint->isoc_next);
 }




 VAR_8 = (VAR_6->endpoint->isoc_next - VAR_10) & VAR_2;




 VAR_6->isoc_time_complete =
  FUNC_6(&VAR_7->sc_bus, VAR_10) + VAR_8 + VAR_9;


 FUNC_4(VAR_6);


 VAR_6->endpoint->isoc_next += VAR_9;


 FUNC_5(VAR_6);
}
