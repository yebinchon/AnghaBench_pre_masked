
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4117 {unsigned char* regmap; } ;


 int FUNC_0 (struct ak4117*,unsigned char,unsigned char) ;

void FUNC_1(struct ak4117 *VAR_0, unsigned char VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{
 if (VAR_1 >= 5)
  return;
 FUNC_0(VAR_0, VAR_1, (VAR_0->regmap[VAR_1] & ~VAR_2) | VAR_3);
}
