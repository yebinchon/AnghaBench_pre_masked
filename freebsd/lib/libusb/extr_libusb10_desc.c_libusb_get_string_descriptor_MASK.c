
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int libusb_device_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int,int ,unsigned char*,int,int) ;

int
FUNC_1(libusb_device_handle *VAR_4,
    uint8_t VAR_5, uint16_t VAR_6, unsigned char *VAR_7,
    int VAR_8)
{
 if (VAR_4 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 < 1)
  return (VAR_2);

 if (VAR_8 > 65535)
  VAR_8 = 65535;


 VAR_7[0] = 0;

 return (FUNC_0(VAR_4, VAR_1,
     VAR_3, (VAR_0 << 8) | VAR_5,
     VAR_6, VAR_7, VAR_8, 1000));
}
