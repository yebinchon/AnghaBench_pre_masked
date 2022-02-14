
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_size_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ bmAttributes; scalar_t__ bEndpointAddress; } ;
struct usb_host_endpoint {int fbsd_buf_size; int bsd_xfer; int bsd_iface_index; TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;
struct TYPE_4__ {int proxy_buffer; int ext_buffer; int short_xfer_ok; } ;
struct usb_config {int bufsize; TYPE_2__ flags; int * callback; scalar_t__ direction; scalar_t__ endpoint; scalar_t__ type; int frames; } ;
typedef int cfg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct usb_config*,struct usb_config*,int) ;
 int FUNC_1 (struct usb_config*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct usb_device*) ;
 scalar_t__ FUNC_3 (struct usb_device*,int *,int ,struct usb_config*,int,struct usb_host_endpoint*,int *) ;
 int FUNC_4 (int ,int) ;

int
FUNC_5(struct usb_device *VAR_9,
    struct usb_host_endpoint *VAR_10, usb_size_t VAR_11)
{
 struct usb_config VAR_12[2];
 uint8_t VAR_13 = VAR_10->desc.bmAttributes & VAR_6;
 uint8_t VAR_14 = VAR_10->desc.bEndpointAddress;

 if (VAR_10->fbsd_buf_size == VAR_11) {

  return (0);
 }
 FUNC_4(VAR_10->bsd_xfer, 2);

 VAR_10->fbsd_buf_size = VAR_11;

 if (VAR_11 == 0) {
  return (0);
 }
 FUNC_1(VAR_12, 0, sizeof(VAR_12));

 if (VAR_13 == VAR_5) {






  VAR_12[0].type = VAR_13;
  VAR_12[0].endpoint = VAR_14 & VAR_2;
  VAR_12[0].direction = VAR_14 & (VAR_4 | VAR_3);
  VAR_12[0].callback = &VAR_7;
  VAR_12[0].bufsize = 0;
  VAR_12[0].frames = FUNC_2(VAR_9);
  VAR_12[0].flags.proxy_buffer = 1;
  VAR_12[0].flags.short_xfer_ok = 1;

  FUNC_0(VAR_12, VAR_12 + 1, sizeof(*VAR_12));



  if (FUNC_3(VAR_9, &VAR_10->bsd_iface_index,
      VAR_10->bsd_xfer, VAR_12, 2, VAR_10, &VAR_1)) {
   return (-VAR_0);
  }
 } else {
  if (VAR_11 > (1 << 22)) {

   VAR_11 = (1 << 22);
  }


  VAR_12[0].type = VAR_13;
  VAR_12[0].endpoint = VAR_14 & VAR_2;
  VAR_12[0].direction = VAR_14 & (VAR_4 | VAR_3);
  VAR_12[0].callback = &VAR_8;
  VAR_12[0].bufsize = VAR_11;
  VAR_12[0].flags.ext_buffer = 1;
  VAR_12[0].flags.proxy_buffer = 1;
  VAR_12[0].flags.short_xfer_ok = 1;

  if (FUNC_3(VAR_9, &VAR_10->bsd_iface_index,
      VAR_10->bsd_xfer, VAR_12, 1, VAR_10, &VAR_1)) {
   return (-VAR_0);
  }
 }
 return (0);
}
