
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int lua_State ;


 char* VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static const char *FUNC_4 (lua_State *VAR_1, const char *VAR_2,
                                ptrdiff_t VAR_3, char *VAR_4) {
  const char *VAR_5 = VAR_0;
  int VAR_6 = 1;
  for (; *VAR_5 != '\0' && VAR_6 <= VAR_3; VAR_5 += VAR_6) {
    if (*VAR_5 == '|')
      VAR_6++;
    else if (FUNC_2(VAR_2, VAR_5, VAR_6) == 0) {
      FUNC_3(VAR_4, VAR_2, VAR_6);
      VAR_4[VAR_6] = '\0';
      return VAR_2 + VAR_6;
    }
  }
  FUNC_0(VAR_1, 1,
    FUNC_1(VAR_1, "invalid conversion specifier '%%%s'", VAR_2));
  return VAR_2;
}
