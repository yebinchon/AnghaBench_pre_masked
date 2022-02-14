
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_priority; int td_pri_class; int td_flags; int td_slptick; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,int) ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_4(struct thread *VAR_6, int VAR_7)
{

 FUNC_2(VAR_6, VAR_0);

 VAR_6->td_slptick = VAR_5;
 if (FUNC_1(VAR_6) || VAR_7 >= VAR_2)
  VAR_6->td_flags |= VAR_3;
 if (FUNC_0(VAR_6->td_pri_class) != VAR_1)
  return;
 if (VAR_4 == 1 && VAR_7)
  FUNC_3(VAR_6, VAR_7);
 else if (VAR_4 && VAR_6->td_priority > VAR_4)
  FUNC_3(VAR_6, VAR_4);
}
