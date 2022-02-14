
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,size_t) ;
 char* FUNC_7 (char const*,int*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_1) {
  size_t VAR_2;
  const char *VAR_3 = FUNC_1(VAR_1, 1, &VAR_2);
  lua_Integer VAR_4 = FUNC_6(FUNC_4(VAR_1, 2, 1), VAR_2);
  lua_Integer VAR_5 = FUNC_6(FUNC_4(VAR_1, 3, VAR_4), VAR_2);
  int VAR_6;
  const char *VAR_7;
  FUNC_0(VAR_1, VAR_4 >= 1, 2, "out of range");
  FUNC_0(VAR_1, VAR_5 <= (lua_Integer)VAR_2, 3, "out of range");
  if (VAR_4 > VAR_5) return 0;
  if (VAR_5 - VAR_4 >= VAR_0)
    return FUNC_3(VAR_1, "string slice too long");
  VAR_6 = (int)(VAR_5 - VAR_4) + 1;
  FUNC_2(VAR_1, VAR_6, "string slice too long");
  VAR_6 = 0;
  VAR_7 = VAR_3 + VAR_5;
  for (VAR_3 += VAR_4 - 1; VAR_3 < VAR_7;) {
    int VAR_8;
    VAR_3 = FUNC_7(VAR_3, &VAR_8);
    if (VAR_3 == ((void*)0))
      return FUNC_3(VAR_1, "invalid UTF-8 code");
    FUNC_5(VAR_1, VAR_8);
    VAR_6++;
  }
  return VAR_6;
}
