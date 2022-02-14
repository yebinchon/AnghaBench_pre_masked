
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int bNumConfigurations; } ;
struct libusb20_device {TYPE_1__* methods; int is_opened; TYPE_2__ ddesc; } ;
struct libusb20_config {int dummy; } ;
struct TYPE_3__ {int (* get_config_desc_full ) (struct libusb20_device*,int**,int *,int) ;} ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct libusb20_device*) ;
 int FUNC_2 (struct libusb20_device*,int ) ;
 struct libusb20_config* FUNC_3 (int*) ;
 int FUNC_4 (struct libusb20_device*,int**,int *,int) ;

struct libusb20_config *
FUNC_5(struct libusb20_device *VAR_0, uint8_t VAR_1)
{
 struct libusb20_config *VAR_2 = ((void*)0);
 uint8_t *VAR_3;
 uint16_t VAR_4;
 uint8_t VAR_5;
 int VAR_6;






 if (VAR_1 >= VAR_0->ddesc.bNumConfigurations)
  return (((void*)0));

 if (!VAR_0->is_opened) {
  VAR_6 = FUNC_2(VAR_0, 0);
  if (VAR_6) {
   return (((void*)0));
  }
  VAR_5 = 1;
 } else {
  VAR_5 = 0;
 }
 VAR_6 = VAR_0->methods->get_config_desc_full(VAR_0,
     &VAR_3, &VAR_4, VAR_1);

 if (VAR_6) {
  goto done;
 }

 VAR_2 = FUNC_3(VAR_3);


 FUNC_0(VAR_3);

done:
 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_0);
 }
 return (VAR_2);
}
