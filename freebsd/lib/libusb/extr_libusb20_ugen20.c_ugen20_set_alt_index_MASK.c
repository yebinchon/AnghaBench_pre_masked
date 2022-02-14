
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct usb_alt_interface {void* uai_alt_index; void* uai_interface_index; } ;
struct libusb20_device {int file_ctrl; } ;
typedef int alt_iface ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_alt_interface*) ;
 int FUNC_2 (struct usb_alt_interface*,int ,int) ;
 int FUNC_3 (struct libusb20_device*) ;
 int FUNC_4 (struct libusb20_device*) ;

__attribute__((used)) static int
FUNC_5(struct libusb20_device *VAR_2,
    uint8_t VAR_3, uint8_t VAR_4)
{
 struct usb_alt_interface VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.uai_interface_index = VAR_3;
 VAR_5.uai_alt_index = VAR_4;


 FUNC_3(VAR_2);

 if (FUNC_1(VAR_2->file_ctrl, FUNC_0(VAR_1), &VAR_5)) {
  return (VAR_0);
 }
 return (FUNC_4(VAR_2));
}
