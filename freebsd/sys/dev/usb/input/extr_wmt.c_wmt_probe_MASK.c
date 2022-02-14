
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ bInterfaceClass; int bIfaceIndex; } ;
struct usb_attach_arg {scalar_t__ usb_mode; TYPE_1__ info; int device; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 (struct usb_attach_arg*,int ) ;
 int FUNC_3 (int ,int *,void**,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,void*,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct usb_attach_arg *VAR_7 = FUNC_0(VAR_6);
 void *VAR_8;
 uint16_t VAR_9;
 int VAR_10;

 if (VAR_7->usb_mode != VAR_5)
  return (VAR_1);

 if (VAR_7->info.bInterfaceClass != VAR_3)
  return (VAR_1);

 if (FUNC_2(VAR_7, VAR_4))
  return (VAR_1);

 VAR_10 = FUNC_3(VAR_7->device, ((void*)0),
     &VAR_8, &VAR_9, VAR_2, VAR_7->info.bIfaceIndex);
 if (VAR_10)
  return (VAR_1);

 if (FUNC_4(((void*)0), VAR_8, VAR_9))
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_1;

 FUNC_1(VAR_8, VAR_2);
 return (VAR_10);
}
