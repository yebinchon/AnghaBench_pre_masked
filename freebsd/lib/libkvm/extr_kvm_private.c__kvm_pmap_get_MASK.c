
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_long ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {scalar_t__ pt_sparse_off; scalar_t__ page_map; } ;
typedef TYPE_1__ kvm_t ;



void *
FUNC_0(kvm_t *VAR_0, u_long VAR_1, size_t VAR_2)
{
 uintptr_t VAR_3 = VAR_1 * VAR_2;

 if ((off_t)VAR_3 >= VAR_0->pt_sparse_off)
  return (((void*)0));
 return (void *)((uintptr_t)VAR_0->page_map + VAR_3);
}
