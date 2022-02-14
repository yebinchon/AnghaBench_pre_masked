
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct file {int f_vnode; } ;
struct extattr_delete_fd_args {int attrnamespace; int fd; int attrname; } ;
typedef int cap_rights_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,int,int *) ;
 int FUNC_5 (int ,int ,char*,struct thread*) ;
 int FUNC_6 (struct file*,struct thread*) ;
 int FUNC_7 (struct thread*,int ,int ,struct file**) ;

int
FUNC_8(struct thread *VAR_2, struct extattr_delete_fd_args *VAR_3)
{
 struct file *VAR_4;
 char VAR_5[VAR_1];
 cap_rights_t VAR_6;
 int VAR_7;

 FUNC_0(VAR_3->fd);
 FUNC_2(VAR_3->attrnamespace);
 VAR_7 = FUNC_4(VAR_3->attrname, VAR_5, VAR_1, ((void*)0));
 if (VAR_7)
  return (VAR_7);
 FUNC_1(VAR_5);

 VAR_7 = FUNC_7(VAR_2, VAR_3->fd,
     FUNC_3(&VAR_6, VAR_0), &VAR_4);
 if (VAR_7)
  return (VAR_7);

 VAR_7 = FUNC_5(VAR_4->f_vnode, VAR_3->attrnamespace,
     VAR_5, VAR_2);
 FUNC_6(VAR_4, VAR_2);
 return (VAR_7);
}
