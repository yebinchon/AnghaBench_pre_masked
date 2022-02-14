
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef void* uint8_t ;
struct TYPE_4__ {int bMaxPacketSize; } ;
struct TYPE_3__ {scalar_t__ usb_mode; } ;
struct usb_device {scalar_t__ speed; void* address; TYPE_2__ ddesc; int port_no; int hs_port_no; struct usb_device* parent_hs_hub; struct usb_device* parent_hub; TYPE_1__ flags; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,void*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (struct mtx*,int) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct usb_device*,int *,int ,void*,int ,int ) ;
 scalar_t__ FUNC_7 (struct usb_device*,struct mtx*,int ) ;
 scalar_t__ FUNC_8 (struct usb_device*,int *,int ) ;
 scalar_t__ FUNC_9 (struct usb_device*,struct mtx*,void*) ;
 int FUNC_10 (struct usb_device*,struct mtx*,int ) ;
 scalar_t__ FUNC_11 (struct usb_device*,struct mtx*) ;

usb_error_t
FUNC_12(struct usb_device *VAR_12, struct mtx *VAR_13)
{
 struct usb_device *VAR_14;
 usb_error_t VAR_15;
 uint8_t VAR_16;
 uint8_t VAR_17 = 1;

 if (VAR_12->flags.usb_mode != VAR_3) {
  return (VAR_1);
 }
 VAR_16 = VAR_12->address;
 VAR_14 = VAR_12->parent_hub;
 if (VAR_14 == ((void*)0)) {
  return (VAR_1);
 }
retry:
 if (VAR_14->speed == VAR_7)
  FUNC_10(VAR_14, VAR_13, VAR_12->port_no);


 VAR_15 = FUNC_7(VAR_14, VAR_13, VAR_12->port_no);
 if (VAR_15) {
  FUNC_1(0, "addr=%d, port reset failed, %s\n",
      VAR_16, FUNC_5(VAR_15));
  goto done;
 }





 VAR_12->address = VAR_8;


 VAR_12->ddesc.bMaxPacketSize = VAR_2;


 FUNC_4(VAR_12, VAR_10);




 VAR_15 = FUNC_9(VAR_12, VAR_13, VAR_16);
 if (VAR_15) {

  FUNC_1(0, "addr=%d, set address failed! (%s, ignored)\n",
      VAR_16, FUNC_5(VAR_15));
 }




 if (VAR_12->address == VAR_8)
  VAR_12->address = VAR_16;


 VAR_15 = FUNC_11(VAR_12, VAR_13);

done:
 if (VAR_15 && VAR_17) {

  FUNC_3(VAR_13, VAR_11 / 2);

  VAR_17 = 0;

  goto retry;
 }

 if (VAR_12->address == VAR_8)
  VAR_12->address = VAR_16;

 if (VAR_15 == 0)
  FUNC_4(VAR_12, VAR_9);
 return (VAR_15);
}
