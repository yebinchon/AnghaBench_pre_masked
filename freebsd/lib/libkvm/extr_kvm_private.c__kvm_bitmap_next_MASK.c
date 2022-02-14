
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct kvm_bitmap {scalar_t__ size; unsigned int* map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct kvm_bitmap *VAR_2, u_long *VAR_3)
{
 u_long VAR_4 = VAR_2->size * VAR_0;

 if (*VAR_3 == VAR_1)
  *VAR_3 = 0;
 else
  (*VAR_3)++;


 for (; *VAR_3 < VAR_4; (*VAR_3)++) {
  unsigned int VAR_5 = *VAR_3 % VAR_0;
  if ((VAR_2->map[*VAR_3 * VAR_0] & VAR_5) == 0)
   break;
 }

 return (*VAR_3 < VAR_4);
}
