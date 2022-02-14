
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ intmax_t ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0, const char *VAR_1)
{
 intmax_t VAR_2, VAR_3;


 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 > VAR_3)
  return 1;

 if (VAR_2 < VAR_3)
  return -1;

 return 0;
}
