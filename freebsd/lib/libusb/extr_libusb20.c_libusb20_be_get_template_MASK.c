
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libusb20_backend {TYPE_1__* methods; } ;
struct TYPE_2__ {int (* root_get_template ) (struct libusb20_backend*,int*) ;} ;


 int FUNC_0 (struct libusb20_backend*,int*) ;

int
FUNC_1(struct libusb20_backend *VAR_0, int *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  VAR_1 = &VAR_2;

 return (VAR_0->methods->root_get_template(VAR_0, VAR_1));
}
