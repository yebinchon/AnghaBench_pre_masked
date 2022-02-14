
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, size_t VAR_1, int *VAR_2, const char *VAR_3)
{
  FUNC_1(VAR_0, VAR_3, VAR_1);
  FUNC_1(VAR_0, ", ", VAR_1);
  *VAR_2 += FUNC_0(VAR_3) + 2;
  if (*VAR_2 > 60) {
    FUNC_1(VAR_0, "\t\n", VAR_1);
    *VAR_2 = 0;
  }
}
