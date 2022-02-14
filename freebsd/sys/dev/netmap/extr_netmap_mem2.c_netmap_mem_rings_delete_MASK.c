
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {TYPE_1__* ops; } ;
struct netmap_adapter {struct netmap_mem_d* nm_mem; } ;
struct TYPE_2__ {int (* nmd_rings_delete ) (struct netmap_adapter*) ;} ;


 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_adapter*) ;

void
FUNC_3(struct netmap_adapter *VAR_0)
{
 struct netmap_mem_d *VAR_1 = VAR_0->nm_mem;

 FUNC_0(VAR_1);
 VAR_1->ops->nmd_rings_delete(VAR_0);
 FUNC_1(VAR_1);
}
