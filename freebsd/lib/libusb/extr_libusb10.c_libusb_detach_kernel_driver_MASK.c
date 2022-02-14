
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libusb20_device*,int) ;

int
FUNC_1(struct libusb20_device *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_0(
     VAR_2, VAR_3);

 return (VAR_4 ? VAR_1 : 0);
}
