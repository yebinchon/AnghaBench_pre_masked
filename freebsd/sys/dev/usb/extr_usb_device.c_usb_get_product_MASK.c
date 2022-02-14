
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {char const* product; } ;



const char *
FUNC_0(struct usb_device *VAR_0)
{
 return (VAR_0->product ? VAR_0->product : "");
}
