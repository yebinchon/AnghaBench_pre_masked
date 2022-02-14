
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quota_info {int dqio_mutex; TYPE_1__** ops; } ;
struct dquot {size_t dq_type; int dq_flags; int dq_sb; } ;
struct TYPE_2__ {int (* commit_dqblk ) (struct dquot*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dquot*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct quota_info* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dquot*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct dquot *VAR_3)
{
 int VAR_4 = 0;
 struct quota_info *VAR_5 = FUNC_3(VAR_3->dq_sb);

 FUNC_1(&VAR_5->dqio_mutex);
 FUNC_4(&VAR_2);
 if (!FUNC_0(VAR_3)) {
  FUNC_5(&VAR_2);
  goto out_sem;
 }
 FUNC_5(&VAR_2);


 if (FUNC_7(VAR_0, &VAR_3->dq_flags))
  VAR_4 = VAR_5->ops[VAR_3->dq_type]->commit_dqblk(VAR_3);
 else
  VAR_4 = -VAR_1;
out_sem:
 FUNC_2(&VAR_5->dqio_mutex);
 return VAR_4;
}
