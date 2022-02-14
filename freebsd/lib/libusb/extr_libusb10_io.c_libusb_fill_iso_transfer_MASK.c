
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct libusb_transfer {int length; int num_iso_packets; int callback; void* user_data; int * buffer; int timeout; int type; int endpoint; int * dev_handle; } ;
typedef int libusb_transfer_cb_fn ;
typedef int libusb_device_handle ;


 int VAR_0 ;

void
FUNC_0(struct libusb_transfer *VAR_1,
    libusb_device_handle *VAR_2, uint8_t VAR_3, uint8_t *VAR_4,
    int VAR_5, int VAR_6, libusb_transfer_cb_fn VAR_7,
    void *VAR_8, uint32_t VAR_9)
{
 VAR_1->dev_handle = VAR_2;
 VAR_1->endpoint = VAR_3;
 VAR_1->type = VAR_0;
 VAR_1->timeout = VAR_9;
 VAR_1->buffer = VAR_4;
 VAR_1->length = VAR_5;
 VAR_1->num_iso_packets = VAR_6;
 VAR_1->user_data = VAR_8;
 VAR_1->callback = VAR_7;
}
