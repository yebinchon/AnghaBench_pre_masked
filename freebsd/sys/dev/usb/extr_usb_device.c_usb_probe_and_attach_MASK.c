
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_interface {TYPE_1__* idesc; } ;
struct usb_device {scalar_t__ curr_config_index; int parent_dev; } ;
struct TYPE_4__ {int bIfaceNum; scalar_t__ bIfaceIndex; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; } ;
struct usb_attach_arg {scalar_t__ dev_state; int * temp_dev; TYPE_2__ info; scalar_t__ driver_info; struct usb_interface* iface; } ;
struct TYPE_3__ {int bInterfaceNumber; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,struct usb_device*,struct usb_attach_arg*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (struct usb_device*,struct usb_attach_arg*) ;
 int FUNC_6 (struct usb_device*,struct usb_attach_arg*) ;
 scalar_t__ FUNC_7 (struct usb_attach_arg*,int ) ;
 int FUNC_8 (struct usb_device*,int ) ;
 scalar_t__ FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_device*) ;
 struct usb_interface* FUNC_11 (struct usb_device*,scalar_t__) ;

usb_error_t
FUNC_12(struct usb_device *VAR_8, uint8_t VAR_9)
{
 struct usb_attach_arg VAR_10;
 struct usb_interface *VAR_11;
 uint8_t VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;

 if (VAR_8 == ((void*)0)) {
  FUNC_0("udev == NULL\n");
  return (VAR_3);
 }

 VAR_14 = FUNC_9(VAR_8);

 if (VAR_8->curr_config_index == VAR_6) {

  goto done;
 }


 FUNC_5(VAR_8, &VAR_10);





 if (VAR_9 == VAR_4) {

  if (FUNC_7(&VAR_10, VAR_2) != 0 &&
      FUNC_4(VAR_8, 0) == 0) {

   VAR_10.dev_state = VAR_0;
  }

  FUNC_2(VAR_7, VAR_8, &VAR_10);

  if (VAR_10.dev_state != VAR_1) {

   FUNC_8(VAR_8, 0);
   goto done;
  }
 }


 if (VAR_9 != VAR_4) {
  VAR_12 = VAR_9;
  VAR_13 = VAR_12 + 1;
 } else {
  VAR_12 = 0;
  VAR_13 = VAR_5;
 }


 for (; VAR_12 != VAR_13; VAR_12++) {

  VAR_11 = FUNC_11(VAR_8, VAR_12);
  if (VAR_11 == ((void*)0)) {




   FUNC_1(2, "end of interfaces "
       "at %u\n", VAR_12);
   break;
  }
  if (VAR_11->idesc == ((void*)0)) {

   continue;
  }
  VAR_10.iface = VAR_11;

  VAR_10.info.bInterfaceClass =
      VAR_11->idesc->bInterfaceClass;
  VAR_10.info.bInterfaceSubClass =
      VAR_11->idesc->bInterfaceSubClass;
  VAR_10.info.bInterfaceProtocol =
      VAR_11->idesc->bInterfaceProtocol;
  VAR_10.info.bIfaceIndex = VAR_12;
  VAR_10.info.bIfaceNum =
      VAR_11->idesc->bInterfaceNumber;
  VAR_10.driver_info = 0;

  FUNC_1(2, "iclass=%u/%u/%u iindex=%u/%u\n",
      VAR_10.info.bInterfaceClass,
      VAR_10.info.bInterfaceSubClass,
      VAR_10.info.bInterfaceProtocol,
      VAR_10.info.bIfaceIndex,
      VAR_10.info.bIfaceNum);

  FUNC_6(VAR_8, &VAR_10);






  if (VAR_10.temp_dev == ((void*)0))
   continue;
  if (FUNC_3(VAR_8->parent_dev, VAR_10.temp_dev))
   FUNC_1(0, "device delete child failed\n");
  VAR_10.temp_dev = ((void*)0);
 }
done:
 if (VAR_14)
  FUNC_10(VAR_8);
 return (0);
}
