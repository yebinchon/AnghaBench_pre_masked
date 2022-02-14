
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {scalar_t__ re_enumerate_wait; int bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(struct usb_device *VAR_2)
{
 if (VAR_2->re_enumerate_wait == VAR_0) {
  VAR_2->re_enumerate_wait = VAR_1;
  FUNC_0(VAR_2->bus, 0);
 }
}
