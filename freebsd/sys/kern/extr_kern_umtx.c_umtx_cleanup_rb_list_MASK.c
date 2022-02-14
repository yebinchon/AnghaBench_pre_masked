
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct TYPE_2__ {int p_pid; int p_comm; } ;


 int FUNC_0 (struct thread*,uintptr_t,uintptr_t*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct thread*,uintptr_t,uintptr_t*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(struct thread *VAR_2, uintptr_t VAR_3, uintptr_t *VAR_4,
    const char *VAR_5)
{
 int VAR_6, VAR_7;
 uintptr_t VAR_8;
 bool VAR_9;

 if (VAR_3 == 0)
  return;
 VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_8);
 for (VAR_7 = 0; VAR_6 == 0 && VAR_8 != 0 && VAR_7 < VAR_0; VAR_7++) {
  if (VAR_8 == *VAR_4) {
   VAR_9 = 1;
   *VAR_4 = 0;
  } else
   VAR_9 = 0;
  VAR_6 = FUNC_0(VAR_2, VAR_8, &VAR_8, VAR_9);
 }
 if (VAR_7 == VAR_0 && VAR_1) {
  FUNC_2("comm %s pid %d: reached umtx %smax rb %d\n",
      VAR_2->td_proc->p_comm, VAR_2->td_proc->p_pid, VAR_5, VAR_0);
 }
 if (VAR_6 != 0 && VAR_1) {
  FUNC_2("comm %s pid %d: handling %srb error %d\n",
      VAR_2->td_proc->p_comm, VAR_2->td_proc->p_pid, VAR_5, VAR_6);
 }
}
