
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, const char *VAR_2)
{
 const int VAR_3 = 3;
 int VAR_4 = 0;

 while (VAR_1[0] != '\0' && VAR_2[0] != '\0') {
  if (VAR_1[0] == VAR_2[0]) {
   VAR_1++;
   VAR_2++;
   continue;
  }
  if (++VAR_4 > VAR_3)
   return VAR_0;
  if (VAR_1[1] == VAR_2[1]) {
   VAR_1++;
   VAR_2++;
  } else if (VAR_1[0] == VAR_2[1] && VAR_1[1] == VAR_2[0]) {
   VAR_1 += 2;
   VAR_2 += 2;
  } else if (VAR_1[0] == VAR_2[1])
   VAR_2++;
  else if (VAR_1[1] == VAR_2[0])
   VAR_1++;
  else
   return VAR_0;
 }
 VAR_4 += FUNC_0(VAR_1) + FUNC_0(VAR_2);
 return VAR_4 > VAR_3 ? VAR_0 : VAR_4;
}
