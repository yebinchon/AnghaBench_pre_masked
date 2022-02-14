
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct thread {int td_ucred; } ;
struct ksem_getvalue_args {int val; int id; } ;
struct ksem {int ks_value; int ks_atime; } ;
struct file {int f_cred; struct ksem* f_data; } ;
typedef int cap_rights_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int ,int ,struct file**) ;
 int FUNC_5 (int ,int ,struct ksem*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct thread *VAR_2, struct ksem_getvalue_args *VAR_3)
{
 cap_rights_t VAR_4;
 struct file *VAR_5;
 struct ksem *VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_3->id);
 VAR_7 = FUNC_4(VAR_2, VAR_3->id,
     FUNC_1(&VAR_4, VAR_0), &VAR_5);
 if (VAR_7)
  return (VAR_7);
 VAR_6 = VAR_5->f_data;

 FUNC_6(&VAR_1);
 VAR_8 = VAR_6->ks_value;
 FUNC_8(&VAR_6->ks_atime);
 FUNC_7(&VAR_1);
 FUNC_3(VAR_5, VAR_2);
 VAR_7 = FUNC_2(&VAR_8, VAR_3->val, sizeof(VAR_8));
 return (VAR_7);
}
