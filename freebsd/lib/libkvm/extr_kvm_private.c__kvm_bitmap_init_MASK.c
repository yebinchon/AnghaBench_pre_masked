
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct kvm_bitmap {int size; int * map; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;

int
FUNC_1(struct kvm_bitmap *VAR_1, u_long VAR_2, u_long *VAR_3)
{

 *VAR_3 = VAR_0;
 VAR_1->map = FUNC_0(VAR_2, sizeof *VAR_1->map);
 if (VAR_1->map == ((void*)0))
  return (0);
 VAR_1->size = VAR_2;
 return (1);
}
