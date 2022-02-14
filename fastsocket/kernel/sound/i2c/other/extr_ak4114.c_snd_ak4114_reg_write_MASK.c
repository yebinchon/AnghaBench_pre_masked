
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4114 {unsigned char* regmap; unsigned char* txcsb; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct ak4114*,unsigned char,unsigned char) ;

void FUNC_1(struct ak4114 *VAR_3, unsigned char VAR_4, unsigned char VAR_5, unsigned char VAR_6)
{
 if (VAR_4 <= VAR_0)
  FUNC_0(VAR_3, VAR_4, (VAR_3->regmap[VAR_4] & ~VAR_5) | VAR_6);
 else if (VAR_4 >= VAR_1 && VAR_4 <= VAR_2)
  FUNC_0(VAR_3, VAR_4,
     (VAR_3->txcsb[VAR_4-VAR_1] & ~VAR_5) | VAR_6);
}
