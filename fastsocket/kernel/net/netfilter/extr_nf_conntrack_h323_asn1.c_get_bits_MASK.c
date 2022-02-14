
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cur; int bit; } ;
typedef TYPE_1__ bitstr_t ;



__attribute__((used)) static unsigned int FUNC_0(bitstr_t *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;

 VAR_2 = (*VAR_0->cur) & (0xffU >> VAR_0->bit);
 VAR_3 = VAR_1 + VAR_0->bit;

 if (VAR_3 < 8) {
  VAR_2 >>= 8 - VAR_3;
  VAR_0->bit = VAR_3;
 } else if (VAR_3 == 8) {
  VAR_0->cur++;
  VAR_0->bit = 0;
 } else {

  VAR_2 <<= 8;
  VAR_2 += *(++VAR_0->cur);
  VAR_2 >>= 16 - VAR_3;
  VAR_0->bit = VAR_3 - 8;
 }

 return VAR_2;
}
