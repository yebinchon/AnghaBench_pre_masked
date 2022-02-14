
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {unsigned int offset_mask; unsigned long mask; } ;



__attribute__((used)) static long
FUNC_0(struct ck_rhs_map *VAR_0, unsigned long VAR_1, unsigned int VAR_2)
{
 while (VAR_2 > (unsigned long)VAR_0->offset_mask + 1) {
  VAR_1 -= ((VAR_2 - 1) &~ VAR_0->offset_mask);
  VAR_1 &= VAR_0->mask;
  VAR_1 = (VAR_1 &~ VAR_0->offset_mask) +
      ((VAR_1 - VAR_0->offset_mask) & VAR_0->offset_mask);
  VAR_2 -= VAR_0->offset_mask + 1;
 }
 return ((VAR_1 &~ VAR_0->offset_mask) + ((VAR_1 - (VAR_2 - 1)) & VAR_0->offset_mask));
}
