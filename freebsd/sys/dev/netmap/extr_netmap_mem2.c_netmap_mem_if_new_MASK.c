
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_priv_d {int dummy; } ;
struct netmap_mem_d {TYPE_1__* ops; } ;
struct netmap_if {int dummy; } ;
struct netmap_adapter {struct netmap_mem_d* nm_mem; } ;
struct TYPE_2__ {struct netmap_if* (* nmd_if_new ) (struct netmap_adapter*,struct netmap_priv_d*) ;} ;


 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 struct netmap_if* FUNC_2 (struct netmap_adapter*,struct netmap_priv_d*) ;

struct netmap_if *
FUNC_3(struct netmap_adapter *VAR_0, struct netmap_priv_d *VAR_1)
{
 struct netmap_if *VAR_2;
 struct netmap_mem_d *VAR_3 = VAR_0->nm_mem;

 FUNC_0(VAR_3);
 VAR_2 = VAR_3->ops->nmd_if_new(VAR_0, VAR_1);
 FUNC_1(VAR_3);

 return VAR_2;
}
