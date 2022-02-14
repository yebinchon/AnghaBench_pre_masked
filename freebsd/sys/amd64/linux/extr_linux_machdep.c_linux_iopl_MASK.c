
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; int td_ucred; } ;
struct linux_iopl_args {int level; } ;
struct TYPE_2__ {int tf_rflags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct thread*,int ) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct thread *VAR_4, struct linux_iopl_args *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_3);

 if (VAR_5->level > 3)
  return (VAR_0);
 if ((VAR_6 = FUNC_1(VAR_4, VAR_1)) != 0)
  return (VAR_6);
 if ((VAR_6 = FUNC_2(VAR_4->td_ucred, 0)) != 0)
  return (VAR_6);
 VAR_4->td_frame->tf_rflags = (VAR_4->td_frame->tf_rflags & ~VAR_2) |
     (VAR_5->level * (VAR_2 / 3));

 return (0);
}
