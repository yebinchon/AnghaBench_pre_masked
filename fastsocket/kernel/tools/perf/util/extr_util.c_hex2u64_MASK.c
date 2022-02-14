
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char const) ;

int FUNC_1(const char *VAR_0, u64 *VAR_1)
{
 const char *VAR_2 = VAR_0;
 *VAR_1 = 0;

 while (*VAR_2) {
  const int VAR_3 = FUNC_0(*VAR_2);

  if (VAR_3 < 0)
   break;

  *VAR_1 = (*VAR_1 << 4) | VAR_3;
  VAR_2++;
 }

 return VAR_2 - VAR_0;
}
