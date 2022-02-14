
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rds_iw_mr_pool {int list_lock; int dirty_count; int free_pinned; int dirty_list; } ;
struct TYPE_3__ {int len; int dma_len; } ;
struct TYPE_4__ {TYPE_1__ m_sg; int m_list; } ;
struct rds_iw_mr {TYPE_2__ mapping; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct rds_iw_mr*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct rds_iw_mr_pool *VAR_0,
  struct rds_iw_mr *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_1->mapping.m_sg.dma_len)
  return;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  return;


 FUNC_4(&VAR_0->list_lock, VAR_2);

 FUNC_2(&VAR_1->mapping.m_list, &VAR_0->dirty_list);
 FUNC_0(VAR_1->mapping.m_sg.len, &VAR_0->free_pinned);
 FUNC_1(&VAR_0->dirty_count);

 FUNC_5(&VAR_0->list_lock, VAR_2);
}
