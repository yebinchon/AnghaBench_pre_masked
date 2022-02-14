
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fs_endpoint {scalar_t__ status; scalar_t__ isoc_time_complete; scalar_t__ aFrames; } ;
struct usb_fs_complete {int ep_index; } ;
struct libusb20_transfer {int status; scalar_t__ timeComplete; scalar_t__ aFrames; } ;
struct libusb20_device {struct libusb20_transfer* pTransfer; struct usb_fs_endpoint* privBeData; int file; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_fs_complete*) ;
 int FUNC_2 (struct libusb20_transfer*) ;

__attribute__((used)) static int
FUNC_3(struct libusb20_device *VAR_12)
{
 struct usb_fs_complete VAR_13;
 struct usb_fs_endpoint *VAR_14;
 struct libusb20_transfer *VAR_15;

 while (1) {

   if (FUNC_1(VAR_12->file, FUNC_0(VAR_10), &VAR_13)) {
   if (VAR_11 == VAR_0) {
    break;
   } else {

    return (VAR_1);
   }
  }
  VAR_14 = VAR_12->privBeData;
  VAR_15 = VAR_12->pTransfer;
  VAR_14 += VAR_13.ep_index;
  VAR_15 += VAR_13.ep_index;



  if (VAR_14->status == 0) {
   VAR_15->aFrames = VAR_14->aFrames;
   VAR_15->timeComplete = VAR_14->isoc_time_complete;
   VAR_15->status = VAR_3;
  } else if (VAR_14->status == VAR_7) {
   VAR_15->aFrames = 0;
   VAR_15->timeComplete = 0;
   VAR_15->status = VAR_2;
  } else if (VAR_14->status == VAR_8) {
   VAR_15->aFrames = 0;
   VAR_15->timeComplete = 0;
   VAR_15->status = VAR_5;
  } else if (VAR_14->status == VAR_9) {
   VAR_15->aFrames = 0;
   VAR_15->timeComplete = 0;
   VAR_15->status = VAR_6;
  } else {
   VAR_15->aFrames = 0;
   VAR_15->timeComplete = 0;
   VAR_15->status = VAR_4;
  }
  FUNC_2(VAR_15);
 }
 return (0);
}
