
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t ss_size; int ss_flags; scalar_t__ ss_sp; } ;
struct thread {int td_pflags; TYPE_1__ td_sigstk; int td_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 struct thread* VAR_3 ;

int
FUNC_1(size_t VAR_4)
{
 struct thread *VAR_5;

 VAR_5 = VAR_3;
 if ((VAR_5->td_pflags & VAR_2) == 0)
  return (0);




 return (VAR_4 >= (size_t)VAR_5->td_sigstk.ss_sp &&
     VAR_4 < VAR_5->td_sigstk.ss_size + (size_t)VAR_5->td_sigstk.ss_sp);
}
