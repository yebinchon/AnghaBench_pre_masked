
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_hw_ep_profile {int dummy; } ;
struct usb_device {int dummy; } ;


 struct usb_hw_ep_profile* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct usb_device *VAR_1,
    const struct usb_hw_ep_profile **VAR_2, uint8_t VAR_3)
{
 if (VAR_3 == 0)
  *VAR_2 = VAR_0;
 else if (VAR_3 < 3)
  *VAR_2 = VAR_0 + 1;
 else if (VAR_3 < 5)
  *VAR_2 = VAR_0 + 2;
 else if (VAR_3 < 7)
  *VAR_2 = VAR_0 + 3;
 else
  *VAR_2 = ((void*)0);
}
