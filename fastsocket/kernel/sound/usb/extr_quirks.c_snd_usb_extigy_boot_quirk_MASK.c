
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_config {int dummy; } ;
struct usb_device {struct usb_host_config* actconfig; int descriptor; } ;
struct TYPE_2__ {int wTotalLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct usb_host_config*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int,int,int *,int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,int *,int) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_4, struct usb_interface *VAR_5)
{
 struct usb_host_config *VAR_6 = VAR_4->actconfig;
 int VAR_7;

 if (FUNC_1(FUNC_0(VAR_6)->wTotalLength) == VAR_2 ||
     FUNC_1(FUNC_0(VAR_6)->wTotalLength) == VAR_1) {
  FUNC_2("sending Extigy boot sequence...\n");

  VAR_7 = FUNC_3(VAR_4, FUNC_6(VAR_4,0),
          0x10, 0x43, 0x0001, 0x000a, ((void*)0), 0);
  if (VAR_7 < 0) FUNC_2("error sending boot message: %d\n", VAR_7);
  VAR_7 = FUNC_4(VAR_4, VAR_3, 0,
    &VAR_4->descriptor, sizeof(VAR_4->descriptor));
  VAR_6 = VAR_4->actconfig;
  if (VAR_7 < 0) FUNC_2("error usb_get_descriptor: %d\n", VAR_7);
  VAR_7 = FUNC_5(VAR_4);
  if (VAR_7 < 0) FUNC_2("error usb_reset_configuration: %d\n", VAR_7);
  FUNC_2("extigy_boot: new boot length = %d\n",
       FUNC_1(FUNC_0(VAR_6)->wTotalLength));
  return -VAR_0;
 }
 return 0;
}
