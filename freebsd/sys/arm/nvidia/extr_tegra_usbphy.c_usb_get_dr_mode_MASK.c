
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;
typedef int device_t ;


 int FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static enum usb_dr_mode
FUNC_4(device_t VAR_4, phandle_t VAR_5, char *VAR_6)
{
 char *VAR_7;
 int VAR_8;
 enum usb_dr_mode VAR_9;

 VAR_8 = FUNC_0(VAR_5, VAR_6, (void **)&VAR_7);
 if (VAR_8 <= 0)
  return (VAR_3);

 VAR_9 = VAR_3;
 if (FUNC_3(VAR_7, "device") == 0)
  VAR_9 = VAR_0;
 else if (FUNC_3(VAR_7, "host") == 0)
  VAR_9 = VAR_1;
 else if (FUNC_3(VAR_7, "otg") == 0)
  VAR_9 = VAR_2;
 else
  FUNC_2(VAR_4, "Unknown dr mode: %s\n", VAR_7);
 FUNC_1(VAR_7);
 return (VAR_9);
}
