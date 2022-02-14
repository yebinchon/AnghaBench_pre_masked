
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint8_t ;
typedef unsigned int u_long ;
struct kvm_bitmap {unsigned long* map; } ;



void
FUNC_0(struct kvm_bitmap *VAR_0, u_long VAR_1, unsigned int VAR_2)
{
 u_long VAR_3 = VAR_1 / VAR_2;
 uint8_t *VAR_4 = &VAR_0->map[VAR_3 / 8];

 *VAR_4 |= (1UL << (VAR_3 % 8));
}
