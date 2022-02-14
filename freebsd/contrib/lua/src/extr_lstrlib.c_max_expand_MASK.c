
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int MatchState ;


 char* FUNC_0 (int *,char const*,char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,char const*,char const*) ;

__attribute__((used)) static const char *FUNC_2 (MatchState *VAR_0, const char *VAR_1,
                                 const char *VAR_2, const char *VAR_3) {
  ptrdiff_t VAR_4 = 0;
  while (FUNC_1(VAR_0, VAR_1 + VAR_4, VAR_2, VAR_3))
    VAR_4++;

  while (VAR_4>=0) {
    const char *VAR_5 = FUNC_0(VAR_0, (VAR_1+VAR_4), VAR_3+1);
    if (VAR_5) return VAR_5;
    VAR_4--;
  }
  return ((void*)0);
}
