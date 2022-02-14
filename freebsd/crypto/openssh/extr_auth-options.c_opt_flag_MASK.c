
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, int VAR_1, const char **VAR_2)
{
 size_t VAR_3 = FUNC_0(VAR_0);
 const char *VAR_4 = *VAR_2;
 int VAR_5 = 0;

 if (VAR_1 && FUNC_1(VAR_4, "no-", 3) == 0) {
  VAR_4 += 3;
  VAR_5 = 1;
 }
 if (FUNC_1(VAR_4, VAR_0, VAR_3) == 0) {
  *VAR_2 = VAR_4 + VAR_3;
  return VAR_5 ? 0 : 1;
 }
 return -1;
}
