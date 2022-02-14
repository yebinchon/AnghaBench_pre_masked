
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ cmt_state; int cs_lock; int commit_sem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_4)
{
 FUNC_2(&VAR_4->cs_lock);




 if (VAR_4->cmt_state != VAR_0 &&
     VAR_4->cmt_state != VAR_1)
  goto out;
 FUNC_3(&VAR_4->cs_lock);

 FUNC_1(&VAR_4->commit_sem);
 FUNC_2(&VAR_4->cs_lock);
 if (VAR_4->cmt_state == VAR_1)
  VAR_4->cmt_state = VAR_3;
 else if (VAR_4->cmt_state == VAR_0)
  VAR_4->cmt_state = VAR_2;
 else
  goto out_cmt_unlock;
 FUNC_3(&VAR_4->cs_lock);

 return FUNC_0(VAR_4);

out_cmt_unlock:
 FUNC_4(&VAR_4->commit_sem);
out:
 FUNC_3(&VAR_4->cs_lock);
 return 0;
}
