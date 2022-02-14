
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_object_desc {int user_data; struct wpa_dbus_method_desc* methods; } ;
struct wpa_dbus_method_desc {int * (* method_handler ) (int *,int ) ;int * dbus_method; int * dbus_interface; } ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,struct wpa_dbus_method_desc const*) ;
 int FUNC_5 (int *,char const*,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,char*,char const*,char const*,int ) ;

__attribute__((used)) static DBusMessage * FUNC_8(DBusMessage *VAR_5,
     struct wpa_dbus_object_desc *VAR_6)
{
 const struct wpa_dbus_method_desc *VAR_7 = VAR_6->methods;
 const char *VAR_8;
 const char *VAR_9;

 VAR_8 = FUNC_1(VAR_5);
 VAR_9 = FUNC_0(VAR_5);


 while (VAR_7 && VAR_7->dbus_method) {

  if (!FUNC_5(VAR_7->dbus_method, VAR_8,
    VAR_4) &&
      !FUNC_5(VAR_7->dbus_interface, VAR_9,
    VAR_3))
   break;

  VAR_7++;
 }
 if (VAR_7 == ((void*)0) || VAR_7->dbus_method == ((void*)0)) {
  FUNC_7(VAR_2, "no method handler for %s.%s on %s",
      VAR_9, VAR_8,
      FUNC_2(VAR_5));
  return FUNC_3(VAR_5,
           VAR_1, ((void*)0));
 }

 if (!FUNC_4(VAR_5, VAR_7)) {
  return FUNC_3(VAR_5, VAR_0,
           ((void*)0));
 }

 return VAR_7->method_handler(VAR_5, VAR_6->user_data);
}
