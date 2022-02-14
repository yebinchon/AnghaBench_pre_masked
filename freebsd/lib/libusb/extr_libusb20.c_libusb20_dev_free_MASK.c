
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_device {scalar_t__ is_opened; } ;


 int FUNC_0 (struct libusb20_device*) ;
 scalar_t__ FUNC_1 (struct libusb20_device*) ;

void
FUNC_2(struct libusb20_device *VAR_0)
{
 if (VAR_0 == ((void*)0)) {

  return;
 }
 if (VAR_0->is_opened) {
  if (FUNC_1(VAR_0)) {

  }
 }
 FUNC_0(VAR_0);
 return;
}
