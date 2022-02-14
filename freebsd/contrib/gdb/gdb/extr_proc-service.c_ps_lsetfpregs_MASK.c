
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cleanup {int dummy; } ;
typedef int ps_err_e ;
typedef int lwpid_t ;
typedef TYPE_1__* gdb_ps_prochandle_t ;
typedef int gdb_prfpregset_t ;
typedef int gdb_fpregset_t ;
struct TYPE_3__ {int pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cleanup*) ;
 int VAR_1 ;
 struct cleanup* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

ps_err_e
FUNC_5 (gdb_ps_prochandle_t VAR_2, lwpid_t VAR_3,
        const gdb_prfpregset_t *VAR_4)
{
  struct cleanup *VAR_5 = FUNC_2 ();

  VAR_1 = FUNC_0 (VAR_3, VAR_2->pid);


  FUNC_3 ((gdb_fpregset_t *) VAR_4);
  FUNC_4 (-1);

  FUNC_1 (VAR_5);
  return VAR_0;
}
