
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; int bIfaceIndex; } ;
struct usb_attach_arg {scalar_t__ usb_mode; TYPE_1__ info; int device; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ FUNC_3 (void*,int ) ;
 scalar_t__ FUNC_4 (struct usb_attach_arg*,int ) ;
 int FUNC_5 (int ,int *,void**,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_8)
{
 struct usb_attach_arg *VAR_9 = FUNC_1(VAR_8);
 void *VAR_10;
 int VAR_11;
 uint16_t VAR_12;

 FUNC_0(11, "\n");

 if (VAR_9->usb_mode != VAR_7)
  return (VAR_1);

 if (VAR_9->info.bInterfaceClass != VAR_3)
  return (VAR_1);

 if (FUNC_4(VAR_9, VAR_6))
  return (VAR_1);

 if ((VAR_9->info.bInterfaceSubClass == VAR_5) &&
     (VAR_9->info.bInterfaceProtocol == VAR_4))
  return (VAR_0);

 VAR_11 = FUNC_5(VAR_9->device, ((void*)0),
     &VAR_10, &VAR_12, VAR_2, VAR_9->info.bIfaceIndex);

 if (VAR_11)
  return (VAR_1);

 if (FUNC_3(VAR_10, VAR_12))
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_1;

 FUNC_2(VAR_10, VAR_2);
 return (VAR_11);
}
