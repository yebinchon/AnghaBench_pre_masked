
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char*,char const*,int) ;
 char** FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static char ** FUNC_6(void *VAR_0, const char *VAR_1,
           int VAR_2)
{
 char **VAR_3;
 const char *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_5(VAR_1, ' ');
 if (VAR_4 == ((void*)0) || VAR_1 + VAR_2 < VAR_4)
  return FUNC_1();

 VAR_5 = FUNC_3(VAR_2 + 1);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_5, VAR_1, VAR_2);
 VAR_5[VAR_4 - VAR_1] = '\0';
 VAR_3 = FUNC_0(VAR_5, VAR_1, VAR_2);
 FUNC_2(VAR_5);
 return VAR_3;
}
