
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

int
FUNC_4(char **VAR_1, const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_1(((void*)0), 4, FUNC_2(VAR_2) + 1);
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3);
 VAR_6 = VAR_0;
 *VAR_1 = FUNC_0(VAR_4, VAR_5 + 1);
 if (*VAR_1 == ((void*)0)) {
  *VAR_1 = VAR_4;
  VAR_0 = VAR_6;
 }
 return (VAR_5);
}
