
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb_transfer {int * dev_handle; int endpoint; } ;
struct TYPE_2__ {int * tqe_prev; } ;
struct libusb_super_transfer {int state; TYPE_1__ entry; } ;
struct libusb_device {scalar_t__ device_is_gone; int ctx; int tr_head; } ;
struct libusb20_transfer {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct libusb_super_transfer*,int ) ;
 int VAR_6 ;
 struct libusb20_transfer* FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ) ;
 struct libusb_super_transfer* FUNC_6 (struct libusb20_transfer*) ;
 struct libusb_device* FUNC_7 (int *) ;

int
FUNC_8(struct libusb_transfer *VAR_7)
{
 struct libusb20_transfer *VAR_8;
 struct libusb20_transfer *VAR_9;
 struct libusb_super_transfer *VAR_10;
 struct libusb_device *VAR_11;
 uint8_t VAR_12;
 int VAR_13;

 if (VAR_7 == ((void*)0))
  return (VAR_2);

 if (VAR_7->dev_handle == ((void*)0))
  return (VAR_2);

 VAR_12 = VAR_7->endpoint;

 VAR_11 = FUNC_7(VAR_7->dev_handle);

 FUNC_2(VAR_11->ctx, VAR_0, "libusb_submit_transfer enter");

 VAR_10 = (struct libusb_super_transfer *)(
     (uint8_t *)VAR_7 - sizeof(*VAR_10));

 FUNC_0(VAR_11->ctx);

 VAR_8 = FUNC_4(VAR_7->dev_handle, VAR_12, 0);
 VAR_9 = FUNC_4(VAR_7->dev_handle, VAR_12, 1);

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  VAR_13 = VAR_4;
 } else if ((VAR_10->entry.tqe_prev != ((void*)0)) ||
     (FUNC_6(VAR_8) == VAR_10) ||
     (FUNC_6(VAR_9) == VAR_10)) {
  VAR_13 = VAR_1;
 } else if (VAR_11->device_is_gone != 0) {
  VAR_13 = VAR_3;
 } else {


  VAR_10->state = VAR_5;


  FUNC_3(&VAR_11->tr_head, VAR_10, VAR_6);


  FUNC_5(
      VAR_7->dev_handle, VAR_12);

  VAR_13 = 0;
 }

 FUNC_1(VAR_11->ctx);

 FUNC_2(VAR_11->ctx, VAR_0, "libusb_submit_transfer leave %d", VAR_13);

 return (VAR_13);
}
