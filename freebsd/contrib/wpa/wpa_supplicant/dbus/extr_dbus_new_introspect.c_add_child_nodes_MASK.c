
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
typedef int DBusConnection ;


 int FUNC_0 (int *,char const*,char***) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (struct wpabuf*,char*,char*) ;

__attribute__((used)) static void FUNC_3(struct wpabuf *VAR_0, DBusConnection *VAR_1,
       const char *VAR_2)
{
 char **VAR_3;
 int VAR_4;


 FUNC_0(VAR_1, VAR_2, &VAR_3);
 for (VAR_4 = 0; VAR_3[VAR_4]; VAR_4++)
  FUNC_2(VAR_0, "<node name=\"%s\"/>", VAR_3[VAR_4]);
 FUNC_1(VAR_3);
}
