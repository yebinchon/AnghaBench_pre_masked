
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct usb_fs_clear_stall_sync {int ep_index; } ;
struct libusb20_transfer {TYPE_1__* pdev; int trIndex; } ;
struct TYPE_2__ {int file; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_fs_clear_stall_sync*) ;
 int FUNC_2 (struct usb_fs_clear_stall_sync*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct libusb20_transfer *VAR_2)
{
 struct usb_fs_clear_stall_sync VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));



 VAR_3.ep_index = VAR_2->trIndex;

 if (FUNC_1(VAR_2->pdev->file, FUNC_0(VAR_1), &VAR_3)) {
  return (VAR_0);
 }
 return (0);
}
