
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb20_device {TYPE_1__* methods; int is_opened; } ;
struct TYPE_2__ {int (* get_config_index ) (struct libusb20_device*,int*) ;} ;


 scalar_t__ FUNC_0 (struct libusb20_device*) ;
 int FUNC_1 (struct libusb20_device*,int ) ;
 int FUNC_2 (struct libusb20_device*,int*) ;

uint8_t
FUNC_3(struct libusb20_device *VAR_0)
{
 int VAR_1;
 uint8_t VAR_2;
 uint8_t VAR_3;

 if (!VAR_0->is_opened) {
  VAR_1 = FUNC_1(VAR_0, 0);
  if (VAR_1 == 0) {
   VAR_3 = 1;
  } else {
   VAR_3 = 0;
  }
 } else {
  VAR_3 = 0;
 }

 VAR_1 = VAR_0->methods->get_config_index(VAR_0, &VAR_2);
 if (VAR_1)
  VAR_2 = 0xFF;
 if (VAR_3) {
  if (FUNC_0(VAR_0)) {

  }
 }
 return (VAR_2);
}
