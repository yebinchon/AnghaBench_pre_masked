
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct libusb20_me_struct {scalar_t__ len; int ptr; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

uint8_t
FUNC_1(const struct libusb20_me_struct *VAR_0, uint16_t VAR_1)
{
 if (VAR_1 < VAR_0->len) {
  return (*((uint8_t *)FUNC_0(VAR_0->ptr, VAR_1)));
 }
 return (0);
}
