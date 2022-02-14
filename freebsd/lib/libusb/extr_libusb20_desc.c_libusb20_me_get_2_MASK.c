
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct libusb20_me_struct {int dummy; } ;


 int FUNC_0 (struct libusb20_me_struct const*,int) ;

uint16_t
FUNC_1(const struct libusb20_me_struct *VAR_0, uint16_t VAR_1)
{
 return (FUNC_0(VAR_0, VAR_1) |
     (FUNC_0(VAR_0, VAR_1 + 1) << 8));
}
