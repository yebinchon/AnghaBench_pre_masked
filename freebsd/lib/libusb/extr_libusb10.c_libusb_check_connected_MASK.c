
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_device {int dummy; } ;
typedef int libusb_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libusb20_device*) ;
 int * FUNC_1 (struct libusb20_device*) ;

int
FUNC_2(struct libusb20_device *VAR_2)
{
 libusb_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_2);

 return (VAR_4 ? VAR_1 : 0);
}
