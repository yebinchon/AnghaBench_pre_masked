
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

unsigned long FUNC_0(unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = 0;

 VAR_4 = 1UL << (VAR_0 - 2);
 while (VAR_4 > VAR_2)
  VAR_4 >>= 2;

 while (VAR_4 != 0) {
  if (VAR_2 >= VAR_3 + VAR_4) {
   VAR_2 = VAR_2 - (VAR_3 + VAR_4);
   VAR_3 = VAR_3 + 2 * VAR_4;
  }
  VAR_3 /= 2;
  VAR_4 /= 4;
 }
 return VAR_3;
}
