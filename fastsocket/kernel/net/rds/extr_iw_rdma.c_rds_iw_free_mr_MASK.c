
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rds_iw_mr_pool {int max_free_pinned; int max_items; int flush_worker; int dirty_count; int free_pinned; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_5__ {TYPE_1__ m_sg; } ;
struct rds_iw_mr {TYPE_2__ mapping; TYPE_3__* device; } ;
struct TYPE_6__ {struct rds_iw_mr_pool* mr_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct rds_iw_mr_pool*,int ) ;
 int FUNC_5 (struct rds_iw_mr_pool*,struct rds_iw_mr*) ;
 int VAR_0 ;
 int FUNC_6 (char*,int ) ;

void FUNC_7(void *VAR_1, int VAR_2)
{
 struct rds_iw_mr *VAR_3 = VAR_1;
 struct rds_iw_mr_pool *VAR_4 = VAR_3->device->mr_pool;

 FUNC_6("RDS/IW: free_mr nents %u\n", VAR_3->mapping.m_sg.len);
 if (!VAR_4)
  return;


 FUNC_5(VAR_4, VAR_3);


 if (FUNC_0(&VAR_4->free_pinned) >= VAR_4->max_free_pinned
  || FUNC_0(&VAR_4->dirty_count) >= VAR_4->max_items / 10)
  FUNC_3(VAR_0, &VAR_4->flush_worker);

 if (VAR_2) {
  if (FUNC_2(!FUNC_1())) {
   FUNC_4(VAR_4, 0);
  } else {


   FUNC_3(VAR_0, &VAR_4->flush_worker);
  }
 }
}
