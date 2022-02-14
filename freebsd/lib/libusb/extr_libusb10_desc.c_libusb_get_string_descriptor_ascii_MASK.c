
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int libusb_device_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,unsigned char*,int) ;
 int FUNC_1 (char*) ;

int
FUNC_2(libusb_device_handle *VAR_2,
    uint8_t VAR_3, unsigned char *VAR_4, int VAR_5)
{
 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 < 1)
  return (VAR_0);

 if (VAR_5 > 65535)
  VAR_5 = 65535;


 VAR_4[0] = 0;

 if (FUNC_0(VAR_2, VAR_3,
     VAR_4, VAR_5) == 0)
  return (FUNC_1((char *)VAR_4));

 return (VAR_1);
}
