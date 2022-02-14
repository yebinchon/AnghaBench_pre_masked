
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_interface {int * pnpinfo; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (char const*,int ) ;
 struct usb_interface* FUNC_2 (struct usb_device*,int ) ;

usb_error_t
FUNC_3(struct usb_device *VAR_3, uint8_t VAR_4, const char *VAR_5)
{
 struct usb_interface *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 if (VAR_6->pnpinfo != ((void*)0)) {
  FUNC_0(VAR_6->pnpinfo, VAR_0);
  VAR_6->pnpinfo = ((void*)0);
 }

 if (VAR_5 == ((void*)0) || VAR_5[0] == 0)
  return (0);

 VAR_6->pnpinfo = FUNC_1(VAR_5, VAR_0);
 if (VAR_6->pnpinfo == ((void*)0))
  return (VAR_2);

 return (0);
}
