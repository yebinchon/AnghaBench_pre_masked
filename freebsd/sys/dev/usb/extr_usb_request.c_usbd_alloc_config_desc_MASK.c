
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct usb_device {void* config_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (void*,int ,int) ;

void *
FUNC_3(struct usb_device *VAR_4, uint32_t VAR_5)
{
 if (VAR_5 > VAR_3) {
  FUNC_0("Configuration descriptor too big\n");
  return (((void*)0));
 }

 return (FUNC_1(VAR_5, VAR_0, VAR_2 | VAR_1));




}
