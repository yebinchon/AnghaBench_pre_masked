
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bNumEndpoints; int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; int bAlternateSetting; int bInterfaceNumber; } ;
typedef TYPE_2__ usb_interface_descriptor_t ;
struct TYPE_7__ {int bNumInterface; } ;
typedef TYPE_3__ usb_config_descriptor_t ;
typedef union usbd_urb {int dummy; } usbd_urb ;
struct usbd_interface_information {int uii_len; int uii_numeps; struct usbd_pipe_information* uii_pipes; TYPE_2__* uii_handle; int uii_intfproto; int uii_intfsubclass; int uii_intfclass; int uii_altset; int uii_intfnum; } ;
struct TYPE_5__ {int uuh_len; int uuh_func; } ;
struct usbd_urb_select_configuration {struct usbd_interface_information usc_intf; TYPE_3__* usc_conf; TYPE_3__* usc_handle; TYPE_1__ usc_hdr; } ;
struct usbd_pipe_information {int upi_maxtxsize; } ;
struct usbd_interface_list_entry {TYPE_2__* uil_intfdesc; struct usbd_interface_information* uil_intf; } ;


 struct usbd_urb_select_configuration* FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static union usbd_urb *
FUNC_1(usb_config_descriptor_t *VAR_3,
    struct usbd_interface_list_entry *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct usbd_interface_information *VAR_8;
 struct usbd_pipe_information *VAR_9;
 struct usbd_urb_select_configuration *VAR_10;
 usb_interface_descriptor_t *VAR_11;

 for (VAR_5 = 0, VAR_7 = 0; VAR_5 < VAR_3->bNumInterface; VAR_5++) {
  VAR_6 = VAR_4[VAR_5].uil_intfdesc->bNumEndpoints;
  VAR_7 = VAR_7 + sizeof(struct usbd_interface_information) +
      sizeof(struct usbd_pipe_information) * (VAR_6 - 1);
 }
 VAR_7 += sizeof(struct usbd_urb_select_configuration) -
     sizeof(struct usbd_interface_information);

 VAR_10 = FUNC_0(VAR_0, VAR_7, 0);
 if (VAR_10 == ((void*)0))
  return (((void*)0));
 VAR_10->usc_hdr.uuh_func = VAR_1;
 VAR_10->usc_hdr.uuh_len = VAR_7;
 VAR_10->usc_handle = VAR_3;
 VAR_10->usc_conf = VAR_3;

 VAR_8 = &VAR_10->usc_intf;
 for (VAR_5 = 0; VAR_5 < VAR_3->bNumInterface; VAR_5++) {
  if (VAR_4[VAR_5].uil_intfdesc == ((void*)0))
   break;

  VAR_4[VAR_5].uil_intf = VAR_8;
  VAR_11 = VAR_4[VAR_5].uil_intfdesc;

  VAR_8->uii_len = sizeof(struct usbd_interface_information) +
      (VAR_11->bNumEndpoints - 1) *
      sizeof(struct usbd_pipe_information);
  VAR_8->uii_intfnum = VAR_11->bInterfaceNumber;
  VAR_8->uii_altset = VAR_11->bAlternateSetting;
  VAR_8->uii_intfclass = VAR_11->bInterfaceClass;
  VAR_8->uii_intfsubclass = VAR_11->bInterfaceSubClass;
  VAR_8->uii_intfproto = VAR_11->bInterfaceProtocol;
  VAR_8->uii_handle = VAR_11;
  VAR_8->uii_numeps = VAR_11->bNumEndpoints;

  VAR_9 = &VAR_8->uii_pipes[0];
  for (VAR_6 = 0; VAR_6 < VAR_8->uii_numeps; VAR_6++)
   VAR_9[VAR_6].upi_maxtxsize =
       VAR_2;

  VAR_8 = (struct usbd_interface_information *)((char *)VAR_8 +
      VAR_8->uii_len);
 }

 return ((union usbd_urb *)VAR_10);
}
