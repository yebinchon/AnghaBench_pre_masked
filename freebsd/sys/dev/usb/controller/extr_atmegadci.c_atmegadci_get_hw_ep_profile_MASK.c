
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_hw_ep_profile {int dummy; } ;
struct usb_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct usb_hw_ep_profile* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct usb_device *VAR_2,
    const struct usb_hw_ep_profile **VAR_3, uint8_t VAR_4)
{
 if (VAR_4 == 0)
  *VAR_3 = VAR_1;
 else if (VAR_4 < VAR_0)
  *VAR_3 = VAR_1 + 1;
 else
  *VAR_3 = ((void*)0);
}
