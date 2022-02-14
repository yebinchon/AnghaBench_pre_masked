
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int bus; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,void*,void*) ;

void *
FUNC_2(struct usb_device *VAR_0, void *VAR_1, void *VAR_2)
{
 return (FUNC_1(FUNC_0(VAR_0->bus), VAR_1, VAR_2));
}
