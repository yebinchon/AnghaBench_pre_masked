
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; unsigned int uint32_value; int * key; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (struct wpa_dbus_dict_entry*) ;
 int FUNC_3 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (struct wpa_supplicant*,unsigned int,unsigned int) ;

DBusMessage * FUNC_9(
 DBusMessage *VAR_1, struct wpa_supplicant *VAR_2)
{
 unsigned int VAR_3 = 0, VAR_4 = 0;
 struct wpa_dbus_dict_entry VAR_5;
 DBusMessageIter VAR_6;
 DBusMessageIter VAR_7;

 FUNC_0(VAR_1, &VAR_6);
 VAR_5.key = ((void*)0);

 if (!FUNC_5(&VAR_6, &VAR_7, ((void*)0)))
  goto error;

 while (FUNC_4(&VAR_7)) {
  if (!FUNC_3(&VAR_7, &VAR_5))
   goto error;

  if (FUNC_1(VAR_5.key, "period") == 0 &&
      VAR_5.type == VAR_0)
   VAR_3 = VAR_5.uint32_value;
  else if (FUNC_1(VAR_5.key, "interval") == 0 &&
    VAR_5.type == VAR_0)
   VAR_4 = VAR_5.uint32_value;
  else
   goto error_clear;
  FUNC_2(&VAR_5);
 }

 VAR_2 = VAR_2->global->p2p_init_wpa_s;

 if (FUNC_8(VAR_2, VAR_3, VAR_4))
  return FUNC_7(
   VAR_1, "failed to initiate a p2p_ext_listen.");

 return ((void*)0);

error_clear:
 FUNC_2(&VAR_5);
error:
 return FUNC_6(VAR_1, VAR_5.key);
}
