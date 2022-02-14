
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,char*,char*,void*,char*,void*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(char **VAR_0, char *VAR_1, uintptr_t VAR_2, uintptr_t VAR_3)
{
 char VAR_4[256], *VAR_5 = VAR_4, *VAR_6;
 int VAR_7, VAR_8;

 if (*VAR_0 == ((void*)0)) {
  *VAR_0 = FUNC_2(1);
  *VAR_0[0] = '\0';
 }





 (void) FUNC_3(VAR_5, "%s(%s >= %p && %s < %p)", *VAR_0[0] != '\0' ?
     " || " : "", VAR_1, (void *)VAR_2, VAR_1, (void *)(VAR_2 + VAR_3));


 VAR_8 = (VAR_7 = FUNC_5(*VAR_0) + 1) + FUNC_5(VAR_5);
 VAR_6 = FUNC_2(VAR_8);
 FUNC_0(*VAR_0, VAR_6, VAR_7);
 (void) FUNC_4(VAR_6, VAR_5);
 FUNC_1(*VAR_0);
 *VAR_0 = VAR_6;
}
