
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(const u8 *VAR_0, u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
  if (VAR_1 & VAR_0[VAR_2])
   return VAR_0[VAR_2];

 return 0;
}
