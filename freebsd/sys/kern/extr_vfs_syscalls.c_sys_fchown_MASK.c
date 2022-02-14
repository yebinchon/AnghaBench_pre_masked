
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct file {int dummy; } ;
struct fchown_args {int gid; int uid; int fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int ,int *,struct file**) ;
 int FUNC_4 (struct file*,int ,int ,int ,struct thread*) ;

int
FUNC_5(struct thread *VAR_1, struct fchown_args *VAR_2)
{
 struct file *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2->fd);
 FUNC_1(VAR_2->uid, VAR_2->gid);
 VAR_4 = FUNC_3(VAR_1, VAR_2->fd, &VAR_0, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 VAR_4 = FUNC_4(VAR_3, VAR_2->uid, VAR_2->gid, VAR_1->td_ucred, VAR_1);
 FUNC_2(VAR_3, VAR_1);
 return (VAR_4);
}
