
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct file {int f_vnode; } ;
struct fchflags_args {int flags; int fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct thread*,int ,int *,struct file**) ;
 int FUNC_6 (struct thread*,int ,int ) ;
 int FUNC_7 (int ,int) ;

int
FUNC_8(struct thread *VAR_3, struct fchflags_args *VAR_4)
{
 struct file *VAR_5;
 int VAR_6;

 FUNC_0(VAR_4->fd);
 FUNC_1(VAR_4->flags);
 VAR_6 = FUNC_5(VAR_3, VAR_4->fd, &VAR_2,
     &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);





 VAR_6 = FUNC_6(VAR_3, VAR_5->f_vnode, VAR_4->flags);
 FUNC_4(VAR_5, VAR_3);
 return (VAR_6);
}
