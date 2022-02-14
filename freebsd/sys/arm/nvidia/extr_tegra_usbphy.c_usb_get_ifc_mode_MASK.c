
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef enum usb_ifc_type { ____Placeholder_usb_ifc_type } usb_ifc_type ;
typedef int device_t ;


 int FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static enum usb_ifc_type
FUNC_4(device_t VAR_3, phandle_t VAR_4, char *VAR_5)
{
 char *VAR_6;
 int VAR_7;
 enum usb_ifc_type VAR_8;

 VAR_7 = FUNC_0(VAR_4, VAR_5, (void **)&VAR_6);
 if (VAR_7 <= 0)
  return (VAR_1);

 VAR_8 = VAR_1;
 if (FUNC_3(VAR_6, "utmi") == 0)
  VAR_8 = VAR_2;
 else if (FUNC_3(VAR_6, "ulpi") == 0)
  VAR_8 = VAR_0;
 else
  FUNC_2(VAR_3, "Unsupported phy type: %s\n", VAR_6);
 FUNC_1(VAR_6);
 return (VAR_8);
}
