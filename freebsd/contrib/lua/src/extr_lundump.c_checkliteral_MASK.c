
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LoadState ;
typedef int LUA_SIGNATURE ;
typedef int LUAC_DATA ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,size_t) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4 (LoadState *VAR_0, const char *VAR_1, const char *VAR_2) {
  char VAR_3[sizeof(LUA_SIGNATURE) + sizeof(LUAC_DATA)];
  size_t VAR_4 = FUNC_3(VAR_1);
  FUNC_0(VAR_0, VAR_3, VAR_4);
  if (FUNC_2(VAR_1, VAR_3, VAR_4) != 0)
    FUNC_1(VAR_0, VAR_2);
}
