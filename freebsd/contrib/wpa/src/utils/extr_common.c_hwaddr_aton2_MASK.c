
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int ) ;

int FUNC_1(const char *VAR_0, u8 *VAR_1)
{
 int VAR_2;
 const char *VAR_3 = VAR_0;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  int VAR_4, VAR_5;

  while (*VAR_3 == ':' || *VAR_3 == '.' || *VAR_3 == '-')
   VAR_3++;

  VAR_4 = FUNC_0(*VAR_3++);
  if (VAR_4 < 0)
   return -1;
  VAR_5 = FUNC_0(*VAR_3++);
  if (VAR_5 < 0)
   return -1;
  *VAR_1++ = (VAR_4 << 4) | VAR_5;
 }

 return VAR_3 - VAR_0;
}
