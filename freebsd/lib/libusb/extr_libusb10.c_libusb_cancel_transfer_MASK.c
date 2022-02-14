
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb_transfer {int status; int endpoint; struct libusb_device_handle* dev_handle; } ;
struct TYPE_2__ {int * tqe_prev; } ;
struct libusb_super_transfer {scalar_t__ state; TYPE_1__ entry; } ;
struct libusb_device_handle {int dummy; } ;
struct libusb_device {scalar_t__ device_is_gone; int ctx; int tr_head; } ;
struct libusb20_transfer {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,struct libusb_super_transfer*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct libusb20_transfer*,struct libusb_super_transfer*,int ) ;
 struct libusb20_transfer* FUNC_5 (struct libusb_device_handle*,int ,int) ;
 int FUNC_6 (struct libusb_device_handle*,int ) ;
 int FUNC_7 (int ) ;
 struct libusb_super_transfer* FUNC_8 (struct libusb20_transfer*) ;
 int FUNC_9 (struct libusb20_transfer*,int *) ;
 int FUNC_10 (struct libusb20_transfer*) ;
 struct libusb_device* FUNC_11 (struct libusb_device_handle*) ;

int
FUNC_12(struct libusb_transfer *VAR_6)
{
 struct libusb20_transfer *VAR_7;
 struct libusb20_transfer *VAR_8;
 struct libusb_super_transfer *VAR_9;
 struct libusb_device *VAR_10;
 struct libusb_device_handle *VAR_11;
 uint8_t VAR_12;
 int VAR_13;

 if (VAR_6 == ((void*)0))
  return (VAR_1);


 if ((VAR_11 = VAR_6->dev_handle) == ((void*)0))
  return (VAR_2);

 VAR_12 = VAR_6->endpoint;

 VAR_10 = FUNC_11(VAR_11);

 FUNC_2(VAR_10->ctx, VAR_0, "libusb_cancel_transfer enter");

 VAR_9 = (struct libusb_super_transfer *)(
     (uint8_t *)VAR_6 - sizeof(*VAR_9));

 VAR_13 = 0;

 FUNC_0(VAR_10->ctx);

 VAR_7 = FUNC_5(VAR_11, VAR_12, 0);
 VAR_8 = FUNC_5(VAR_11, VAR_12, 1);

 if (VAR_9->state != VAR_3) {

  VAR_6->status = VAR_4;
  VAR_13 = VAR_2;
 } else if (VAR_9->entry.tqe_prev != ((void*)0)) {

  FUNC_3(&VAR_10->tr_head, VAR_9, VAR_5);
  VAR_9->entry.tqe_prev = ((void*)0);
  FUNC_4(((void*)0),
      VAR_9, VAR_4);

  FUNC_7(VAR_10->ctx);
 } else if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {

  VAR_13 = VAR_2;
 } else if (FUNC_8(VAR_7) == VAR_9) {
  FUNC_4(VAR_7,
      VAR_9, VAR_4);
  if (VAR_10->device_is_gone != 0) {

   FUNC_9(VAR_7, ((void*)0));

   FUNC_7(VAR_10->ctx);
  } else {
   FUNC_10(VAR_7);

   FUNC_6(VAR_11, VAR_12);
  }
 } else if (FUNC_8(VAR_8) == VAR_9) {
  FUNC_4(VAR_8,
      VAR_9, VAR_4);

  if (VAR_10->device_is_gone != 0) {

   FUNC_9(VAR_8, ((void*)0));

   FUNC_7(VAR_10->ctx);
  } else {
   FUNC_10(VAR_8);

   FUNC_6(VAR_11, VAR_12);
  }
 } else {

  VAR_13 = VAR_2;
 }

 FUNC_1(VAR_10->ctx);

 FUNC_2(VAR_10->ctx, VAR_0, "libusb_cancel_transfer leave");

 return (VAR_13);
}
