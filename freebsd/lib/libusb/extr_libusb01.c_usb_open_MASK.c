
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_dev_handle ;
struct usb_device {int * dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;

usb_dev_handle *
FUNC_2(struct usb_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->dev, 16 * 2);
 if (VAR_3 == VAR_0) {




  return (VAR_2->dev);
 }
 if (VAR_3)
  return (((void*)0));





 FUNC_0(VAR_1, VAR_2->dev);

 return (VAR_2->dev);
}
