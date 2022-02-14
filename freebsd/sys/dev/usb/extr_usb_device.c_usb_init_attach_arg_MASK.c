
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; int bcdDevice; int idProduct; int idVendor; } ;
struct TYPE_4__ {int usb_mode; } ;
struct usb_device {int curr_config_no; int curr_config_index; TYPE_2__ ddesc; int port_no; TYPE_1__ flags; } ;
struct TYPE_6__ {int bConfigNum; int bConfigIndex; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; void* bcdDevice; void* idProduct; void* idVendor; } ;
struct usb_attach_arg {TYPE_3__ info; int dev_state; int port; int usb_mode; struct usb_device* device; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_attach_arg*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct usb_device *VAR_1,
    struct usb_attach_arg *VAR_2)
{
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->device = VAR_1;
 VAR_2->usb_mode = VAR_1->flags.usb_mode;
 VAR_2->port = VAR_1->port_no;
 VAR_2->dev_state = VAR_0;

 VAR_2->info.idVendor = FUNC_0(VAR_1->ddesc.idVendor);
 VAR_2->info.idProduct = FUNC_0(VAR_1->ddesc.idProduct);
 VAR_2->info.bcdDevice = FUNC_0(VAR_1->ddesc.bcdDevice);
 VAR_2->info.bDeviceClass = VAR_1->ddesc.bDeviceClass;
 VAR_2->info.bDeviceSubClass = VAR_1->ddesc.bDeviceSubClass;
 VAR_2->info.bDeviceProtocol = VAR_1->ddesc.bDeviceProtocol;
 VAR_2->info.bConfigIndex = VAR_1->curr_config_index;
 VAR_2->info.bConfigNum = VAR_1->curr_config_no;
}
