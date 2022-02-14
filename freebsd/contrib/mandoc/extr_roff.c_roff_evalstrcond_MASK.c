
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int *VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_2 = VAR_0 + *VAR_1;
 VAR_3 = VAR_2 + 1;
 VAR_4 = FUNC_0(VAR_3, *VAR_2);

 if (((void*)0) == VAR_4)
  goto out;

 while ('\0' != *++VAR_4) {
  if (*VAR_3 != *VAR_4) {
   VAR_4 = FUNC_0(VAR_4, *VAR_2);
   break;
  }
  if (*VAR_4 == *VAR_2) {
   VAR_5 = 1;
   break;
  }
  VAR_3++;
 }

out:
 if (((void*)0) == VAR_4)
  VAR_4 = FUNC_0(VAR_3, '\0');
 else if (*VAR_4 != '\0')
  VAR_4++;
 *VAR_1 = VAR_4 - VAR_0;
 return VAR_5;
}
