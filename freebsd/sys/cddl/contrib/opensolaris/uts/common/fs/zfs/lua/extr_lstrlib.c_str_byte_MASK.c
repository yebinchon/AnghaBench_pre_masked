
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,size_t) ;
 int FUNC_4 (int *,int ) ;
 size_t FUNC_5 (int ,size_t) ;
 int FUNC_6 (char const) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_0) {
  size_t VAR_1;
  const char *VAR_2 = FUNC_0(VAR_0, 1, &VAR_1);
  size_t VAR_3 = FUNC_5(FUNC_3(VAR_0, 2, 1), VAR_1);
  size_t VAR_4 = FUNC_5(FUNC_3(VAR_0, 3, VAR_3), VAR_1);
  int VAR_5, VAR_6;
  if (VAR_3 < 1) VAR_3 = 1;
  if (VAR_4 > VAR_1) VAR_4 = VAR_1;
  if (VAR_3 > VAR_4) return 0;
  VAR_5 = (int)(VAR_4 - VAR_3 + 1);
  if (VAR_3 + VAR_5 <= VAR_4)
    return FUNC_2(VAR_0, "string slice too long");
  FUNC_1(VAR_0, VAR_5, "string slice too long");
  for (VAR_6=0; VAR_6<VAR_5; VAR_6++)
    FUNC_4(VAR_0, FUNC_6(VAR_2[VAR_3+VAR_6-1]));
  return VAR_5;
}
