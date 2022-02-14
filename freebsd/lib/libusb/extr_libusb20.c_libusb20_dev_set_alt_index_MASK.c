
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb20_device {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* set_alt_index ) (struct libusb20_device*,int ,int ) ;} ;


 int FUNC_0 (struct libusb20_device*,int ,int ) ;

int
FUNC_1(struct libusb20_device *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_0->methods->set_alt_index(VAR_0, VAR_1, VAR_2);
 return (VAR_3);
}
