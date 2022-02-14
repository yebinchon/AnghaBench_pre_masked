
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long** VAR_1 ;
 unsigned long* VAR_2 ;

__attribute__((used)) static unsigned long
FUNC_0(unsigned long VAR_3, unsigned long VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 if (!VAR_4)
  return VAR_3;

 if (VAR_4 >= VAR_2[VAR_5])
  return 0;

 if (VAR_5 == 1)
  return VAR_3 >> VAR_4;

 while (VAR_4) {
  if (VAR_4 % 2)
   VAR_3 = (VAR_3 * VAR_1[VAR_5][VAR_6]) >> VAR_0;

  VAR_4 >>= 1;
  VAR_6++;
 }
 return VAR_3;
}
