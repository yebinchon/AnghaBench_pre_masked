
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int temp ;
struct usb_fs_stop {int ep_index; } ;
struct libusb20_transfer {TYPE_1__* pdev; int trIndex; } ;
struct TYPE_2__ {int file; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_fs_stop*) ;
 int FUNC_2 (struct usb_fs_stop*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct libusb20_transfer *VAR_1)
{
 struct usb_fs_stop VAR_2;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));

 VAR_2.ep_index = VAR_1->trIndex;

 if (FUNC_1(VAR_1->pdev->file, FUNC_0(VAR_0), &VAR_2)) {

 }
 return;
}
