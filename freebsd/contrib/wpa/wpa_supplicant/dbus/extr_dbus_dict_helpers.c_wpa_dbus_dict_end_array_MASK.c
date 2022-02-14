
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbus_bool_t ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;

dbus_bool_t FUNC_2(DBusMessageIter *VAR_1,
        DBusMessageIter *VAR_2,
        DBusMessageIter *VAR_3,
        DBusMessageIter *VAR_4)
{
 if (!VAR_1 || !VAR_2 || !VAR_3 || !VAR_4 ||
     !FUNC_1(VAR_3, VAR_4))
  return VAR_0;

 return FUNC_0(VAR_1, VAR_2,
         VAR_3);
}
