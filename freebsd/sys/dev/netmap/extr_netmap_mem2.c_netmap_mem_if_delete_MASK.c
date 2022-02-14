
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {TYPE_1__* ops; } ;
struct netmap_if {int dummy; } ;
struct netmap_adapter {struct netmap_mem_d* nm_mem; } ;
struct TYPE_2__ {int (* nmd_if_delete ) (struct netmap_adapter*,struct netmap_if*) ;} ;


 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_adapter*,struct netmap_if*) ;

void
FUNC_3(struct netmap_adapter *VAR_0, struct netmap_if *VAR_1)
{
 struct netmap_mem_d *VAR_2 = VAR_0->nm_mem;

 FUNC_0(VAR_2);
 VAR_2->ops->nmd_if_delete(VAR_0, VAR_1);
 FUNC_1(VAR_2);
}
