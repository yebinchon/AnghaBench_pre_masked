
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libusb20_device {TYPE_1__* beMethods; } ;
struct TYPE_2__ {char const* (* get_backend_name ) () ;} ;


 char const* FUNC_0 () ;

const char *
FUNC_1(struct libusb20_device *VAR_0)
{
 return (VAR_0->beMethods->get_backend_name());
}
