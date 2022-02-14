
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {int re_enumerate_wait; int next_config_index; int port_no; int * parent_hub; TYPE_1__ flags; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;



 int VAR_4 ;
 int FUNC_2 (struct usb_device*,int ) ;
 scalar_t__ FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (struct usb_device*,int *) ;
 int FUNC_8 (struct usb_device*,int ) ;

void
FUNC_9(struct usb_device *VAR_5)
{
 uint8_t VAR_6;
 usb_error_t VAR_7;


 if (VAR_5->flags.usb_mode != VAR_2)
  return;

 VAR_6 = FUNC_3(VAR_5);
 switch (VAR_5->re_enumerate_wait) {
 case 128:
  VAR_7 = FUNC_8(VAR_5,
      VAR_4);
  if (VAR_7 != 0) {
   FUNC_0("Unconfigure failed: %s: Ignored.\n",
       FUNC_5(VAR_7));
  }
  if (VAR_5->parent_hub == ((void*)0)) {

   FUNC_1(6, "cannot reset root HUB\n");
   VAR_7 = 0;
  } else {
   VAR_7 = FUNC_7(VAR_5, ((void*)0));
  }
  if (VAR_7 == 0)
   VAR_7 = FUNC_8(VAR_5, 0);
  if (VAR_7 == 0) {
   VAR_7 = FUNC_2(VAR_5,
       VAR_1);
  }
  VAR_5->re_enumerate_wait = VAR_3;
  break;

 case 130:

  VAR_7 = FUNC_8(VAR_5,
      VAR_4);
  if (VAR_7) {
   FUNC_1(0, "Could not unconfigure "
       "device (ignored)\n");
  }
  if (VAR_5->parent_hub == ((void*)0)) {

   FUNC_1(6, "cannot set port feature\n");
   VAR_7 = 0;
  } else {

   VAR_7 = FUNC_6(VAR_5->parent_hub,
       ((void*)0), VAR_5->port_no, VAR_0);
   if (VAR_7) {
    FUNC_1(0, "Could not disable port "
        "(ignored)\n");
   }
  }
  VAR_5->re_enumerate_wait = VAR_3;
  break;

 case 129:
  VAR_7 = FUNC_8(VAR_5,
      VAR_5->next_config_index);
  if (VAR_7 != 0) {
   FUNC_0("Configure failed: %s: Ignored.\n",
       FUNC_5(VAR_7));
  } else {
   VAR_7 = FUNC_2(VAR_5,
       VAR_1);
  }
  VAR_5->re_enumerate_wait = VAR_3;
  break;

 default:
  VAR_5->re_enumerate_wait = VAR_3;
  break;
 }
 if (VAR_6)
  FUNC_4(VAR_5);
}
