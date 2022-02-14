
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_info {int dummy; } ;
typedef int ps_err_e ;
typedef int lwpid_t ;
typedef int gdb_ps_prochandle_t ;
typedef int gdb_prfpregset_t ;
struct TYPE_4__ {int (* store_function ) (int const*,void*) ;} ;
struct TYPE_3__ {int (* store_registers ) (int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread_info* VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (void*) ;
 void* FUNC_3 () ;
 int FUNC_4 (int const*,void*) ;
 int FUNC_5 (int ,void*) ;
 TYPE_1__* VAR_4 ;

ps_err_e
FUNC_6 (gdb_ps_prochandle_t VAR_5, lwpid_t VAR_6,
        const gdb_prfpregset_t *VAR_7)
{
  return VAR_0;
}
