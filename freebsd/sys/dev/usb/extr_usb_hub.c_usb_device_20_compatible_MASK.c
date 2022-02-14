
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device {int speed; } ;






__attribute__((used)) static uint8_t
FUNC_0(struct usb_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (0);
 switch (VAR_0->speed) {
 case 128:
 case 130:
 case 129:
  return (1);
 default:
  return (0);
 }
}
