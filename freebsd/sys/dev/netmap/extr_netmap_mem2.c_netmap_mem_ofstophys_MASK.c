
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
struct netmap_mem_d {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* nmd_ofstophys ) (struct netmap_mem_d*,int ) ;} ;


 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_mem_d*) ;
 int FUNC_3 (struct netmap_mem_d*,int ) ;

vm_paddr_t
FUNC_4(struct netmap_mem_d *VAR_0, vm_ooffset_t VAR_1)
{
 vm_paddr_t VAR_2;







 FUNC_0(VAR_0);

 VAR_2 = VAR_0->ops->nmd_ofstophys(VAR_0, VAR_1);
 FUNC_2(VAR_0);

 return VAR_2;
}
