
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bConfigIndex; scalar_t__ bIfaceIndex; } ;
struct usb_attach_arg {scalar_t__ usb_mode; struct drvdb_ent* driver_ivar; TYPE_1__ info; } ;
struct drvdb_ent {int dummy; } ;
typedef int matchfuncptr ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int * FUNC_1 (int ,char*) ;
 struct drvdb_ent* FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5)
{
 struct drvdb_ent *VAR_6;
 struct usb_attach_arg *VAR_7 = FUNC_0(VAR_5);

 if (VAR_7->usb_mode != VAR_3)
  return (VAR_0);
 if (VAR_7->info.bConfigIndex != VAR_1)
  return (VAR_0);
 if (VAR_7->info.bIfaceIndex != VAR_2)
  return (VAR_0);

 if (FUNC_1(0, "USB Bus") == ((void*)0))
  return (VAR_0);

 VAR_6 = FUNC_2((matchfuncptr)VAR_4, VAR_5);
 if (VAR_6 == ((void*)0))
  return (VAR_0);
 VAR_7->driver_ivar = VAR_6;

 return (0);
}
