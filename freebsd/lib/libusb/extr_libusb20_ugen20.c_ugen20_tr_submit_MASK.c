
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct usb_fs_start {scalar_t__ ep_index; } ;
struct usb_fs_endpoint {int timeout; int flags; int nFrames; } ;
struct libusb20_transfer {int flags; int timeout; TYPE_1__* pdev; scalar_t__ trIndex; int nFrames; } ;
struct TYPE_2__ {int file; struct usb_fs_endpoint* privBeData; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_fs_start*) ;
 int FUNC_2 (struct usb_fs_start*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct libusb20_transfer *VAR_9)
{
 struct usb_fs_start VAR_10;
 struct usb_fs_endpoint *VAR_11;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));

 VAR_11 = VAR_9->pdev->privBeData;
 VAR_11 += VAR_9->trIndex;

 VAR_11->nFrames = VAR_9->nFrames;
 VAR_11->flags = 0;
 if (!(VAR_9->flags & VAR_3)) {
  VAR_11->flags |= VAR_7;
 }
 if (!(VAR_9->flags & VAR_2)) {
  VAR_11->flags |= VAR_6;
 }
 if (VAR_9->flags & VAR_1) {
  VAR_11->flags |= VAR_5;
 }
 if (VAR_9->flags & VAR_0) {
  VAR_11->flags |= VAR_4;
 }

 if (VAR_9->timeout > 65535)
  VAR_11->timeout = 65535;
 else
  VAR_11->timeout = VAR_9->timeout;

 VAR_10.ep_index = VAR_9->trIndex;

 if (FUNC_1(VAR_9->pdev->file, FUNC_0(VAR_8), &VAR_10)) {

 }
 return;
}
