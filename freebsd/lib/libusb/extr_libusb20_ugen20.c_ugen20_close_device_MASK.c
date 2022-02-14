
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fs_uninit {int dummy; } ;
struct libusb20_device {int file; int file_ctrl; int * privBeData; scalar_t__ nTransfer; } ;
typedef int fs_uninit ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int ,struct usb_fs_uninit*) ;
 int FUNC_4 (struct usb_fs_uninit*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct libusb20_device *VAR_1)
{
 struct usb_fs_uninit VAR_2;

 if (VAR_1->privBeData) {
  FUNC_4(&VAR_2, 0, sizeof(VAR_2));
  if (FUNC_3(VAR_1->file, FUNC_0(VAR_0), &VAR_2)) {

  }
  FUNC_2(VAR_1->privBeData);
 }
 VAR_1->nTransfer = 0;
 VAR_1->privBeData = ((void*)0);
 FUNC_1(VAR_1->file);
 FUNC_1(VAR_1->file_ctrl);
 VAR_1->file = -1;
 VAR_1->file_ctrl = -1;
 return (0);
}
