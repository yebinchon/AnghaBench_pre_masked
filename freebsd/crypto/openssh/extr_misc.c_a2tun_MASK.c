
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char const*,int ,int ,char const**) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_3, int *VAR_4)
{
 const char *VAR_5 = ((void*)0);
 char *VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_4 != ((void*)0)) {
  *VAR_4 = VAR_0;
  VAR_6 = FUNC_4(VAR_3);
  if ((VAR_7 = FUNC_2(VAR_6, ':')) == ((void*)0)) {
   FUNC_0(VAR_6);
   return (FUNC_5(VAR_3, ((void*)0)));
  }
  VAR_7[0] = '\0'; VAR_7++;
  *VAR_4 = FUNC_5(VAR_7, ((void*)0));
  VAR_8 = FUNC_5(VAR_6, ((void*)0));
  FUNC_0(VAR_6);
  return (*VAR_4 == VAR_1 ? *VAR_4 : VAR_8);
 }

 if (FUNC_1(VAR_3, "any") == 0)
  return (VAR_0);

 VAR_8 = FUNC_3(VAR_3, 0, VAR_2, &VAR_5);
 if (VAR_5 != ((void*)0))
  return (VAR_1);

 return (VAR_8);
}
