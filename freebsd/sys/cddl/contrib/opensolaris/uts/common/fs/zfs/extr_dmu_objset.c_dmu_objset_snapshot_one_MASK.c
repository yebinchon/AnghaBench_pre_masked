
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,char const*,char const*) ;
 int FUNC_5 (char*) ;

int
FUNC_6(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;
 char *VAR_3 = FUNC_4("%s@%s", VAR_0, VAR_1);
 nvlist_t *VAR_4 = FUNC_2();

 FUNC_1(VAR_4, VAR_3);
 FUNC_5(VAR_3);
 VAR_2 = FUNC_0(VAR_4, ((void*)0), ((void*)0));
 FUNC_3(VAR_4);
 return (VAR_2);
}
