
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {int lasterr; int * pools; TYPE_1__* ops; int active; } ;
struct netmap_adapter {scalar_t__ pdev; } ;
struct TYPE_2__ {int (* nmd_finalize ) (struct netmap_mem_d*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 scalar_t__ FUNC_2 (struct netmap_mem_d*) ;
 int FUNC_3 (struct netmap_mem_d*,struct netmap_adapter*) ;
 int FUNC_4 (int *,struct netmap_adapter*) ;
 scalar_t__ FUNC_5 (struct netmap_mem_d*,scalar_t__) ;
 int FUNC_6 (struct netmap_mem_d*) ;

int
FUNC_7(struct netmap_mem_d *VAR_2, struct netmap_adapter *VAR_3)
{
 int VAR_4 = 0;
 if (FUNC_5(VAR_2, VAR_3->pdev) < 0) {
  return VAR_0;
 }

 FUNC_0(VAR_2);

 if (FUNC_2(VAR_2))
  goto out;

 VAR_2->active++;

 VAR_2->lasterr = VAR_2->ops->nmd_finalize(VAR_2);

 if (!VAR_2->lasterr && VAR_3->pdev) {
  VAR_2->lasterr = FUNC_4(&VAR_2->pools[VAR_1], VAR_3);
 }

out:
 VAR_4 = VAR_2->lasterr;
 FUNC_1(VAR_2);

 if (VAR_4)
  FUNC_3(VAR_2, VAR_3);

 return VAR_4;
}
