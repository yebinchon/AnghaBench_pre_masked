
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitfield {size_t max_bits; int* bits; } ;


 int FUNC_0 (size_t) ;

int FUNC_1(struct bitfield *VAR_0, size_t VAR_1)
{
 if (VAR_1 >= VAR_0->max_bits)
  return 0;
 return !!(VAR_0->bits[VAR_1 / 8] & FUNC_0(VAR_1 % 8));
}
