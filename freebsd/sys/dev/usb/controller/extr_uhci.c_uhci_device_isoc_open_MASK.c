
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_2__ {int page_cache; void* td_token; void* td_status; struct TYPE_2__* obj_next; } ;
typedef TYPE_1__ uhci_td_t ;
struct usb_xfer {TYPE_1__** td_start; int address; int endpointno; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ,int ,int ) ;
 void* VAR_1 ;
 void* FUNC_2 (int ,int ,int ,int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_2)
{
 uhci_td_t *VAR_3;
 uint32_t VAR_4;
 uint8_t VAR_5;

 VAR_4 =
     (FUNC_0(VAR_2->endpointno) == VAR_0) ?
     FUNC_1(0, VAR_2->endpointno, VAR_2->address, 0) :
     FUNC_2(0, VAR_2->endpointno, VAR_2->address, 0);

 VAR_4 = FUNC_3(VAR_4);



 for (VAR_5 = 0; VAR_5 != 2; VAR_5++) {

  for (VAR_3 = VAR_2->td_start[VAR_5]; VAR_3; VAR_3 = VAR_3->obj_next) {


   VAR_3->td_status = FUNC_3(VAR_1);
   VAR_3->td_token = VAR_4;

   FUNC_4(VAR_3->page_cache);
  }
 }
}
