
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct ksem_post_args {int id; } ;
struct ksem {scalar_t__ ks_value; scalar_t__ ks_waiters; int ks_ctime; int ks_cv; } ;
struct file {int f_cred; struct ksem* f_data; } ;
typedef int cap_rights_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int ,int ,struct file**) ;
 int FUNC_5 (int ,int ,struct ksem*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct thread *VAR_4, struct ksem_post_args *VAR_5)
{
 cap_rights_t VAR_6;
 struct file *VAR_7;
 struct ksem *VAR_8;
 int VAR_9;

 FUNC_0(VAR_5->id);
 VAR_9 = FUNC_4(VAR_4, VAR_5->id,
     FUNC_1(&VAR_6, VAR_0), &VAR_7);
 if (VAR_9)
  return (VAR_9);
 VAR_8 = VAR_7->f_data;

 FUNC_6(&VAR_3);





 if (VAR_8->ks_value == VAR_2) {
  VAR_9 = VAR_1;
  goto err;
 }
 ++VAR_8->ks_value;
 if (VAR_8->ks_waiters > 0)
  FUNC_2(&VAR_8->ks_cv);
 VAR_9 = 0;
 FUNC_8(&VAR_8->ks_ctime);
err:
 FUNC_7(&VAR_3);
 FUNC_3(VAR_7, VAR_4);
 return (VAR_9);
}
