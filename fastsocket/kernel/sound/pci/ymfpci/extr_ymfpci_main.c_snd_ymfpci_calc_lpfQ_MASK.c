
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1)
{
 u32 VAR_2;
 static u32 VAR_3[8] = {
  0x35280000, 0x34A70000, 0x32020000, 0x31770000,
  0x31390000, 0x31C90000, 0x33D00000, 0x40000000
 };

 if (VAR_1 == 44100)
  return 0x370A0000;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  if (VAR_1 <= VAR_0[VAR_2])
   return VAR_3[VAR_2];
 return VAR_3[0];
}
