
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int ugd ;
struct usb_gen_descriptor {void* ugd_iface_index; void* ugd_maxlen; int ugd_data; } ;
struct libusb20_device {int file; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_gen_descriptor*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct usb_gen_descriptor*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct libusb20_device *VAR_2,
    uint8_t VAR_3, char *VAR_4, uint8_t VAR_5)
{
 struct usb_gen_descriptor VAR_6;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.ugd_data = FUNC_2(VAR_4);
 VAR_6.ugd_maxlen = VAR_5;
 VAR_6.ugd_iface_index = VAR_3;

 if (FUNC_1(VAR_2->file, FUNC_0(VAR_1), &VAR_6)) {
  return (VAR_0);
 }
 return (0);
}
