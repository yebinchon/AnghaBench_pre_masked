
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct libusb20_device {int dummy; } ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ libusb_transfer ;


 int VAR_0 ;



__attribute__((used)) static uint32_t
FUNC_0(struct libusb20_device *VAR_1, libusb_transfer *VAR_2)
{
 uint32_t VAR_3;

 switch (VAR_2->type) {
 case 128:
  VAR_3 = 60 | VAR_0;
  break;
 case 129:
  VAR_3 = 2;
  break;
 default:
  VAR_3 = 1;
  break;
 }
 return (VAR_3);
}
