
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_xfer {void* priv_fifo; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_xfer*) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_6(struct usb_xfer *VAR_1,
    struct urb *VAR_2, uint8_t VAR_3)
{
 if (VAR_1 == ((void*)0))
  return;
 if (!FUNC_3(VAR_1))
  return;
 if (VAR_1->priv_fifo == (void *)VAR_2) {
  if (VAR_3) {
   FUNC_1(&VAR_0);
   FUNC_2(VAR_1);
   FUNC_0(&VAR_0);
  } else {
   FUNC_5(VAR_1);
  }
  FUNC_4(VAR_1);
 }
}
