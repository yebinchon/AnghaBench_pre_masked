
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_temp_setup {scalar_t__ size; void* err; int * buf; int self_powered; int usb_speed; } ;
struct usb_temp_device_desc {int dummy; } ;
struct TYPE_4__ {int self_powered; } ;
struct TYPE_3__ {struct usb_temp_setup* temp_setup; } ;
struct usb_device {int * usb_template_ptr; TYPE_2__ flags; int speed; TYPE_1__ scratch; } ;


 int FUNC_0 (int ,char*,scalar_t__,...) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (struct usb_temp_setup*,int ,int) ;
 void* FUNC_2 (struct usb_device*,void*) ;
 int FUNC_3 (struct usb_temp_setup*,struct usb_temp_device_desc const*) ;
 void* FUNC_4 (struct usb_device*,int *,scalar_t__) ;
 void* FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*) ;
 int * FUNC_7 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (void*) ;

usb_error_t
FUNC_11(struct usb_device *VAR_2,
    const struct usb_temp_device_desc *VAR_3)
{
 struct usb_temp_setup *VAR_4;
 void *VAR_5;
 usb_error_t VAR_6;
 uint8_t VAR_7;
 uint8_t VAR_8;


 if (VAR_3 == ((void*)0))
  return (0);


 VAR_8 = FUNC_8(VAR_2);

 VAR_4 = VAR_2->scratch.temp_setup;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->usb_speed = VAR_2->speed;
 VAR_4->self_powered = VAR_2->flags.self_powered;



 FUNC_3(VAR_4, VAR_3);

 if (VAR_4->err) {

  goto done;
 }

 if (VAR_4->size == 0) {
  VAR_4->err = VAR_0;
  goto done;
 }

 VAR_4->buf = FUNC_7(VAR_2, VAR_4->size);





 if (VAR_4->buf == ((void*)0)) {

  VAR_4->err = VAR_1;
  goto done;
 }


 VAR_4->size = 0;

 FUNC_3(VAR_4, VAR_3);




 VAR_2->usb_template_ptr = VAR_4->buf;

 if (VAR_4->err) {

  goto done;
 }



 VAR_5 = FUNC_5(VAR_2);
 VAR_4->err = FUNC_2(VAR_2, VAR_5);
 if (VAR_4->err) {
  FUNC_0(0, "Could not resolve endpoints for "
      "Device Descriptor, error = %s\n",
      FUNC_10(VAR_4->err));
  goto done;
 }
 for (VAR_7 = 0;; VAR_7++) {

  VAR_5 = FUNC_4(VAR_2, ((void*)0), VAR_7);
  if (VAR_5 == ((void*)0)) {
   break;
  }
  VAR_4->err = FUNC_2(VAR_2, VAR_5);
  if (VAR_4->err) {
   FUNC_0(0, "Could not resolve endpoints for "
       "Config Descriptor %u, error = %s\n", VAR_7,
       FUNC_10(VAR_4->err));
   goto done;
  }
 }
done:
 VAR_6 = VAR_4->err;
 if (VAR_6)
  FUNC_6(VAR_2);
 if (VAR_8)
  FUNC_9(VAR_2);
 return (VAR_6);
}
