
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctx; int refcnt; } ;
typedef TYPE_1__ libusb_device ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

libusb_device *
FUNC_2(libusb_device *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_0->ctx);
 VAR_0->refcnt++;
 FUNC_1(VAR_0->ctx);

 return (VAR_0);
}
