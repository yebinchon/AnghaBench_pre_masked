
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char **VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 const char *VAR_5;

 int VAR_6;

 for (VAR_5 = VAR_0, VAR_6 = VAR_3 > 10 ? VAR_3 : 10;
      VAR_4 * 10 <= VAR_3 && VAR_6 && *VAR_5 >= '0' && *VAR_5 <= '9';
      VAR_5++, VAR_6 /= 10) {
  VAR_4 *= 10;
  VAR_4 += *VAR_5 - '0';
 }
 if (VAR_5 == VAR_0) {
  VAR_4 = -1;
 } else if (VAR_4 < VAR_2 || VAR_4 > VAR_3) {
  VAR_4 = -2;
 }
 *VAR_1 = (const char*)VAR_5;
 return VAR_4;
}
