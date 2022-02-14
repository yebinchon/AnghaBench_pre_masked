
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(const u8 *VAR_1, const u8 *VAR_2, const u8 *VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if ((VAR_1[VAR_4] & VAR_3[VAR_4]) != (VAR_2[VAR_4] & VAR_3[VAR_4]))
   return 0;
 }
 return 1;
}
