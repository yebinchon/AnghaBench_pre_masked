
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbus_bool_t ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,char const*,int const) ;
 int FUNC_2 (int *,int const,void const*) ;
 int FUNC_3 (int *,int ,char const*,int *) ;
 char* FUNC_4 (int const) ;

__attribute__((used)) static dbus_bool_t FUNC_5(DBusMessageIter *VAR_2,
        const char *VAR_3,
        const int VAR_4,
        const void *VAR_5)
{
 DBusMessageIter VAR_6, VAR_7;
 const char *VAR_8 = ((void*)0);

 if (VAR_3 == ((void*)0))
  return VAR_1;

 VAR_8 = FUNC_4(VAR_4);
 if (!VAR_8)
  return VAR_1;

 if (!FUNC_1(VAR_2, &VAR_6,
         VAR_3, VAR_4) ||
     !FUNC_3(&VAR_6,
           VAR_0,
           VAR_8, &VAR_7) ||
     !FUNC_2(&VAR_7, VAR_4, VAR_5))
  return VAR_1;

 return FUNC_0(VAR_2, &VAR_6,
         &VAR_7);
}
