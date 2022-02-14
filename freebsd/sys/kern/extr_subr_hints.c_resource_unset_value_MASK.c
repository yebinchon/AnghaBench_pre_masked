
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int varname ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (int*,int *,char const*,int*,char const*,int *,char const**,int *,int *,int *,int *,char const**) ;
 int FUNC_3 (char*) ;

int
FUNC_4(const char *VAR_1, int VAR_2, const char *VAR_3)
{
 char VAR_4[128];
 const char *VAR_5, *VAR_6;
 int VAR_7, VAR_8;
 size_t VAR_9;

 VAR_8 = 0;
 VAR_7 = FUNC_2(&VAR_8, ((void*)0), VAR_1, &VAR_2, VAR_3, ((void*)0),
     &VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_6);
 if (VAR_7)
  return (VAR_7);

 VAR_5 -= FUNC_3("hint.");
 VAR_9 = VAR_6 - VAR_5 - 1;
 if (VAR_9 > sizeof(VAR_4) - 1)
  return (VAR_0);
 FUNC_1(VAR_4, VAR_5, VAR_9);
 VAR_4[VAR_9] = '\0';
 return (FUNC_0(VAR_4));
}
