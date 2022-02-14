
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct usb_xfer {TYPE_1__* xroot; } ;
struct usb_interface {scalar_t__ parent_iface_index; int alt_index; int * subdev; int * idesc; } ;
struct usb_device_request {int bmRequestType; scalar_t__* wIndex; int bRequest; int * wValue; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {struct usb_device* udev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct usb_device_request*,void**,int*,int,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int VAR_6 ;


 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct usb_device*,struct usb_interface*,int ) ;
 int VAR_7 ;
 int FUNC_7 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct usb_device*) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (int) ;
 struct usb_interface* FUNC_11 (struct usb_device*,scalar_t__) ;

__attribute__((used)) static usb_error_t
FUNC_12(struct usb_xfer *VAR_8,
    void **VAR_9, uint16_t *VAR_10,
    struct usb_device_request VAR_11, uint16_t VAR_12, uint8_t VAR_13)
{
 struct usb_interface *VAR_14;
 struct usb_interface *VAR_15;
 struct usb_device *VAR_16 = VAR_8->xroot->udev;
 int VAR_17;
 uint8_t VAR_18;
 uint8_t VAR_19;
 uint8_t VAR_20;

 if ((VAR_11.bmRequestType & 0x1F) == VAR_6) {
  VAR_18 = VAR_11.wIndex[0];
 } else {
  VAR_18 = 0;
 }





 FUNC_4(VAR_8);


 VAR_20 = FUNC_8(VAR_16);

 VAR_17 = VAR_1;

tr_repeat:
 VAR_14 = FUNC_11(VAR_16, VAR_18);
 if ((VAR_14 == ((void*)0)) ||
     (VAR_14->idesc == ((void*)0))) {

  goto tr_stalled;
 }


 VAR_19 = VAR_13;



 if ((VAR_17 != 0) &&
     (VAR_17 != VAR_0) &&
     (VAR_14->subdev != ((void*)0)) &&
     FUNC_5(VAR_14->subdev)) {



  VAR_17 = FUNC_2(VAR_14->subdev,
      &VAR_11, VAR_9, VAR_10,
      VAR_12, &VAR_19);
 }
 VAR_15 = FUNC_11(VAR_16, VAR_14->parent_iface_index);

 if ((VAR_15 == ((void*)0)) ||
     (VAR_15->idesc == ((void*)0))) {

  VAR_15 = ((void*)0);
 }


 if ((VAR_17 != 0) &&
     (VAR_17 != VAR_0) &&
     (VAR_15 != ((void*)0)) &&
     (VAR_15->subdev != ((void*)0)) &&
     ((VAR_11.bmRequestType & 0x1F) == VAR_6) &&
     (VAR_15->subdev != VAR_14->subdev) &&
     FUNC_5(VAR_15->subdev)) {
  VAR_17 = FUNC_2(VAR_15->subdev,
      &VAR_11, VAR_9, VAR_10, VAR_12, &VAR_19);
 }
 if (VAR_17 == 0) {

  *VAR_9 = ((uint8_t *)(*VAR_9)) - VAR_12;
  *VAR_10 += VAR_12;

  if ((VAR_13 == VAR_5) &&
      (VAR_19 == VAR_4))
   goto tr_short;
  else
   goto tr_valid;
 } else if (VAR_17 == VAR_0) {
  goto tr_stalled;
 }
 if ((VAR_11.bmRequestType & 0x1F) != VAR_6) {
  VAR_18++;
  goto tr_repeat;
 }
 if (VAR_13 != VAR_5) {

  goto tr_valid;
 }
 switch (VAR_11.bmRequestType) {
 case 128:
  switch (VAR_11.bRequest) {
  case 130:







   VAR_17 = FUNC_6(VAR_16,
       VAR_14, VAR_11.wValue[0]);
   if (VAR_17) {
    FUNC_1("alt setting does not exist %s\n",
        FUNC_10(VAR_17));
    goto tr_stalled;
   }
   VAR_17 = FUNC_7(VAR_16, VAR_18);
   if (VAR_17) {
    FUNC_1("alt setting failed %s\n",
        FUNC_10(VAR_17));
    goto tr_stalled;
   }

   VAR_14->alt_index = VAR_11.wValue[0];
   break;

  default:
   goto tr_stalled;
  }
  break;

 case 129:
  switch (VAR_11.bRequest) {
  case 131:
   *VAR_9 = &VAR_14->alt_index;
   *VAR_10 = 1;
   break;

  default:
   goto tr_stalled;
  }
  break;
 default:
  goto tr_stalled;
 }
tr_valid:
 if (VAR_20)
  FUNC_9(VAR_16);
 FUNC_3(VAR_8);
 return (0);

tr_short:
 if (VAR_20)
  FUNC_9(VAR_16);
 FUNC_3(VAR_8);
 return (VAR_2);

tr_stalled:
 if (VAR_20)
  FUNC_9(VAR_16);
 FUNC_3(VAR_8);
 return (VAR_3);
}
