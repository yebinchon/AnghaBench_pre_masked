
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ,int *) ;

dbus_bool_t FUNC_3(DBusMessageIter *VAR_4,
      const u8 *VAR_5,
      size_t VAR_6)
{
 DBusMessageIter VAR_7;
 size_t VAR_8;

 if (!VAR_4 || !VAR_5 ||
     !FUNC_2(VAR_4, VAR_0,
           VAR_2,
           &VAR_7))
  return VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if (!FUNC_0(&VAR_7,
          VAR_1,
          &(VAR_5[VAR_8])))
   return VAR_3;
 }

 return FUNC_1(VAR_4, &VAR_7);
}
