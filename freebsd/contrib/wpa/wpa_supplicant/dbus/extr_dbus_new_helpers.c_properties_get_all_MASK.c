
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_object_desc {int dummy; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *,char*,struct wpa_dbus_object_desc*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static DBusMessage * FUNC_4(DBusMessage *VAR_1, char *VAR_2,
     struct wpa_dbus_object_desc *VAR_3)
{
 if (FUNC_3(FUNC_0(VAR_1), "s") != 0)
  return FUNC_1(VAR_1, VAR_0,
           ((void*)0));

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
