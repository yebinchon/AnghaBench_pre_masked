
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_device*,int ,char*,int,int*,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_3,
  char *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, FUNC_1(VAR_3, VAR_1), VAR_4, VAR_5,
   &VAR_6, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;
 else if (VAR_6 != VAR_5)
  return -VAR_0;
 return 0;
}
