
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const u8 *VAR_1, int *VAR_2, int *VAR_3)
{

 *VAR_2 = 4;
 *VAR_3 = VAR_1[2];
 if (*VAR_3 == 0)
  *VAR_3 = 127;
 if (*VAR_3 < 4 || *VAR_3 > 127)
  return -VAR_0;
 return 0;
}
