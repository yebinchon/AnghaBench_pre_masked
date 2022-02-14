
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dbus_uint32_t ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *,char const*) ;

dbus_bool_t FUNC_3(DBusMessageIter *VAR_1,
           const char *VAR_2,
           const char **VAR_3,
           const dbus_uint32_t VAR_4)
{
 DBusMessageIter VAR_5, VAR_6, VAR_7;
 dbus_uint32_t VAR_8;

 if (!VAR_2 || (!VAR_3 && VAR_4 != 0) ||
     !FUNC_0(VAR_1, VAR_2,
           &VAR_5, &VAR_6,
           &VAR_7))
  return VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (!FUNC_2(&VAR_7,
           VAR_3[VAR_8]))
   return VAR_0;
 }

 return FUNC_1(VAR_1, &VAR_5,
           &VAR_6, &VAR_7);
}
