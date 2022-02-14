
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int * libusb_hotplug_callback_handle ;
struct TYPE_7__ {int hotplug_cbh; } ;
typedef TYPE_1__ libusb_context ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

void FUNC_5(libusb_context *VAR_1,
    libusb_hotplug_callback_handle VAR_2)
{
   VAR_1 = FUNC_0(VAR_1);

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return;

 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->hotplug_cbh, VAR_2, VAR_0);
 FUNC_2(VAR_1);

 FUNC_4(VAR_2);
}
