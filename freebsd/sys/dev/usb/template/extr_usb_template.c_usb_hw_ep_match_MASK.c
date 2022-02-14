
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_hw_ep_profile {scalar_t__ support_control; scalar_t__ support_bulk; scalar_t__ support_isochronous; scalar_t__ support_interrupt; scalar_t__ support_out; scalar_t__ support_in; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static uint8_t
FUNC_0(const struct usb_hw_ep_profile *VAR_4,
    uint8_t VAR_5, uint8_t VAR_6)
{
 if (VAR_5 == VAR_1) {

  return (VAR_4->support_control);
 }
 if ((VAR_4->support_in && VAR_6) ||
     (VAR_4->support_out && !VAR_6)) {
  if ((VAR_4->support_interrupt && (VAR_5 == VAR_2)) ||
      (VAR_4->support_isochronous && (VAR_5 == VAR_3)) ||
      (VAR_4->support_bulk && (VAR_5 == VAR_0))) {
   return (1);
  }
 }
 return (0);
}
