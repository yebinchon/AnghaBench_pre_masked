
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb_config_descriptor {int dummy; } ;
struct libusb20_device {int dummy; } ;
struct TYPE_4__ {struct libusb20_device* os_priv; } ;
typedef TYPE_1__ libusb_device ;


 int FUNC_0 (struct libusb20_device*) ;
 int FUNC_1 (TYPE_1__*,int ,struct libusb_config_descriptor**) ;

int
FUNC_2(libusb_device *VAR_0,
    struct libusb_config_descriptor **VAR_1)
{
 struct libusb20_device *VAR_2;
 uint8_t VAR_3;

 VAR_2 = VAR_0->os_priv;
 VAR_3 = FUNC_0(VAR_2);

 return (FUNC_1(VAR_0, VAR_3, VAR_1));
}
