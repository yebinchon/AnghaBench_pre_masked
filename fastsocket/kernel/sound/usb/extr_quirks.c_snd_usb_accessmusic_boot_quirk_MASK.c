
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int const*,int ,int ) ;
 int FUNC_3 (struct usb_device*,int ,void*,int ,int*,int) ;
 int FUNC_4 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_2)
{
 int VAR_3, VAR_4;


 static const u8 VAR_5[] = { 0x4e, 0x73, 0x52, 0x01 };

 void *VAR_6 = FUNC_2(VAR_5, FUNC_0(VAR_5), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_3 = FUNC_3(VAR_2, FUNC_4(VAR_2, 0x05), VAR_6,
   FUNC_0(VAR_5), &VAR_4, 1000);
 FUNC_1(VAR_6);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
