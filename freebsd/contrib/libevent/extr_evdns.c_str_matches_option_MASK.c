
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static inline int
FUNC_2(const char *VAR_0, const char *VAR_1)
{



 size_t VAR_2 = FUNC_0(VAR_1);
 size_t VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == VAR_2 || VAR_3 == VAR_2 - 1)
  return !FUNC_1(VAR_0, VAR_1, VAR_3);
 else if (VAR_3 > VAR_2)
  return !FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  return 0;
}
