
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_transfer {scalar_t__ buffer; } ;
struct libusb_control_setup {int dummy; } ;



struct libusb_control_setup *
FUNC_0(struct libusb_transfer *VAR_0)
{
 return ((struct libusb_control_setup *)VAR_0->buffer);
}
