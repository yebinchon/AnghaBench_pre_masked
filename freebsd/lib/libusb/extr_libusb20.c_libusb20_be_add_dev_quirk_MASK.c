
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libusb20_quirk {int dummy; } ;
struct libusb20_backend {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* root_add_dev_quirk ) (struct libusb20_backend*,struct libusb20_quirk*) ;} ;


 int FUNC_0 (struct libusb20_backend*,struct libusb20_quirk*) ;

int
FUNC_1(struct libusb20_backend *VAR_0,
    struct libusb20_quirk *VAR_1)
{
 return (VAR_0->methods->root_add_dev_quirk(VAR_0, VAR_1));
}
