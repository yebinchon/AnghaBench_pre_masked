
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct pmclog_proc_init_args {int kthr; } ;
struct TYPE_2__ {int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct pmclog_proc_init_args*,int *,int ,int ,char*,int ) ;
 struct pmclog_proc_init_args* FUNC_1 (int,int ,int) ;
 int VAR_4 ;

int
FUNC_2(struct thread *VAR_5, void **VAR_6)
{
 struct pmclog_proc_init_args *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0, VAR_1 | VAR_2);
 VAR_8 = FUNC_0(VAR_4, VAR_7, &VAR_7->kthr,
     VAR_3, 0, "hwpmc: proc(%d)", VAR_5->td_proc->p_pid);
 if (VAR_8 == 0)
  *VAR_6 = VAR_7;
 return (VAR_8);
}
