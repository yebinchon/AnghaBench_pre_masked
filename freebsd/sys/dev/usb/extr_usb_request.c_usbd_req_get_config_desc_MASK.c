
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_device {int dummy; } ;
struct usb_config_descriptor {int wTotalLength; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct usb_device*,struct mtx*,int *,struct usb_config_descriptor*,int,int,int ,int ,int ,int ) ;

usb_error_t
FUNC_3(struct usb_device *VAR_2, struct mtx *VAR_3,
    struct usb_config_descriptor *VAR_4, uint8_t VAR_5)
{
 usb_error_t VAR_6;

 FUNC_0(4, "confidx=%d\n", VAR_5);

 VAR_6 = FUNC_2(VAR_2, VAR_3, ((void*)0), VAR_4, sizeof(*VAR_4),
     sizeof(*VAR_4), 0, VAR_0, VAR_5, 0);
 if (VAR_6) {
  goto done;
 }

 if (FUNC_1(VAR_4->wTotalLength) < (uint16_t)sizeof(*VAR_4)) {
  VAR_6 = VAR_1;
 }
done:
 return (VAR_6);
}
