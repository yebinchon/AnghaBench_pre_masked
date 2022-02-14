
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct usb_fs_init {int ep_index_max; int pEndpoints; } ;
struct usb_fs_endpoint {int ep_index_max; int pEndpoints; } ;
struct libusb20_device {int nTransfer; int file; struct usb_fs_init* privBeData; } ;
typedef int fs_init ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,struct usb_fs_init*) ;
 int FUNC_2 (struct usb_fs_init*) ;
 struct usb_fs_init* FUNC_3 (int) ;
 int FUNC_4 (struct usb_fs_init*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct libusb20_device *VAR_3)
{
 struct usb_fs_init VAR_4;
 struct usb_fs_endpoint *VAR_5;
 int VAR_6;
 uint32_t VAR_7;
 uint16_t VAR_8;

 VAR_8 = VAR_3->nTransfer;
 VAR_6 = 0;

 if (VAR_8 == 0) {
  goto done;
 }
 VAR_7 = VAR_8 * sizeof(*VAR_5);

 if (VAR_3->privBeData == ((void*)0)) {
  VAR_5 = FUNC_3(VAR_7);
  if (VAR_5 == ((void*)0)) {
   VAR_6 = VAR_0;
   goto done;
  }
  VAR_3->privBeData = VAR_5;
 }

 FUNC_4(VAR_3->privBeData, 0, VAR_7);

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.pEndpoints = FUNC_2(VAR_3->privBeData);
 VAR_4.ep_index_max = VAR_8;

 if (FUNC_1(VAR_3->file, FUNC_0(VAR_2), &VAR_4)) {
  VAR_6 = VAR_1;
  goto done;
 }
done:
 return (VAR_6);
}
