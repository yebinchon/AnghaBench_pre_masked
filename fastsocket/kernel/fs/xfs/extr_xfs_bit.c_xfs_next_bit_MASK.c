
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(uint *VAR_2, uint VAR_3, uint VAR_4)
{
 uint * VAR_5 = ((unsigned int *) VAR_2) + (VAR_4 >> VAR_0);
 uint VAR_6 = VAR_4 & ~(VAR_1 - 1);
 uint VAR_7;

 VAR_3 <<= VAR_0;

 if (VAR_4 >= VAR_3)
  return -1;
 VAR_3 -= VAR_6;
 VAR_4 &= (VAR_1 - 1);
 if (VAR_4) {
  VAR_7 = *VAR_5++;

  VAR_7 &= (~0U << VAR_4);
  if (VAR_7 != 0U)
   goto found;
  VAR_6 += VAR_1;
  VAR_3 -= VAR_1;
 }
 while (VAR_3) {
  if ((VAR_7 = *VAR_5++) != 0U)
   goto found;
  VAR_6 += VAR_1;
  VAR_3 -= VAR_1;
 }
 return -1;
found:
 return VAR_6 + FUNC_0(VAR_7) - 1;
}
