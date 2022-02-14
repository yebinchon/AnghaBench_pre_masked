
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* dq_op; } ;
struct dquot {int dq_type; int dq_count; struct super_block* dq_sb; int dq_wait_unused; int dq_dirty; int dq_hash; int dq_inuse; int dq_free; int dq_lock; } ;
struct TYPE_2__ {struct dquot* (* alloc_dquot ) (struct super_block*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dquot* FUNC_5 (struct super_block*,int) ;

__attribute__((used)) static struct dquot *FUNC_6(struct super_block *VAR_0, int VAR_1)
{
 struct dquot *VAR_2;

 VAR_2 = VAR_0->dq_op->alloc_dquot(VAR_0, VAR_1);
 if(!VAR_2)
  return ((void*)0);

 FUNC_4(&VAR_2->dq_lock);
 FUNC_1(&VAR_2->dq_free);
 FUNC_1(&VAR_2->dq_inuse);
 FUNC_0(&VAR_2->dq_hash);
 FUNC_1(&VAR_2->dq_dirty);
 FUNC_3(&VAR_2->dq_wait_unused);
 VAR_2->dq_sb = VAR_0;
 VAR_2->dq_type = VAR_1;
 FUNC_2(&VAR_2->dq_count, 1);

 return VAR_2;
}
