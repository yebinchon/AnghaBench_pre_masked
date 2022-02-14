
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct file {int f_vnode; } ;
struct __acl_aclcheck_fd_args {int aclp; int type; int filedes; } ;
typedef int cap_rights_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int ,int ,struct file**) ;
 int FUNC_4 (struct thread*,int ,int ,int ) ;

int
FUNC_5(struct thread *VAR_1, struct __acl_aclcheck_fd_args *VAR_2)
{
 struct file *VAR_3;
 cap_rights_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_2->filedes);
 VAR_5 = FUNC_3(VAR_1, VAR_2->filedes,
     FUNC_1(&VAR_4, VAR_0), &VAR_3);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_4(VAR_1, VAR_3->f_vnode, VAR_2->type, VAR_2->aclp);
  FUNC_2(VAR_3, VAR_1);
 }
 return (VAR_5);
}
