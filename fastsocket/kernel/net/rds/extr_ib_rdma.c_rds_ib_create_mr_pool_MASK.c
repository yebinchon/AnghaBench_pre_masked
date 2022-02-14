
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_pages; int page_shift; int max_maps; } ;
struct rds_ib_mr_pool {int max_free_pinned; int max_items_soft; int max_items; TYPE_1__ fmr_attr; int flush_worker; int flush_wait; int flush_lock; int clean_list; int drop_list; int free_list; } ;
struct rds_ib_device {int max_fmrs; int fmr_max_remaps; } ;


 int VAR_0 ;
 struct rds_ib_mr_pool* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct rds_ib_mr_pool* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

struct rds_ib_mr_pool *FUNC_6(struct rds_ib_device *VAR_5)
{
 struct rds_ib_mr_pool *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_6->free_list);
 FUNC_2(&VAR_6->drop_list);
 FUNC_2(&VAR_6->clean_list);
 FUNC_5(&VAR_6->flush_lock);
 FUNC_3(&VAR_6->flush_wait);
 FUNC_1(&VAR_6->flush_worker, VAR_4);

 VAR_6->fmr_attr.max_pages = VAR_3;
 VAR_6->fmr_attr.max_maps = VAR_5->fmr_max_remaps;
 VAR_6->fmr_attr.page_shift = VAR_2;
 VAR_6->max_free_pinned = VAR_5->max_fmrs * VAR_3 / 4;






 VAR_6->max_items_soft = VAR_5->max_fmrs * 3 / 4;
 VAR_6->max_items = VAR_5->max_fmrs;

 return VAR_6;
}
