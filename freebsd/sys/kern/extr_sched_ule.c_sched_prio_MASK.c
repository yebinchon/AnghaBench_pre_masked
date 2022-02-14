
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct thread {int td_flags; scalar_t__ td_priority; scalar_t__ td_base_pri; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*,scalar_t__) ;
 int FUNC_2 (struct thread*,scalar_t__) ;

void
FUNC_3(struct thread *VAR_1, u_char VAR_2)
{
 u_char VAR_3;


 VAR_1->td_base_pri = VAR_2;





 if (VAR_1->td_flags & VAR_0 && VAR_1->td_priority < VAR_2)
  return;


 VAR_3 = VAR_1->td_priority;
 FUNC_1(VAR_1, VAR_2);





 if (FUNC_0(VAR_1) && VAR_3 != VAR_2)
  FUNC_2(VAR_1, VAR_3);
}
