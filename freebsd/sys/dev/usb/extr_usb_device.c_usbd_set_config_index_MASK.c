
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_status {int wStatus; } ;
struct TYPE_6__ {scalar_t__ usb_mode; int self_powered; int uq_bus_powered; } ;
struct usb_device {scalar_t__ state; int power; int curr_config_index; int curr_config_no; TYPE_3__ flags; TYPE_2__* parent_hub; int address; struct usb_config_descriptor* cdesc; } ;
struct usb_config_descriptor {int bmAttributes; int bMaxPower; int bConfigurationValue; } ;
struct TYPE_5__ {TYPE_1__* hub; } ;
struct TYPE_4__ {int portpower; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct usb_device*) ;
 scalar_t__ FUNC_4 (struct usb_device*,int ,int ) ;
 int FUNC_5 (struct usb_device*,scalar_t__) ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (struct usb_device*,int *,struct usb_config_descriptor**,int) ;
 scalar_t__ FUNC_11 (struct usb_device*,struct usb_config_descriptor**,int) ;
 scalar_t__ FUNC_12 (struct usb_device*,int *,struct usb_status*) ;
 scalar_t__ FUNC_13 (struct usb_device*,int *,int ) ;

usb_error_t
FUNC_14(struct usb_device *VAR_15, uint8_t VAR_16)
{
 struct usb_status VAR_17;
 struct usb_config_descriptor *VAR_18;
 uint16_t VAR_19;
 uint16_t VAR_20;
 uint8_t VAR_21;
 uint8_t VAR_22;
 usb_error_t VAR_23;

 FUNC_1(6, "udev=%p index=%d\n", VAR_15, VAR_16);


 VAR_22 = FUNC_7(VAR_15);

 FUNC_6(VAR_15, 0);

 if (VAR_16 == VAR_13) {





  VAR_23 = FUNC_13(VAR_15, ((void*)0), VAR_14);
  if (VAR_15->state == VAR_12)
   FUNC_5(VAR_15, VAR_11);
  goto done;
 }

 if (VAR_15->flags.usb_mode == VAR_9) {

  VAR_23 = FUNC_11(VAR_15, &VAR_18,
      (VAR_2 << 8) | VAR_16);
 } else {

  VAR_23 = FUNC_10(VAR_15,
      ((void*)0), &VAR_18, VAR_16);
 }
 if (VAR_23) {
  goto done;
 }


 VAR_15->cdesc = VAR_18;


 VAR_21 = 0;
 if ((!VAR_15->flags.uq_bus_powered) &&
     (VAR_18->bmAttributes & VAR_1) &&
     (VAR_15->flags.usb_mode == VAR_10)) {

  if (VAR_18->bmAttributes & VAR_0) {

   VAR_23 = FUNC_12(VAR_15, ((void*)0), &VAR_17);
   if (VAR_23) {
    FUNC_1(0, "could not read "
        "device status: %s\n",
        FUNC_9(VAR_23));
   } else if (FUNC_2(VAR_17.wStatus) & VAR_3) {
    VAR_21 = 1;
   }
   FUNC_0("status=0x%04x \n",
    FUNC_2(VAR_17.wStatus));
  } else
   VAR_21 = 1;
 }
 FUNC_0("udev=%p cdesc=%p (addr %d) cno=%d attr=0x%02x, "
     "selfpowered=%d, power=%d\n",
     VAR_15, VAR_18,
     VAR_15->address, VAR_18->bConfigurationValue, VAR_18->bmAttributes,
     VAR_21, VAR_18->bMaxPower * 2);


 VAR_19 = VAR_18->bMaxPower * 2;

 if (VAR_15->parent_hub) {
  VAR_20 = VAR_15->parent_hub->hub->portpower;
 } else {
  VAR_20 = VAR_8;
 }

 if (VAR_19 > VAR_20) {
  FUNC_1(0, "power exceeded %d > %d\n", VAR_19, VAR_20);
  VAR_23 = VAR_6;
  goto done;
 }

 if (VAR_15->flags.usb_mode == VAR_10) {
  VAR_15->flags.self_powered = VAR_21;
 }
 VAR_15->power = VAR_19;
 VAR_15->curr_config_no = VAR_18->bConfigurationValue;
 VAR_15->curr_config_index = VAR_16;
 FUNC_5(VAR_15, VAR_12);


 VAR_23 = FUNC_13(VAR_15, ((void*)0), VAR_18->bConfigurationValue);
 if (VAR_23) {
  goto done;
 }

 VAR_23 = FUNC_4(VAR_15, VAR_7, VAR_4);
 if (VAR_23) {
  goto done;
 }

 VAR_23 = FUNC_4(VAR_15, VAR_7, VAR_5);
 if (VAR_23) {
  goto done;
 }






done:
 FUNC_0("error=%s\n", FUNC_9(VAR_23));
 if (VAR_23) {
  FUNC_6(VAR_15, 0);
 }
 if (VAR_22)
  FUNC_8(VAR_15);
 return (VAR_23);
}
