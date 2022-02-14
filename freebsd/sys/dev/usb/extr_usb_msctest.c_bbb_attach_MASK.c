
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct usb_interface_descriptor {int bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; } ;
struct usb_interface {struct usb_interface_descriptor* idesc; } ;
struct usb_device {int dummy; } ;
struct usb_config {int dummy; } ;
struct bbb_transfer {int * xfer; void* csw; void* cbw; int buffer_size; void* buffer; int mtx; int cv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 struct usb_config* VAR_8 ;
 int FUNC_0 (struct bbb_transfer*) ;
 struct usb_config* VAR_9 ;
 int FUNC_1 (int *,char*) ;
 struct bbb_transfer* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (struct usb_device*,int,int ) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*) ;
 struct usb_interface* FUNC_7 (struct usb_device*,int) ;
 scalar_t__ FUNC_8 (struct usb_device*,int*,int *,struct usb_config const*,int,struct bbb_transfer*,int *) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static struct bbb_transfer *
FUNC_11(struct usb_device *VAR_10, uint8_t VAR_11,
    uint8_t VAR_12)
{
 struct usb_interface *VAR_13;
 struct usb_interface_descriptor *VAR_14;
 const struct usb_config *VAR_15;
 struct bbb_transfer *VAR_16;
 usb_error_t VAR_17;
 int VAR_18;
 VAR_13 = FUNC_7(VAR_10, VAR_11);
 if (VAR_13 == ((void*)0))
  return (((void*)0));

 VAR_14 = VAR_13->idesc;
 if (VAR_14 == ((void*)0) || VAR_14->bInterfaceClass != VAR_12)
  return (((void*)0));

 switch (VAR_14->bInterfaceClass) {
 case 134:
  switch (VAR_14->bInterfaceSubClass) {
  case 131:
  case 128:
  case 130:
  case 129:
   break;
  default:
   return (((void*)0));
  }
  switch (VAR_14->bInterfaceProtocol) {
  case 132:
  case 133:
   break;
  default:
   return (((void*)0));
  }
  VAR_15 = VAR_8;
  VAR_18 = VAR_6;
  break;
 case 135:
  switch (VAR_14->bInterfaceSubClass) {
  case 0:
   break;
  default:
   return (((void*)0));
  }
  VAR_15 = VAR_9;
  VAR_18 = 1;
  break;
 default:
  return (((void*)0));
 }

 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_1, VAR_2 | VAR_3);
 FUNC_3(&VAR_16->mtx, "USB autoinstall", ((void*)0), VAR_0);
 FUNC_1(&VAR_16->cv, "WBBB");

 VAR_17 = FUNC_8(VAR_10, &VAR_11, VAR_16->xfer, VAR_15,
     VAR_18, VAR_16, &VAR_16->mtx);
 if (VAR_17) {
  FUNC_0(VAR_16);
  return (((void*)0));
 }
 switch (VAR_14->bInterfaceClass) {
 case 134:

  VAR_16->buffer = FUNC_9(
      VAR_16->xfer[VAR_5], 0);
  VAR_16->buffer_size =
      FUNC_10(VAR_16->xfer[VAR_5]);
  VAR_16->cbw = FUNC_9(
      VAR_16->xfer[VAR_4], 0);
  VAR_16->csw = FUNC_9(
      VAR_16->xfer[VAR_7], 0);
  break;
 default:
  break;
 }
 return (VAR_16);
}
