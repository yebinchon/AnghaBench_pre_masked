
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_frlength_t ;
struct usb_xfer {int max_data_length; } ;



usb_frlength_t
FUNC_0(struct usb_xfer *VAR_0)
{
 return (VAR_0->max_data_length);
}
