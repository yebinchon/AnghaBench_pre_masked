
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum usb_dev_speed { ____Placeholder_usb_dev_speed } usb_dev_speed ;
typedef int cvmx_usb_speed_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static cvmx_usb_speed_t
FUNC_0(enum usb_dev_speed VAR_3)
{
 ;
 switch (VAR_3) {
 case 128:
  return (VAR_1);
 case 129:
  return (VAR_0);
 default:
  return (VAR_2);
 }
}
