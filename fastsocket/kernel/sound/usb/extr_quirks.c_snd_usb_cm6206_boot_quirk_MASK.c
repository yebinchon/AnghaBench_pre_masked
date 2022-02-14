
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct usb_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_0)
{
 int VAR_1 = 0, VAR_2;
 int VAR_3[] = {0x2004, 0x3000, 0xf800, 0x143f, 0x0000, 0x3000};

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3); VAR_2++) {
  VAR_1 = FUNC_1(VAR_0, VAR_2, VAR_3[VAR_2]);
  if (VAR_1 < 0)
   return VAR_1;
 }

 return VAR_1;
}
