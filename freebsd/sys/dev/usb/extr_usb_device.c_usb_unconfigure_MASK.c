
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {int curr_config_index; int curr_config_no; int * cdesc; TYPE_1__ flags; int * linux_endpoint_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_device*,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ,scalar_t__) ;
 int FUNC_3 (struct usb_device*,int ,scalar_t__) ;
 int FUNC_4 (struct usb_device*) ;
 scalar_t__ FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_device*,int *) ;

__attribute__((used)) static void
FUNC_8(struct usb_device *VAR_5, uint8_t VAR_6)
{
 uint8_t VAR_7;


 VAR_7 = FUNC_5(VAR_5);


 FUNC_2(VAR_5, VAR_1, VAR_6);
 FUNC_1(VAR_5, VAR_1, VAR_0);


 if (VAR_5->cdesc != ((void*)0)) {
  if (VAR_5->flags.usb_mode != VAR_2)
   FUNC_7(VAR_5, VAR_5->cdesc);
  VAR_5->cdesc = ((void*)0);
 }

 VAR_5->curr_config_no = VAR_4;
 VAR_5->curr_config_index = VAR_3;

 if (VAR_7)
  FUNC_6(VAR_5);
}
