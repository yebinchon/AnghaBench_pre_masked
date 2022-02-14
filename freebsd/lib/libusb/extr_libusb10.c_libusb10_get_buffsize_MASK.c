
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct libusb20_device {int dummy; } ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ libusb_transfer ;







 int FUNC_0 (struct libusb20_device*) ;

__attribute__((used)) static int
FUNC_1(struct libusb20_device *VAR_0, libusb_transfer *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);

 switch (VAR_1->type) {
 case 128:
  VAR_2 = 0;
  break;
 case 129:
  VAR_2 = 1024;
  break;
 default:
  switch (VAR_3) {
  case 131:
   VAR_2 = 256;
   break;
  case 132:
   VAR_2 = 4096;
   break;
  case 130:
   VAR_2 = 65536;
   break;
  default:
   VAR_2 = 16384;
   break;
  }
  break;
 }
 return (VAR_2);
}
