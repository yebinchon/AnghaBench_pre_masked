
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_device {scalar_t__ re_enumerate_wait; scalar_t__ curr_config_index; scalar_t__ next_config_index; int bus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;

usb_error_t
FUNC_1(struct usb_device *VAR_3, uint8_t VAR_4)
{
 if (VAR_3->re_enumerate_wait == VAR_1) {
  if (VAR_3->curr_config_index == VAR_4) {

   return (0);
  }
  VAR_3->next_config_index = VAR_4;
  VAR_3->re_enumerate_wait = VAR_2;
  FUNC_0(VAR_3->bus, 0);
  return (0);
 } else if (VAR_3->re_enumerate_wait == VAR_2) {
  if (VAR_3->next_config_index == VAR_4) {

   return (0);
  }
 }
 return (VAR_0);
}
