
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct usb_xfer {int dummy; } ;
struct bbb_transfer {int * xfer; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct bbb_transfer*,int ) ;
 int FUNC_2 (struct bbb_transfer*,size_t) ;
 scalar_t__ FUNC_3 (struct usb_xfer*,int ) ;
 struct bbb_transfer* FUNC_4 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_5(struct usb_xfer *VAR_1,
    uint8_t VAR_2, uint8_t VAR_3)
{
 struct bbb_transfer *VAR_4 = FUNC_4(VAR_1);

 if (FUNC_3(VAR_1, VAR_4->xfer[VAR_3])) {
  switch (FUNC_0(VAR_1)) {
  case 129:
  case 128:
   FUNC_2(VAR_4, VAR_2);
   break;
  default:
   FUNC_1(VAR_4, VAR_0);
   break;
  }
 }
}
