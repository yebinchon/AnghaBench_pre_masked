
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; int confname; } ;
struct TYPE_2__ {int update_config; } ;
typedef int DBusMessage ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int * FUNC_1 (int *,char*) ;

DBusMessage * FUNC_2(DBusMessage *VAR_0,
         struct wpa_supplicant *VAR_1)
{
 int VAR_2;

 if (!VAR_1->conf->update_config) {
  return FUNC_1(
   VAR_0,
   "Not allowed to update configuration (update_config=0)");
 }

 VAR_2 = FUNC_0(VAR_1->confname, VAR_1->conf);
 if (VAR_2)
  return FUNC_1(
   VAR_0, "Failed to update configuration");
 return ((void*)0);
}
