
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct usb_config_descriptor {int bNumInterface; } ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct usb_config_descriptor* FUNC_1 (struct usb_device*) ;

__attribute__((used)) static int
FUNC_2(struct usb_device *VAR_9, int VAR_10)
{
 struct usb_config_descriptor *VAR_11;

 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11->bNumInterface <= 3) {

  switch (VAR_10) {
  case 0:
   return FUNC_0(VAR_2 | VAR_1,
       VAR_4 | VAR_3,
       VAR_8);
  case 1:
   return FUNC_0(VAR_0,
       VAR_4, VAR_5);
  case 2:
   return FUNC_0(VAR_0,
       VAR_4, VAR_7);
  }
 } else {

  switch (VAR_10) {
  case 0:
   return FUNC_0(VAR_2 | VAR_1,
       VAR_4 | VAR_3,
       VAR_8);
  case 1:
   return FUNC_0(VAR_0,
       VAR_4, VAR_6);
  case 2:
   return FUNC_0(VAR_0,
       VAR_4, VAR_7);
  case 3:
   return FUNC_0(VAR_0,
       VAR_4, VAR_5);
  }
 }
 return (0);
}
