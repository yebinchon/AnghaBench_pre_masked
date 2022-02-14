
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usb_size_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_interface_descriptor {int bLength; int bInterfaceNumber; } ;
struct usb_interface {int num_altsetting; int bsd_iface_index; struct usb_device* linux_udev; struct usb_host_interface* cur_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_6__ {int bNumEndpoints; } ;
struct usb_host_interface {char* string; int bsd_iface_index; struct usb_host_endpoint* endpoint; TYPE_3__ desc; } ;
struct usb_host_endpoint {int bsd_iface_index; int bsd_urb_list; TYPE_3__ desc; } ;
struct usb_endpoint_descriptor {int bLength; int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_3__ desc; } ;
struct TYPE_4__ {struct usb_interface_descriptor* edesc; } ;
struct usb_device {TYPE_2__ ep0; TYPE_1__ ctrl_ep; TYPE_3__ descriptor; struct usb_interface_descriptor ddesc; int devnum; struct usb_host_endpoint* linux_endpoint_end; struct usb_host_endpoint* linux_endpoint_start; struct usb_interface* linux_iface_end; struct usb_interface* linux_iface_start; } ;
struct usb_descriptor {int bDescriptorType; } ;
struct usb_config_descriptor {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;



 int FUNC_1 (struct usb_interface_descriptor*,TYPE_3__*,int) ;
 int FUNC_2 (int ) ;
 struct usb_host_endpoint* FUNC_3 (int,int ,int) ;
 struct usb_descriptor* FUNC_4 (struct usb_config_descriptor*,struct usb_descriptor*) ;
 struct usb_config_descriptor* FUNC_5 (struct usb_device*) ;

__attribute__((used)) static int
FUNC_6(struct usb_device *VAR_3, device_t VAR_4)
{
 struct usb_config_descriptor *VAR_5 = FUNC_5(VAR_3);
 struct usb_descriptor *VAR_6;
 struct usb_interface_descriptor *VAR_7;
 struct usb_endpoint_descriptor *VAR_8;
 struct usb_interface *VAR_9 = ((void*)0);
 struct usb_host_interface *VAR_10 = ((void*)0);
 struct usb_host_endpoint *VAR_11 = ((void*)0);
 usb_size_t VAR_12;
 uint16_t VAR_13;
 uint16_t VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16;
 uint8_t VAR_17;
 uint8_t VAR_18;





 for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {

  VAR_15 = 0xFFFF;
  VAR_13 = 0;
  VAR_16 = 0;
  VAR_14 = 0;
  VAR_6 = ((void*)0);





  while ((VAR_6 = FUNC_4(VAR_5, VAR_6))) {





   switch (VAR_6->bDescriptorType) {
   case 130:
    break;

   case 129:
    VAR_8 = (void *)VAR_6;
    if ((VAR_8->bLength < sizeof(*VAR_8)) ||
        (VAR_16 == 0))
     break;
    if (VAR_11) {
     FUNC_1(VAR_8, &VAR_11->desc, sizeof(VAR_11->desc));
     VAR_11->bsd_iface_index = VAR_16 - 1;
     FUNC_0(&VAR_11->bsd_urb_list);
     VAR_11++;
    }
    if (VAR_10) {
     (VAR_10 - 1)->desc.bNumEndpoints++;
    }
    VAR_14++;
    break;

   case 128:
    VAR_7 = (void *)VAR_6;
    if (VAR_7->bLength < sizeof(*VAR_7))
     break;
    if (VAR_10) {
     FUNC_1(VAR_7, &VAR_10->desc, sizeof(VAR_10->desc));
     VAR_10->desc.bNumEndpoints = 0;
     VAR_10->endpoint = VAR_11;
     VAR_10->string = "";
     VAR_10->bsd_iface_index = VAR_16;
     VAR_10++;
    }
    VAR_18 = VAR_7->bInterfaceNumber;
    VAR_13++;
    if (VAR_15 != VAR_18) {
     if (VAR_9) {
      VAR_9->altsetting = VAR_10 - 1;
      VAR_9->cur_altsetting = VAR_10 - 1;
      VAR_9->num_altsetting = 1;
      VAR_9->bsd_iface_index = VAR_16;
      VAR_9->linux_udev = VAR_3;
      VAR_9++;
     }
     VAR_15 = VAR_18;
     VAR_16++;
    } else {
     if (VAR_9) {
      (VAR_9 - 1)->num_altsetting++;
     }
    }
    break;

   default:
    break;
   }
  }

  if (VAR_17 == 0) {

   VAR_12 = (sizeof(*VAR_11) * VAR_14) +
       (sizeof(*VAR_9) * VAR_16) +
       (sizeof(*VAR_10) * VAR_13);

   VAR_11 = FUNC_3(VAR_12, VAR_0, VAR_1 | VAR_2);
   VAR_9 = (void *)(VAR_11 + VAR_14);
   VAR_10 = (void *)(VAR_9 + VAR_16);

   VAR_3->linux_iface_start = VAR_9;
   VAR_3->linux_iface_end = VAR_9 + VAR_16;
   VAR_3->linux_endpoint_start = VAR_11;
   VAR_3->linux_endpoint_end = VAR_11 + VAR_14;
   VAR_3->devnum = FUNC_2(VAR_4);
   FUNC_1(&VAR_3->ddesc, &VAR_3->descriptor,
       sizeof(VAR_3->descriptor));
   FUNC_1(VAR_3->ctrl_ep.edesc, &VAR_3->ep0.desc,
       sizeof(VAR_3->ep0.desc));
  }
 }
 return (0);
}
