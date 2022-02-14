
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int nframes; int endpointno; TYPE_2__* endpoint; scalar_t__ isoc_time_complete; TYPE_1__* xroot; } ;
struct avr32dci_softc {int sc_bus; } ;
struct TYPE_4__ {int isoc_next; int is_synced; } ;
struct TYPE_3__ {int bus; } ;


 struct avr32dci_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct avr32dci_softc*,int ) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_xfer*) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_3)
{
 struct avr32dci_softc *VAR_4 = FUNC_0(VAR_3->xroot->bus);
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint8_t VAR_7;

 FUNC_2(6, "xfer=%p next=%d nframes=%d\n",
     VAR_3, VAR_3->endpoint->isoc_next, VAR_3->nframes);


 VAR_7 = VAR_3->endpointno & VAR_2;
 VAR_6 = (FUNC_1(VAR_4, VAR_0) / 8);

 VAR_6 &= VAR_1;





 VAR_5 = (VAR_6 - VAR_3->endpoint->isoc_next) & VAR_1;

 if ((VAR_3->endpoint->is_synced == 0) ||
     (VAR_5 < VAR_3->nframes)) {






  VAR_3->endpoint->isoc_next = (VAR_6 + 3) & VAR_1;
  VAR_3->endpoint->is_synced = 1;
  FUNC_2(3, "start next=%d\n", VAR_3->endpoint->isoc_next);
 }




 VAR_5 = (VAR_3->endpoint->isoc_next - VAR_6) & VAR_1;




 VAR_3->isoc_time_complete =
     FUNC_4(&VAR_4->sc_bus, VAR_6) + VAR_5 +
     VAR_3->nframes;


 VAR_3->endpoint->isoc_next += VAR_3->nframes;


 FUNC_3(VAR_3);
}
