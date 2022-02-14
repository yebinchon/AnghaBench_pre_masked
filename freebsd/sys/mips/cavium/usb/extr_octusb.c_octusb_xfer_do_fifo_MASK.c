
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_xfer {void* td_transfer_last; struct octusb_td* td_transfer_cache; } ;
struct octusb_td {scalar_t__ remainder; scalar_t__ alt_next; struct octusb_td* obj_next; scalar_t__ error_any; scalar_t__ (* func ) (struct octusb_td*) ;} ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct usb_xfer*) ;
 scalar_t__ FUNC_2 (struct octusb_td*) ;

__attribute__((used)) static uint8_t
FUNC_3(struct usb_xfer *VAR_0)
{
 struct octusb_td *VAR_1;

 FUNC_0(8, "\n");

 VAR_1 = VAR_0->td_transfer_cache;

 while (1) {
  if ((VAR_1->func) (VAR_1)) {

   break;
  }
  if (((void *)VAR_1) == VAR_0->td_transfer_last) {
   goto done;
  }
  if (VAR_1->error_any) {
   goto done;
  } else if (VAR_1->remainder > 0) {




   if (VAR_1->alt_next == 0)
    goto done;
  }




  VAR_1 = VAR_1->obj_next;
  VAR_0->td_transfer_cache = VAR_1;
 }
 return (1);

done:


 FUNC_1(VAR_0);

 return (0);
}
