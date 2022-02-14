
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_device_descriptor {int dummy; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_device*,struct mtx*,int *,struct usb_device_descriptor*,int,int,int ,int ,int ,int) ;

usb_error_t
FUNC_2(struct usb_device *VAR_1, struct mtx *VAR_2,
    struct usb_device_descriptor *VAR_3)
{
 FUNC_0(4, "\n");
 return (FUNC_1(VAR_1, VAR_2, ((void*)0), VAR_3, sizeof(*VAR_3),
     sizeof(*VAR_3), 0, VAR_0, 0, 3));
}
