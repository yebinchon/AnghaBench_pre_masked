
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_device {scalar_t__ privLuData; } ;
typedef int libusb_device ;



libusb_device *
FUNC_0(struct libusb20_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (((void*)0));
 return ((libusb_device *)VAR_0->privLuData);
}
