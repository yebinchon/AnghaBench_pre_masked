
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 char const VAR_2 ;
 char const VAR_3 ;
 char const VAR_4 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_5, const char *VAR_6)
{
 for (;;) {
  if (*VAR_5 == VAR_4 || *VAR_5 == VAR_3) {
   VAR_5++;
   continue;
  }
  if (*VAR_5 == VAR_2)
   VAR_5++;
  else if (VAR_0[(int)*VAR_5] == VAR_1)
   return (0);
  if (*VAR_5 != *VAR_6)
   return (0);
  if (*VAR_5 == '\0')
   return (1);
  VAR_5++;
  VAR_6++;
 }
}
