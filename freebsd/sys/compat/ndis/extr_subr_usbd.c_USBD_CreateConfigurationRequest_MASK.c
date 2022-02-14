
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_config_descriptor_t ;
struct TYPE_3__ {int uuh_len; } ;
struct TYPE_4__ {TYPE_1__ usc_hdr; } ;
union usbd_urb {TYPE_2__ uu_selconf; } ;
typedef int uint16_t ;
struct usbd_interface_list_entry {int uil_intfdesc; } ;


 union usbd_urb* FUNC_0 (int *,struct usbd_interface_list_entry*) ;
 int FUNC_1 (int *,int *,int,int,int,int,int) ;
 int FUNC_2 (struct usbd_interface_list_entry*,int) ;

__attribute__((used)) static union usbd_urb *
FUNC_3(usb_config_descriptor_t *VAR_0, uint16_t *VAR_1)
{
 struct usbd_interface_list_entry VAR_2[2];
 union usbd_urb *VAR_3;

 FUNC_2(VAR_2, sizeof(struct usbd_interface_list_entry) * 2);
 VAR_2[0].uil_intfdesc = FUNC_1(VAR_0, VAR_0,
     -1, -1, -1, -1, -1);
 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 *VAR_1 = VAR_3->uu_selconf.usc_hdr.uuh_len;
 return (VAR_3);
}
