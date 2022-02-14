
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
struct libusb20_device {int dummy; } ;


 int FUNC_0 (struct libusb20_device*,int,char*,int) ;
 char* FUNC_1 (char*,char*) ;

int
FUNC_2(usb_dev_handle * VAR_0, int VAR_1, char *VAR_2, int VAR_3)
{
 struct libusb20_device *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = (void *)VAR_0;

 if (VAR_4 == ((void*)0))
  return (-1);
 if (VAR_3 < 1)
  return (-1);
 if (VAR_3 > 255)
  VAR_3 = 255;

 VAR_6 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_6 != 0)
  return (-1);


 VAR_5 = FUNC_1(VAR_2, ":");
 if (VAR_5 != ((void*)0))
  *VAR_5 = 0;

 return (0);
}
