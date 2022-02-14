
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libusb20_device*,int,char*,int) ;
 char* FUNC_1 (char*,char*) ;

int
FUNC_2(struct libusb20_device *VAR_2, int VAR_3,
    char *VAR_4, int VAR_5)
{
 char *VAR_6;
 int VAR_7;

 if (VAR_2 == ((void*)0))
  return (VAR_0);
 if (VAR_5 < 1)
  return (VAR_0);
 if (VAR_5 > 255)
  VAR_5 = 255;

 VAR_7 = FUNC_0(
     VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_7 != 0)
  return (VAR_1);


 VAR_6 = FUNC_1(VAR_4, ":");
 if (VAR_6 != ((void*)0))
  *VAR_6 = 0;

 return (0);
}
