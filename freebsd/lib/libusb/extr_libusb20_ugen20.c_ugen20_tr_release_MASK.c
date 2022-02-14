
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fs_uninit {int dummy; } ;
struct libusb20_device {scalar_t__ nTransfer; int file; int * privBeData; } ;
typedef int fs_uninit ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_fs_uninit*) ;
 int FUNC_2 (struct usb_fs_uninit*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct libusb20_device *VAR_1)
{
 struct usb_fs_uninit VAR_2;

 if (VAR_1->nTransfer == 0) {
  return;
 }

 if (VAR_1->privBeData != ((void*)0)) {
  FUNC_2(&VAR_2, 0, sizeof(VAR_2));
  if (FUNC_1(VAR_1->file, FUNC_0(VAR_0), &VAR_2)) {

  }
 }
 return;
}
