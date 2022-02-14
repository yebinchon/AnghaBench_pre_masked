
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct file {int f_vnode; } ;
struct extattr_list_fd_args {int nbytes; int data; int attrnamespace; int fd; } ;
typedef int cap_rights_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ,struct thread*) ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct thread*,int ,int ,struct file**) ;

int
FUNC_6(struct thread *VAR_1, struct extattr_list_fd_args *VAR_2)
{
 struct file *VAR_3;
 cap_rights_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_2->fd);
 FUNC_1(VAR_2->attrnamespace);
 VAR_5 = FUNC_5(VAR_1, VAR_2->fd,
     FUNC_2(&VAR_4, VAR_0), &VAR_3);
 if (VAR_5)
  return (VAR_5);

 VAR_5 = FUNC_3(VAR_3->f_vnode, VAR_2->attrnamespace, VAR_2->data,
     VAR_2->nbytes, VAR_1);

 FUNC_4(VAR_3, VAR_1);
 return (VAR_5);
}
