
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct usb_device {int dummy; } ;
struct bbb_transfer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bbb_transfer* FUNC_0 (struct usb_device*,int,int ) ;
 int FUNC_1 (struct bbb_transfer*,int ,int ,void*,int,int*,int,int ) ;
 int FUNC_2 (struct bbb_transfer*) ;

usb_error_t
FUNC_3(struct usb_device *VAR_5, uint8_t VAR_6,
    uint32_t VAR_7, uint32_t VAR_8, void *VAR_9)
{
 struct bbb_transfer *VAR_10;
 uint8_t VAR_11[10];
 usb_error_t VAR_12;

 VAR_11[0] = 0x2a;
 VAR_11[1] = 0;
 VAR_11[2] = VAR_7 >> 24;
 VAR_11[3] = VAR_7 >> 16;
 VAR_11[4] = VAR_7 >> 8;
 VAR_11[5] = VAR_7 >> 0;
 VAR_11[6] = 0;
 VAR_11[7] = VAR_8 >> 8;
 VAR_11[8] = VAR_8;
 VAR_11[9] = 0;

 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_2);
 if (VAR_10 == ((void*)0))
  return (VAR_3);

 VAR_12 = FUNC_1(VAR_10, VAR_0, 0, VAR_9,
     VAR_8 * VAR_1, VAR_11, 10, VAR_4);

 FUNC_2(VAR_10);

 return (VAR_12);
}
