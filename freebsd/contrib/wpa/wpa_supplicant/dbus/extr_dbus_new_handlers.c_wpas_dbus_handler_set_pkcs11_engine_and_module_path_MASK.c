
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ dbus_new_path; TYPE_1__* global; } ;
struct TYPE_2__ {int dbus; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,scalar_t__,int ,char*) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*,char*,char*) ;

DBusMessage * FUNC_8(
 DBusMessage *VAR_3, struct wpa_supplicant *VAR_4)
{
 DBusMessageIter VAR_5;
 char *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);

 FUNC_1(VAR_3, &VAR_5);
 FUNC_0(&VAR_5, &VAR_6);
 if (VAR_6 == ((void*)0)) {
  return FUNC_3(
   VAR_3, VAR_1,
   "Invalid pkcs11_engine_path argument");
 }

 if (FUNC_5(VAR_6))
  VAR_7 = VAR_6;

 FUNC_2(&VAR_5);
 FUNC_0(&VAR_5, &VAR_6);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_7);
  return FUNC_3(
   VAR_3, VAR_1,
   "Invalid pkcs11_module_path argument");
 }

 if (FUNC_5(VAR_6))
  VAR_8 = VAR_6;

 if (FUNC_7(VAR_4, VAR_7,
         VAR_8))
  return FUNC_3(
   VAR_3, VAR_0,
   "Reinit of the EAPOL state machine with the new PKCS #11 engine and module path failed.");

 if (VAR_4->dbus_new_path) {
  FUNC_6(
   VAR_4->global->dbus, VAR_4->dbus_new_path,
   VAR_2, "PKCS11EnginePath");
  FUNC_6(
   VAR_4->global->dbus, VAR_4->dbus_new_path,
   VAR_2, "PKCS11ModulePath");
 }

 return ((void*)0);
}
