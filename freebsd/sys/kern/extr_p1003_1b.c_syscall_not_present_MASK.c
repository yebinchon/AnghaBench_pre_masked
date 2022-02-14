
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; int td_name; } ;
struct nosys_args {int dummy; } ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,char const*) ;

int
FUNC_1(struct thread *VAR_2, const char *VAR_3, struct nosys_args *VAR_4)
{
 FUNC_0(VAR_1, "cmd %s pid %d tried to use non-present %s\n",
   VAR_2->td_name, VAR_2->td_proc->p_pid, VAR_3);




 return VAR_0;
}
