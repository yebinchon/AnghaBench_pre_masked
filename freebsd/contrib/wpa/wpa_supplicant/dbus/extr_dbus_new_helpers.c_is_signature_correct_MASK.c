
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_method_desc {struct wpa_dbus_argument* args; } ;
struct wpa_dbus_argument {scalar_t__ dir; int type; scalar_t__ name; } ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t,char*,int ) ;
 scalar_t__ FUNC_2 (size_t,int) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(DBusMessage *VAR_2,
    const struct wpa_dbus_method_desc *VAR_3)
{


 char VAR_4[256], *VAR_5;
 const char *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;
 const struct wpa_dbus_argument *VAR_8;

 VAR_5 = VAR_4;
 *VAR_5 = '\0';

 for (VAR_8 = VAR_3->args; VAR_8 && VAR_8->name; VAR_8++) {
  if (VAR_8->dir == VAR_0) {
   size_t VAR_9 = VAR_4 + 256 - VAR_5;

   VAR_7 = FUNC_1(VAR_5, VAR_9, "%s", VAR_8->type);
   if (FUNC_2(VAR_9, VAR_7))
    return 0;
   VAR_5 += VAR_7;
  }
 }

 return !FUNC_3(VAR_4, VAR_6, 256);
}
