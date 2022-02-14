
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0)
{
 const char *VAR_1 = FUNC_1(VAR_0, '/');

 if (VAR_1) {
  int VAR_2 = VAR_1 - VAR_0;
  char *VAR_3 = FUNC_2(VAR_2 + 1);

  FUNC_0(VAR_3, VAR_0, VAR_2);
  VAR_3[VAR_2] = '\0';
  return VAR_3;
 }
 return ((void*)0);
}
