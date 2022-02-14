
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;



__attribute__((used)) static int FUNC_0(u8 *VAR_0, u8 VAR_1, u8 *VAR_2, u8 VAR_3)
{
 u8 VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   if (VAR_0[VAR_5] == VAR_2[VAR_4])
    return VAR_0[VAR_5];
 return -1;
}
