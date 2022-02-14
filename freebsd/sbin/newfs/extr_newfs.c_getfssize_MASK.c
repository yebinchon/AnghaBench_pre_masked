
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ intmax_t ;


 int FUNC_0 (int,char*,char const*,scalar_t__) ;

void
FUNC_1(intmax_t *VAR_0, const char *VAR_1, intmax_t VAR_2, intmax_t VAR_3)
{
 intmax_t VAR_4;

 VAR_4 = VAR_2 - VAR_3;
 if (VAR_4 <= 0)
  FUNC_0(1, "%s: reserved not less than device size %jd",
      VAR_1, VAR_2);
 if (*VAR_0 == 0)
  *VAR_0 = VAR_4;
 else if (*VAR_0 > VAR_4)
  FUNC_0(1, "%s: maximum file system size is %jd",
      VAR_1, VAR_4);
}
