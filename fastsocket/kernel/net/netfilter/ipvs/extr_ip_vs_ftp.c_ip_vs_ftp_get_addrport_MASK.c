
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, char *VAR_1,
      const char *VAR_2, size_t VAR_3, char VAR_4,
      __be32 *VAR_5, __be16 *VAR_6,
      char **VAR_7, char **VAR_8)
{
 unsigned char VAR_9[6];
 int VAR_10 = 0;

 if (VAR_1 - VAR_0 < VAR_3) {

  if (FUNC_2(VAR_0, VAR_2, VAR_1 - VAR_0) == 0)
   return -1;
  else
   return 0;
 }

 if (FUNC_2(VAR_0, VAR_2, VAR_3) != 0) {
  return 0;
 }
 *VAR_7 = VAR_0 + VAR_3;

 for (VAR_0 = *VAR_7; *VAR_0 != VAR_4; VAR_0++) {
  if (VAR_0 == VAR_1)
   return -1;
 }
 *VAR_8 = VAR_0;

 FUNC_1(VAR_9, 0, sizeof(VAR_9));
 for (VAR_0 = *VAR_7; VAR_0 != *VAR_8; VAR_0++) {
  if (*VAR_0 >= '0' && *VAR_0 <= '9') {
   VAR_9[VAR_10] = VAR_9[VAR_10]*10 + *VAR_0 - '0';
  } else if (*VAR_0 == ',' && VAR_10 < 5) {
   VAR_10++;
  } else {

   return -1;
  }
 }

 if (VAR_10 != 5)
  return -1;

 *VAR_5 = FUNC_0((__be32 *)VAR_9);
 *VAR_6 = FUNC_0((__be16 *)(VAR_9 + 4));
 return 1;
}
