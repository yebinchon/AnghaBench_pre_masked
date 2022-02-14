
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_int32_t ;


 int FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static u_int32_t
FUNC_1(const char *VAR_0, int *VAR_1)
{
 unsigned VAR_2;
 int VAR_3, VAR_4;
 char *VAR_5;

 VAR_2 = 0;
 VAR_4 = -1;
 *VAR_1 = 0;
 while(*VAR_0) {
  VAR_3 = FUNC_0(VAR_0, &VAR_5, 0);
  if (VAR_3 < 0 || VAR_3 > 31)
   return (0);
  while (VAR_4 != -1 && VAR_4 < VAR_3) {
   VAR_2 |= 1 << VAR_4++;
   (*VAR_1)++;
  }
  VAR_4 = -1;
  VAR_2 |= 1 << VAR_3;
  (*VAR_1)++;
  if (*VAR_5 == ',') {
   VAR_0 = VAR_5 + 1;
   continue;
  } else if (*VAR_5 == '-') {
   VAR_4 = VAR_3 + 1;
   VAR_0 = VAR_5 + 1;
   continue;
  } else if (!*VAR_5) {
   break;
  } else {
   return (0);
  }
 }
 return (VAR_2);
}
