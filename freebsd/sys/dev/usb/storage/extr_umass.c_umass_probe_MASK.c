
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_attach_arg {scalar_t__ usb_mode; } ;
struct umass_probe_proto {int error; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 struct umass_probe_proto FUNC_1 (int ,struct usb_attach_arg*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct usb_attach_arg *VAR_3 = FUNC_0(VAR_2);
 struct umass_probe_proto VAR_4;

 if (VAR_3->usb_mode != VAR_1) {
  return (VAR_0);
 }
 VAR_4 = FUNC_1(VAR_2, VAR_3);

 return (VAR_4.error);
}
