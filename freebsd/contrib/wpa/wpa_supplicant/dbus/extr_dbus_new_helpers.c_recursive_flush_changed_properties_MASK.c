
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DBusConnection ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char***) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,int,char*,char const*,char*) ;
 int FUNC_3 (int *,char const*) ;

__attribute__((used)) static void FUNC_4(DBusConnection *VAR_1,
            const char *VAR_2)
{
 char **VAR_3 = ((void*)0);
 char VAR_4[VAR_0];
 int VAR_5;

 FUNC_3(VAR_1, VAR_2);

 if (!FUNC_0(VAR_1, VAR_2, &VAR_3))
  goto out;

 for (VAR_5 = 0; VAR_3[VAR_5]; VAR_5++) {
  FUNC_2(VAR_4, VAR_0,
       "%s/%s", VAR_2, VAR_3[VAR_5]);
  FUNC_4(VAR_1, VAR_4);
 }

out:
 FUNC_1(VAR_3);
}
