
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; int td_ucred; } ;
struct linux_iopl_args {int level; } ;
struct TYPE_2__ {int tf_rflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(struct thread *VAR_3, struct linux_iopl_args *VAR_4)
{
 int VAR_5;

 if (VAR_4->level < 0 || VAR_4->level > 3)
  return (VAR_0);
 if ((VAR_5 = FUNC_0(VAR_3, VAR_1)) != 0)
  return (VAR_5);
 if ((VAR_5 = FUNC_1(VAR_3->td_ucred, 0)) != 0)
  return (VAR_5);
 VAR_3->td_frame->tf_rflags = (VAR_3->td_frame->tf_rflags & ~VAR_2) |
     (VAR_4->level * (VAR_2 / 3));

 return (0);
}
