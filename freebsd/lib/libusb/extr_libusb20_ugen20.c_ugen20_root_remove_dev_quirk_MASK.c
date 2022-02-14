
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gen_quirk {int quirkname; int bcdDeviceHigh; int bcdDeviceLow; int pid; int vid; } ;
struct libusb20_quirk {int quirkname; int bcdDeviceHigh; int bcdDeviceLow; int pid; int vid; } ;
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
FUNC_4(struct libusb20_backend *VAR_4,
    struct libusb20_quirk *VAR_5)
{
 struct usb_gen_quirk VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.vid = VAR_5->vid;
 VAR_6.pid = VAR_5->pid;
 VAR_6.bcdDeviceLow = VAR_5->bcdDeviceLow;
 VAR_6.bcdDeviceHigh = VAR_5->bcdDeviceHigh;
 FUNC_2(VAR_6.quirkname, VAR_5->quirkname, sizeof(VAR_6.quirkname));

 VAR_7 = FUNC_3(FUNC_0(VAR_2), &VAR_6);
 if (VAR_7) {
  if (VAR_3 == VAR_0) {
   return (VAR_1);
  }
 }
 return (VAR_7);
}
