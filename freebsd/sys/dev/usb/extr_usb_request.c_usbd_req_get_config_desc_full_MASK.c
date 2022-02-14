
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct usb_device {int dummy; } ;
struct usb_config_descriptor {int wTotalLength; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,scalar_t__) ;
 struct usb_config_descriptor* FUNC_4 (struct usb_device*,scalar_t__) ;
 int FUNC_5 (struct usb_device*,struct usb_config_descriptor*) ;
 scalar_t__ FUNC_6 (struct usb_device*,struct mtx*,struct usb_config_descriptor*,int ) ;
 scalar_t__ FUNC_7 (struct usb_device*,struct mtx*,int *,struct usb_config_descriptor*,scalar_t__,scalar_t__,int ,int ,int ,int) ;

usb_error_t
FUNC_8(struct usb_device *VAR_4, struct mtx *VAR_5,
    struct usb_config_descriptor **VAR_6, uint8_t VAR_7)
{
 struct usb_config_descriptor VAR_8;
 struct usb_config_descriptor *VAR_9;
 uint32_t VAR_10;
 usb_error_t VAR_11;

 FUNC_1(4, "index=%d\n", VAR_7);

 *VAR_6 = ((void*)0);

 VAR_11 = FUNC_6(VAR_4, VAR_5, &VAR_8, VAR_7);
 if (VAR_11)
  return (VAR_11);


 VAR_10 = FUNC_2(VAR_8.wTotalLength);
 if (VAR_10 < (uint32_t)sizeof(*VAR_9)) {

  return (VAR_2);
 } else if (VAR_10 > VAR_1) {
  FUNC_0("Configuration descriptor was truncated\n");
  VAR_10 = VAR_1;
 }
 VAR_9 = FUNC_4(VAR_4, VAR_10);
 if (VAR_9 == ((void*)0))
  return (VAR_3);
 VAR_11 = FUNC_7(VAR_4, VAR_5, ((void*)0), VAR_9, VAR_10, VAR_10, 0,
     VAR_0, VAR_7, 3);
 if (VAR_11) {
  FUNC_5(VAR_4, VAR_9);
  return (VAR_11);
 }

 FUNC_3(VAR_9->wTotalLength, VAR_10);

 *VAR_6 = VAR_9;

 return (0);
}
