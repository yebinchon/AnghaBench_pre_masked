
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct thread {int dummy; } ;
struct linux_pread_args {int fd; int offset; int nbyte; int buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ,int *,struct vnode**) ;
 int FUNC_1 (struct thread*,int ,int ,int ,int ) ;
 int FUNC_2 (struct vnode*) ;

int
FUNC_3(struct thread *VAR_3, struct linux_pread_args *VAR_4)
{
 struct vnode *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4->fd, VAR_4->buf, VAR_4->nbyte, VAR_4->offset);
 if (VAR_6 == 0) {

  VAR_6 = FUNC_0(VAR_3, VAR_4->fd, &VAR_2, &VAR_5);
  if (VAR_6 != 0)
   return (VAR_6);
  if (VAR_5->v_type == VAR_1) {
   FUNC_2(VAR_5);
   return (VAR_0);
  }
  FUNC_2(VAR_5);
 }
 return (VAR_6);
}
