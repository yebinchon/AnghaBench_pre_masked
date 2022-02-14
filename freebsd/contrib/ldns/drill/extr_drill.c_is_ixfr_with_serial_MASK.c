
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_3(const char* VAR_0, uint32_t *VAR_1)
{
 char* VAR_2;
 if (FUNC_0(VAR_0) > 5 &&
  FUNC_1(VAR_0, "IXFR", 4) == 0 &&
  VAR_0[4] == '=') {
  *VAR_1 = (uint32_t) FUNC_2((VAR_0+5), &VAR_2, 10);
  return 1;
 }
 return 0;
}
