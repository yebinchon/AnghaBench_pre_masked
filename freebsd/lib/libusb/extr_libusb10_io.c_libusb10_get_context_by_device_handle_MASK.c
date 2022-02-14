
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int libusb_device_handle ;
typedef int libusb_context ;
struct TYPE_2__ {int * ctx; } ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static libusb_context *
FUNC_2(libusb_device_handle *VAR_0)
{
 libusb_context *VAR_1;

 if (VAR_0 != ((void*)0))
  VAR_1 = FUNC_1(VAR_0)->ctx;
 else
  VAR_1 = ((void*)0);

 return (FUNC_0(VAR_1));
}
