
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_ctl_request {int ucr_actlen; int ucr_request; int ucr_flags; int ucr_data; } ;
struct libusb20_device {int file_ctrl; } ;
struct LIBUSB20_CONTROL_SETUP_DECODED {int dummy; } ;
typedef int req ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_ctl_request*) ;
 scalar_t__ FUNC_2 (int *,int,struct LIBUSB20_CONTROL_SETUP_DECODED*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct usb_ctl_request*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct libusb20_device *VAR_4,
    struct LIBUSB20_CONTROL_SETUP_DECODED *VAR_5,
    void *VAR_6, uint16_t *VAR_7, uint32_t VAR_8, uint8_t VAR_9)
{
 struct usb_ctl_request VAR_10;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.ucr_data = FUNC_3(VAR_6);
 if (!(VAR_9 & VAR_1)) {
  VAR_10.ucr_flags |= VAR_3;
 }
 if (FUNC_2(&VAR_10.ucr_request,
     sizeof(VAR_10.ucr_request), VAR_5)) {

 }
 if (FUNC_1(VAR_4->file_ctrl, FUNC_0(VAR_2), &VAR_10)) {
  return (VAR_0);
 }
 if (VAR_7) {

  *VAR_7 = VAR_10.ucr_actlen;
 }
 return (0);
}
