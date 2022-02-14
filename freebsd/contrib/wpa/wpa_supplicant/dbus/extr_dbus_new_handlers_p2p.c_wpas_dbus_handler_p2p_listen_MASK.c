
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
typedef scalar_t__ dbus_int32_t ;
struct TYPE_2__ {struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,scalar_t__*,int ) ;
 int * FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*,unsigned int) ;

DBusMessage * FUNC_4(DBusMessage *VAR_3,
        struct wpa_supplicant *VAR_4)
{
 dbus_int32_t VAR_5 = 0;

 if (!FUNC_0(VAR_3, ((void*)0), VAR_0, &VAR_5,
       VAR_1))
  return FUNC_2(VAR_3);

 VAR_4 = VAR_4->global->p2p_init_wpa_s;

 if (FUNC_3(VAR_4, (unsigned int) VAR_5)) {
  return FUNC_1(VAR_3,
           VAR_2,
           "Could not start P2P listen");
 }

 return ((void*)0);
}
