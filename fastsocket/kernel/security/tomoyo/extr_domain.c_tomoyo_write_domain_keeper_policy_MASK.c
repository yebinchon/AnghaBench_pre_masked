
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int const,int const) ;

int FUNC_2(char *VAR_0, const bool VAR_1,
          const bool VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_0, " from ");

 if (VAR_3) {
  *VAR_3 = '\0';
  return FUNC_1(VAR_3 + 6, VAR_0, VAR_1,
        VAR_2);
 }
 return FUNC_1(VAR_0, ((void*)0), VAR_1, VAR_2);
}
