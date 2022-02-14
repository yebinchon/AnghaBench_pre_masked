
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct file {TYPE_1__* f_vnode; TYPE_2__* f_ops; } ;
typedef int off_t ;
struct TYPE_4__ {int fo_flags; } ;
struct TYPE_3__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thread*,int,struct file*,struct uio*,int ,int ) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int *,struct file**) ;

int
FUNC_3(struct thread *VAR_6, int VAR_7, struct uio *VAR_8, off_t VAR_9)
{
 struct file *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_6, VAR_7, &VAR_5, &VAR_10);
 if (VAR_11)
  return (VAR_11);
 if (!(VAR_10->f_ops->fo_flags & VAR_0))
  VAR_11 = VAR_2;
 else if (VAR_9 < 0 &&
     (VAR_10->f_vnode == ((void*)0) || VAR_10->f_vnode->v_type != VAR_4))
  VAR_11 = VAR_1;
 else
  VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_10, VAR_8, VAR_9, VAR_3);
 FUNC_1(VAR_10, VAR_6);
 return (VAR_11);
}
