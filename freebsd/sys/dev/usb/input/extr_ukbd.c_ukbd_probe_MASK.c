
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; scalar_t__ bInterfaceProtocol; int bIfaceIndex; } ;
struct usb_attach_arg {scalar_t__ usb_mode; TYPE_1__ info; int device; } ;
typedef int keyboard_switch_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 int FUNC_3 (void*,int ) ;
 scalar_t__ FUNC_4 (void*,int ) ;
 scalar_t__ FUNC_5 (void*,int ) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct usb_attach_arg*,int ) ;
 int FUNC_8 (int ,int *,void**,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9)
{
 keyboard_switch_t *VAR_10 = FUNC_6(VAR_6);
 struct usb_attach_arg *VAR_11 = FUNC_2(VAR_9);
 void *VAR_12;
 int VAR_13;
 uint16_t VAR_14;

 FUNC_1();
 FUNC_0(11, "\n");

 if (VAR_10 == ((void*)0)) {
  return (VAR_1);
 }
 if (VAR_11->usb_mode != VAR_8) {
  return (VAR_1);
 }

 if (VAR_11->info.bInterfaceClass != VAR_3)
  return (VAR_1);

 if (FUNC_7(VAR_11, VAR_7))
  return (VAR_1);

 if ((VAR_11->info.bInterfaceSubClass == VAR_5) &&
     (VAR_11->info.bInterfaceProtocol == VAR_4))
  return (VAR_0);

 VAR_13 = FUNC_8(VAR_11->device, ((void*)0),
     &VAR_12, &VAR_14, VAR_2, VAR_11->info.bIfaceIndex);

 if (VAR_13)
  return (VAR_1);

 if (FUNC_4(VAR_12, VAR_14)) {
  if (FUNC_5(VAR_12, VAR_14)) {





   VAR_13 = VAR_1;
  } else {
   VAR_13 = VAR_0;
  }
 } else {
  VAR_13 = VAR_1;
 }
 FUNC_3(VAR_12, VAR_2);
 return (VAR_13);
}
