
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,char*,char const*) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1, int VAR_2) {
  char VAR_3[VAR_0];
  char *VAR_4 = VAR_3;
  size_t VAR_5;
  const char *VAR_6 = FUNC_0(VAR_1, VAR_2);
  int VAR_7 = FUNC_5(VAR_1, VAR_4, VAR_6);
  if (VAR_7 == 0)
    return 0;
  FUNC_2(VAR_1, 1);
  VAR_5 = FUNC_6(VAR_4);
  if (VAR_5 > 0 && VAR_4[VAR_5-1] == '\n')
    VAR_4[--VAR_5] = '\0';
  if (VAR_2 && VAR_4[0] == '=')
    FUNC_3(VAR_1, "return %s", VAR_4 + 1);
  else
    FUNC_4(VAR_1, VAR_4, VAR_5);
  FUNC_1(VAR_1, VAR_4);
  return 1;
}
