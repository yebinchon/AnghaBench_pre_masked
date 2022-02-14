
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_iw_mr_pool {scalar_t__ max_items; int item_count; } ;
struct TYPE_2__ {struct rds_iw_mr* m_mr; int m_list; int m_lock; } ;
struct rds_iw_mr {TYPE_1__ mapping; } ;
struct rds_iw_device {struct rds_iw_mr_pool* mr_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rds_iw_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct rds_iw_mr*) ;
 struct rds_iw_mr* FUNC_5 (int,int ) ;
 int FUNC_6 (struct rds_iw_mr_pool*,struct rds_iw_mr*) ;
 int FUNC_7 (struct rds_iw_mr_pool*,int ) ;
 int FUNC_8 (struct rds_iw_mr_pool*,struct rds_iw_mr*) ;
 struct rds_iw_mr* FUNC_9 (struct rds_iw_mr_pool*) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct rds_iw_mr *FUNC_12(struct rds_iw_device *VAR_6)
{
 struct rds_iw_mr_pool *VAR_7 = VAR_6->mr_pool;
 struct rds_iw_mr *VAR_8 = ((void*)0);
 int VAR_9 = 0, VAR_10 = 0;

 while (1) {
  VAR_8 = FUNC_9(VAR_7);
  if (VAR_8)
   return VAR_8;
  if (FUNC_3(&VAR_7->item_count) <= VAR_7->max_items)
   break;

  FUNC_2(&VAR_7->item_count);

  if (++VAR_10 > 2) {
   FUNC_10(VAR_4);
   return FUNC_0(-VAR_0);
  }


  FUNC_10(VAR_5);
  FUNC_7(VAR_7, 0);
 }

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto out_no_cigar;
 }

 FUNC_11(&VAR_8->mapping.m_lock);
 FUNC_1(&VAR_8->mapping.m_list);
 VAR_8->mapping.m_mr = VAR_8;

 VAR_9 = FUNC_8(VAR_7, VAR_8);
 if (VAR_9)
  goto out_no_cigar;

 FUNC_10(VAR_3);
 return VAR_8;

out_no_cigar:
 if (VAR_8) {
  FUNC_6(VAR_7, VAR_8);
  FUNC_4(VAR_8);
 }
 FUNC_2(&VAR_7->item_count);
 return FUNC_0(VAR_9);
}
