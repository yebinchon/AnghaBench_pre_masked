
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int conn_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char**,char*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char const*,char*) ;

__attribute__((used)) static int
FUNC_5(conn_t *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_0("basic: usr: [%s]\n", VAR_2);
 FUNC_0("basic: pwd: [%s]\n", VAR_3);
 if (FUNC_1(&VAR_4, "%s:%s", VAR_2, VAR_3) == -1)
  return (-1);
 VAR_5 = FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0))
  return (-1);
 VAR_6 = FUNC_4(VAR_0, "%s: Basic %s", VAR_1, VAR_5);
 FUNC_2(VAR_5);
 return (VAR_6);
}
