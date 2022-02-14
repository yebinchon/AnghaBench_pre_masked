
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct usb_xfer {int nframes; TYPE_2__* endpoint; scalar_t__ isoc_time_complete; TYPE_1__* xroot; } ;
struct saf1761_otg_softc {int sc_bus; } ;
struct TYPE_4__ {int isoc_next; int is_synced; } ;
struct TYPE_3__ {int bus; } ;


 int FUNC_0 (int,char*,...) ;
 struct saf1761_otg_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct saf1761_otg_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct usb_xfer*) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_2)
{
 struct saf1761_otg_softc *VAR_3 = FUNC_1(VAR_2->xroot->bus);
 uint32_t VAR_4;
 uint32_t VAR_5;

 FUNC_0(6, "xfer=%p next=%d nframes=%d\n",
     VAR_2, VAR_2->endpoint->isoc_next, VAR_2->nframes);



 VAR_5 = FUNC_2(VAR_3, VAR_0);





 VAR_4 = (VAR_5 - VAR_2->endpoint->isoc_next) & VAR_1;

 if ((VAR_2->endpoint->is_synced == 0) ||
     (VAR_4 < VAR_2->nframes)) {






  VAR_2->endpoint->isoc_next = (VAR_5 + 3) & VAR_1;
  VAR_2->endpoint->is_synced = 1;
  FUNC_0(3, "start next=%d\n", VAR_2->endpoint->isoc_next);
 }




 VAR_4 = (VAR_2->endpoint->isoc_next - VAR_5) & VAR_1;




 VAR_2->isoc_time_complete =
     FUNC_4(&VAR_3->sc_bus, VAR_5) + VAR_4 +
     VAR_2->nframes;


 VAR_2->endpoint->isoc_next += VAR_2->nframes;


 FUNC_3(VAR_2);
}
