
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;






__attribute__((used)) static int FUNC_0(u32 *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 switch (VAR_1) {
 case 130:
  VAR_4 = 176;
  break;
 case 128:
  VAR_4 = 141;
  break;
 case 129:
  VAR_4 = 89;
  break;
 }
 VAR_2 = VAR_4 / 32;
 VAR_3 = VAR_4 % 32;

 return VAR_0[VAR_2] & (1U << VAR_3);
}
