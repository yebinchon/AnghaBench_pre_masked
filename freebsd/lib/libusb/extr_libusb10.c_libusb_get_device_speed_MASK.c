
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int os_priv; } ;
typedef TYPE_1__ libusb_device ;
typedef enum libusb_speed { ____Placeholder_libusb_speed } libusb_speed ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

enum libusb_speed
FUNC_1(libusb_device *VAR_5)
{
 if (VAR_5 == ((void*)0))
  return (VAR_4);

 switch (FUNC_0(VAR_5->os_priv)) {
 case 129:
  return (VAR_2);
 case 131:
  return (VAR_0);
 case 130:
  return (VAR_1);
 case 128:
  return (VAR_3);
 default:
  break;
 }
 return (VAR_4);
}
