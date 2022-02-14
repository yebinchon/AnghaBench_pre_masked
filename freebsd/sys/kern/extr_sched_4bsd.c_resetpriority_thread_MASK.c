
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_priority; int td_user_pri; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*,int ) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_2)
{


 if (VAR_2->td_priority < VAR_1 ||
     VAR_2->td_priority > VAR_0)
  return;


 FUNC_0(VAR_2);

 FUNC_1(VAR_2, VAR_2->td_user_pri);
}
