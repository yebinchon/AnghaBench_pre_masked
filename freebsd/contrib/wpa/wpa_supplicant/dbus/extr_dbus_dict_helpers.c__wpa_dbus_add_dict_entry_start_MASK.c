
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbus_bool_t ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char const**) ;
 int FUNC_1 (int *,int ,int *,int *) ;

__attribute__((used)) static dbus_bool_t FUNC_2(
 DBusMessageIter *VAR_3, DBusMessageIter *VAR_4,
 const char *VAR_5, const int VAR_6)
{
 if (!FUNC_1(VAR_3,
           VAR_0, ((void*)0),
           VAR_4))
  return VAR_2;

 return FUNC_0(VAR_4, VAR_1,
           &VAR_5);
}
