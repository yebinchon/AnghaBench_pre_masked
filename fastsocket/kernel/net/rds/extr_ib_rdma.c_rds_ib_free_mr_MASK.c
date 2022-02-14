
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_maps; } ;
struct rds_ib_mr_pool {int max_free_pinned; int max_items; int flush_worker; int dirty_count; int free_pinned; int free_list; int drop_list; TYPE_1__ fmr_attr; } ;
struct rds_ib_mr {scalar_t__ remap_count; int sg_len; int llnode; struct rds_ib_device* device; } ;
struct rds_ib_device {struct rds_ib_mr_pool* mr_pool; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct rds_ib_device*) ;
 int FUNC_7 (struct rds_ib_mr_pool*,int ,int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,int) ;

void FUNC_10(void *VAR_0, int VAR_1)
{
 struct rds_ib_mr *VAR_2 = VAR_0;
 struct rds_ib_device *VAR_3 = VAR_2->device;
 struct rds_ib_mr_pool *VAR_4 = VAR_3->mr_pool;

 FUNC_8("RDS/IB: free_mr nents %u\n", VAR_2->sg_len);


 if (VAR_2->remap_count >= VAR_4->fmr_attr.max_maps)
  FUNC_5(&VAR_2->llnode, &VAR_4->drop_list);
 else
  FUNC_5(&VAR_2->llnode, &VAR_4->free_list);

 FUNC_0(VAR_2->sg_len, &VAR_4->free_pinned);
 FUNC_1(&VAR_4->dirty_count);


 if (FUNC_2(&VAR_4->free_pinned) >= VAR_4->max_free_pinned ||
     FUNC_2(&VAR_4->dirty_count) >= VAR_4->max_items / 10)
  FUNC_9(&VAR_4->flush_worker, 10);

 if (VAR_1) {
  if (FUNC_4(!FUNC_3())) {
   FUNC_7(VAR_4, 0, ((void*)0));
  } else {


   FUNC_9(&VAR_4->flush_worker, 10);
  }
 }

 FUNC_6(VAR_3);
}
