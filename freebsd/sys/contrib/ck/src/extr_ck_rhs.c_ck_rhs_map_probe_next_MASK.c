
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {unsigned long offset_mask; unsigned long mask; } ;



__attribute__((used)) static inline unsigned long
FUNC_0(struct ck_rhs_map *VAR_0,
    unsigned long VAR_1,
    unsigned long VAR_2)
{

 if (VAR_2 & VAR_0->offset_mask) {
  VAR_1 = (VAR_1 &~ VAR_0->offset_mask) +
      ((VAR_1 + 1) & VAR_0->offset_mask);
  return VAR_1;
 } else
  return (VAR_1 + VAR_2) & VAR_0->mask;
}
