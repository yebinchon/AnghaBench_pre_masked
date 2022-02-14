
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;

unsigned long FUNC_0(unsigned long VAR_2, int VAR_3, int VAR_4,
   int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10 = 1;

 if (!VAR_3)
  return VAR_2;
 if (!VAR_4)
  return VAR_2;

 if (!VAR_2)
  return VAR_2;

 if (VAR_4 >= 8192)
  VAR_4 = 8192;

 VAR_3 = VAR_3 * VAR_4 / 8192;
 VAR_3 += VAR_5;

 if (!VAR_3)
  return VAR_2;

 VAR_7 = VAR_3 < 0 ? 1 : 0;

 if (VAR_3 < 0)
  VAR_3 *= -1;
 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;





 while (VAR_3 > 2399)
 {
  VAR_10 *= 4;
  VAR_3 -= 2400;
 }

 VAR_8 = VAR_3 / 100;
 if (VAR_8 > 99)
  VAR_8 = 99;
 VAR_9 = VAR_3 % 100;

 VAR_6 = (int) (VAR_1[VAR_8] * VAR_10 * VAR_0[VAR_9]) / 10000;

 if (VAR_7)
  return (VAR_2 * 10000) / VAR_6;
 else
  return (VAR_2 * VAR_6) / 10000;
}
