
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int off_t ;
struct TYPE_4__ {int pt_sparse_off; scalar_t__ sparse_map; scalar_t__ page_map; } ;
typedef TYPE_1__ kvm_t ;


 int FUNC_0 (TYPE_1__*,int ,unsigned int) ;

void *
FUNC_1(kvm_t *VAR_0, u_long VAR_1, unsigned int VAR_2)
{
 off_t VAR_3;
 uintptr_t VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == -1)
  return ((void*)0);

 VAR_4 = (uintptr_t)VAR_0->page_map + VAR_3;
 if (VAR_3 >= VAR_0->pt_sparse_off)
  VAR_4 = (uintptr_t)VAR_0->sparse_map + (VAR_3 - VAR_0->pt_sparse_off);
 return (void *)VAR_4;
}
