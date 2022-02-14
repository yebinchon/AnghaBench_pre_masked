
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_complete_t ;
struct usb_host_endpoint {int dummy; } ;
struct usb_device {int dummy; } ;
struct urb {int transfer_buffer_length; void* context; int complete; void* transfer_buffer; struct usb_host_endpoint* endpoint; struct usb_device* dev; } ;



void
FUNC_0(struct urb *VAR_0, struct usb_device *VAR_1,
    struct usb_host_endpoint *VAR_2, void *VAR_3,
    int VAR_4, usb_complete_t VAR_5, void *VAR_6)
{
 VAR_0->dev = VAR_1;
 VAR_0->endpoint = VAR_2;
 VAR_0->transfer_buffer = VAR_3;
 VAR_0->transfer_buffer_length = VAR_4;
 VAR_0->complete = VAR_5;
 VAR_0->context = VAR_6;
}
