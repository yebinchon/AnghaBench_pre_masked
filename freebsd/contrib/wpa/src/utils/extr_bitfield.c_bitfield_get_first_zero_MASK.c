
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitfield {int max_bits; int* bits; } ;


 size_t FUNC_0 (int) ;

int FUNC_1(struct bitfield *VAR_0)
{
 size_t VAR_1;
 for (VAR_1 = 0; VAR_1 < (VAR_0->max_bits + 7) / 8; VAR_1++) {
  if (VAR_0->bits[VAR_1] != 0xff)
   break;
 }
 if (VAR_1 == (VAR_0->max_bits + 7) / 8)
  return -1;
 VAR_1 = VAR_1 * 8 + FUNC_0(VAR_0->bits[VAR_1]);
 if (VAR_1 >= VAR_0->max_bits)
  return -1;
 return VAR_1;
}
