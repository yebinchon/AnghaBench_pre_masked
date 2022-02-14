
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_mem_d {int active; int nm_grp; scalar_t__ lasterr; TYPE_1__* ops; int * pools; } ;
struct netmap_adapter {scalar_t__ active_fds; } ;
struct TYPE_2__ {int (* nmd_deref ) (struct netmap_mem_d*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (struct netmap_mem_d*) ;
 int FUNC_1 (struct netmap_mem_d*) ;
 int FUNC_2 (struct netmap_mem_d*) ;
 int FUNC_3 (int *,struct netmap_adapter*) ;
 int FUNC_4 (struct netmap_mem_d*) ;

int
FUNC_5(struct netmap_mem_d *VAR_1, struct netmap_adapter *VAR_2)
{
 int VAR_3 = 0;
 FUNC_0(VAR_1);
 if (VAR_2->active_fds <= 0)
  FUNC_3(&VAR_1->pools[VAR_0], VAR_2);
 if (VAR_1->active == 1) {
  VAR_3 = 1;





  FUNC_2(VAR_1);
 }
 VAR_1->ops->nmd_deref(VAR_1);

 VAR_1->active--;
 if (VAR_3) {
  VAR_1->nm_grp = -1;
  VAR_1->lasterr = 0;
 }

 FUNC_1(VAR_1);
 return VAR_3;
}
