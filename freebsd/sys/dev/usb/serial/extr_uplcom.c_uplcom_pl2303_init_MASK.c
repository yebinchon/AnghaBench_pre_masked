
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct usb_device *VAR_5, uint8_t VAR_6)
{
 int VAR_7;

 if (FUNC_0(VAR_5, VAR_3, VAR_2, 0x8484, 0, 1)
     || FUNC_0(VAR_5, VAR_4, VAR_2, 0x0404, 0, 0)
     || FUNC_0(VAR_5, VAR_3, VAR_2, 0x8484, 0, 1)
     || FUNC_0(VAR_5, VAR_3, VAR_2, 0x8383, 0, 1)
     || FUNC_0(VAR_5, VAR_3, VAR_2, 0x8484, 0, 1)
     || FUNC_0(VAR_5, VAR_4, VAR_2, 0x0404, 1, 0)
     || FUNC_0(VAR_5, VAR_3, VAR_2, 0x8484, 0, 1)
     || FUNC_0(VAR_5, VAR_3, VAR_2, 0x8383, 0, 1)
     || FUNC_0(VAR_5, VAR_4, VAR_2, 0, 1, 0)
     || FUNC_0(VAR_5, VAR_4, VAR_2, 1, 0, 0))
  return (VAR_0);

 if (VAR_6 != VAR_1)
  VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_2, 2, 0x44, 0);
 else
  VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_2, 2, 0x24, 0);
 if (VAR_7)
  return (VAR_0);

 return (0);
}
