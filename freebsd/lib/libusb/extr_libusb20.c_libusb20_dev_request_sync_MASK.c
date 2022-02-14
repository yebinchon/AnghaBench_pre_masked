
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct libusb20_device {TYPE_1__* methods; } ;
struct LIBUSB20_CONTROL_SETUP_DECODED {int dummy; } ;
struct TYPE_2__ {int (* do_request_sync ) (struct libusb20_device*,struct LIBUSB20_CONTROL_SETUP_DECODED*,void*,int *,int ,int ) ;} ;


 int FUNC_0 (struct libusb20_device*,struct LIBUSB20_CONTROL_SETUP_DECODED*,void*,int *,int ,int ) ;

int
FUNC_1(struct libusb20_device *VAR_0,
    struct LIBUSB20_CONTROL_SETUP_DECODED *VAR_1, void *VAR_2,
    uint16_t *VAR_3, uint32_t VAR_4, uint8_t VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_0->methods->do_request_sync(VAR_0,
     VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 return (VAR_6);
}
