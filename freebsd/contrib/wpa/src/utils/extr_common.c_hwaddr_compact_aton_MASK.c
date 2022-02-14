
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int ) ;

int FUNC_1(const char *VAR_0, u8 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  int VAR_3, VAR_4;

  VAR_3 = FUNC_0(*VAR_0++);
  if (VAR_3 < 0)
   return -1;
  VAR_4 = FUNC_0(*VAR_0++);
  if (VAR_4 < 0)
   return -1;
  *VAR_1++ = (VAR_3 << 4) | VAR_4;
 }

 return 0;
}
