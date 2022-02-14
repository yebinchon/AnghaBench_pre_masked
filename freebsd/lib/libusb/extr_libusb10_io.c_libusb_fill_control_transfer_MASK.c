
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct libusb_transfer {int callback; void* user_data; scalar_t__ length; int * buffer; int timeout; int type; scalar_t__ endpoint; int * dev_handle; } ;
struct libusb_control_setup {int wLength; } ;
typedef int libusb_transfer_cb_fn ;
typedef int libusb_device_handle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(struct libusb_transfer *VAR_2,
    libusb_device_handle *VAR_3, uint8_t *VAR_4,
    libusb_transfer_cb_fn VAR_5, void *VAR_6,
    uint32_t VAR_7)
{
 struct libusb_control_setup *VAR_8 = (struct libusb_control_setup *)VAR_4;

 VAR_2->dev_handle = VAR_3;
 VAR_2->endpoint = 0;
 VAR_2->type = VAR_1;
 VAR_2->timeout = VAR_7;
 VAR_2->buffer = VAR_4;
 if (VAR_8 != ((void*)0))
  VAR_2->length = VAR_0
   + FUNC_0(VAR_8->wLength);
 else
  VAR_2->length = 0;
 VAR_2->user_data = VAR_6;
 VAR_2->callback = VAR_5;

}
