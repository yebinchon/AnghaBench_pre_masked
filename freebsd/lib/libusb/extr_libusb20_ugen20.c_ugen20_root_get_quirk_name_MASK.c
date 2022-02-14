
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_gen_quirk {int quirkname; int index; } ;
struct libusb20_quirk {int quirkname; } ;
struct libusb20_backend {int dummy; } ;
typedef int q ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct usb_gen_quirk*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,struct usb_gen_quirk*) ;

__attribute__((used)) static int
FUNC_4(struct libusb20_backend *VAR_4, uint16_t VAR_5,
    struct libusb20_quirk *VAR_6)
{
 struct usb_gen_quirk VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.index = VAR_5;

 VAR_8 = FUNC_3(FUNC_0(VAR_2), &VAR_7);

 if (VAR_8) {
  if (VAR_3 == VAR_0) {
   return (VAR_1);
  }
 } else {
  FUNC_2(VAR_6->quirkname, VAR_7.quirkname, sizeof(VAR_6->quirkname));
 }
 return (VAR_8);
}
