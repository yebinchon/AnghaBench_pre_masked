
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_xfer {TYPE_3__** td_start; int endpointno; TYPE_2__* xroot; int address; } ;
typedef int ehci_softc_t ;
struct TYPE_6__ {int sitd_portaddr; int page_cache; void* sitd_back; struct TYPE_6__* obj_next; } ;
typedef TYPE_3__ ehci_sitd_t ;
struct TYPE_5__ {TYPE_1__* udev; int bus; } ;
struct TYPE_4__ {int hs_port_no; int hs_hub_addr; } ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_3)
{
 ehci_softc_t *VAR_4 = FUNC_0(VAR_3->xroot->bus);
 ehci_sitd_t *VAR_5;
 uint32_t VAR_6;
 uint8_t VAR_7;

 VAR_6 =
     FUNC_1(VAR_3->address) |
     FUNC_2(FUNC_5(VAR_3->endpointno)) |
     FUNC_3(VAR_3->xroot->udev->hs_hub_addr) |
     FUNC_4(VAR_3->xroot->udev->hs_port_no);

 if (FUNC_6(VAR_3->endpointno) == VAR_2)
  VAR_6 |= VAR_1;

 VAR_6 = FUNC_7(VAR_4, VAR_6);



 for (VAR_7 = 0; VAR_7 != 2; VAR_7++) {

  for (VAR_5 = VAR_3->td_start[VAR_7]; VAR_5; VAR_5 = VAR_5->obj_next) {

   VAR_5->sitd_portaddr = VAR_6;
   VAR_5->sitd_back = FUNC_7(VAR_4, VAR_0);

   FUNC_8(VAR_5->page_cache);
  }
 }
}
