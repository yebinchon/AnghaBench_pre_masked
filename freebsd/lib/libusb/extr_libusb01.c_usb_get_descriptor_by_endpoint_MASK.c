
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int *,int,int ,int,int ,void*,int,int) ;

int
FUNC_2(usb_dev_handle * VAR_2, int VAR_3, uint8_t VAR_4,
    uint8_t VAR_5, void *VAR_6, int VAR_7)
{
 FUNC_0(VAR_6, 0, VAR_7);

 if (VAR_2 == ((void*)0))
  return (-1);

 if (VAR_7 > 65535)
  VAR_7 = 65535;

 return (FUNC_1(VAR_2, VAR_3 | VAR_0,
     VAR_1, (VAR_4 << 8) + VAR_5, 0,
     VAR_6, VAR_7, 1000));
}
