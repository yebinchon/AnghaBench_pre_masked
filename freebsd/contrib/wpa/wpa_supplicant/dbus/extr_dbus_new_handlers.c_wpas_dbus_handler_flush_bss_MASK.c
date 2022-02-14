
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
typedef int dbus_uint32_t ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int ) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (struct wpa_supplicant*,int ) ;

DBusMessage * FUNC_3(DBusMessage *VAR_2,
       struct wpa_supplicant *VAR_3)
{
 dbus_uint32_t VAR_4;

 FUNC_0(VAR_2, ((void*)0), VAR_1, &VAR_4,
         VAR_0);

 if (VAR_4 == 0)
  FUNC_1(VAR_3);
 else
  FUNC_2(VAR_3, VAR_4);

 return ((void*)0);
}
