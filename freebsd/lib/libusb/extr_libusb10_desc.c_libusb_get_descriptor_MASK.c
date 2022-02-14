
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int libusb_device_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int,int ,int*,int,int) ;

int
FUNC_1(libusb_device_handle * VAR_3, uint8_t VAR_4,
    uint8_t VAR_5, uint8_t *VAR_6, int VAR_7)
{
 if (VAR_3 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 < 1)
  return (VAR_1);

 if (VAR_7 > 65535)
  VAR_7 = 65535;

 return (FUNC_0(VAR_3, VAR_0,
     VAR_2, (VAR_4 << 8) | VAR_5, 0, VAR_6,
     VAR_7, 1000));
}
