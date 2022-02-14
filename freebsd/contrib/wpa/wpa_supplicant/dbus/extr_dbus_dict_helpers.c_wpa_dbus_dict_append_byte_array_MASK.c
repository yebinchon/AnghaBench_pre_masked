
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dbus_uint32_t ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char const*,scalar_t__ const) ;

dbus_bool_t FUNC_1(DBusMessageIter *VAR_1,
         const char *VAR_2,
         const char *VAR_3,
         const dbus_uint32_t VAR_4)
{
 if (!VAR_2 || (!VAR_3 && VAR_4 != 0))
  return VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_4);
}
