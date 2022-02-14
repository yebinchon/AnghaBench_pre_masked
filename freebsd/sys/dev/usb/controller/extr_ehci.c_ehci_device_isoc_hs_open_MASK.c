
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int max_packet_size; int max_packet_count; int endpointno; int address; TYPE_2__** td_start; TYPE_1__* xroot; } ;
typedef int ehci_softc_t ;
struct TYPE_4__ {int page_cache; void** itd_bp; scalar_t__* itd_status; struct TYPE_4__* obj_next; } ;
typedef TYPE_2__ ehci_itd_t ;
struct TYPE_3__ {int bus; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_2)
{
 ehci_softc_t *VAR_3 = FUNC_0(VAR_2->xroot->bus);
 ehci_itd_t *VAR_4;
 uint32_t VAR_5;
 uint8_t VAR_6;

 FUNC_7(VAR_2);



 for (VAR_6 = 0; VAR_6 != 2; VAR_6++) {

  for (VAR_4 = VAR_2->td_start[VAR_6]; VAR_4; VAR_4 = VAR_4->obj_next) {


   VAR_4->itd_status[0] = 0;
   VAR_4->itd_status[1] = 0;
   VAR_4->itd_status[2] = 0;
   VAR_4->itd_status[3] = 0;
   VAR_4->itd_status[4] = 0;
   VAR_4->itd_status[5] = 0;
   VAR_4->itd_status[6] = 0;
   VAR_4->itd_status[7] = 0;


   VAR_4->itd_bp[0] = FUNC_6(VAR_3,
       FUNC_1(VAR_2->address) |
       FUNC_2(FUNC_4(VAR_2->endpointno)));

   VAR_5 =
       FUNC_3(VAR_2->max_packet_size & 0x7FF);


   if (FUNC_5(VAR_2->endpointno) == VAR_1) {
    VAR_5 |= VAR_0;
   }

   VAR_4->itd_bp[1] = FUNC_6(VAR_3, VAR_5);


   VAR_4->itd_bp[2] = FUNC_6(VAR_3, VAR_2->max_packet_count & 3);

   FUNC_8(VAR_4->page_cache);
  }
 }
}
