
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_info {int dummy; } ;
typedef int ps_err_e ;
typedef int prgregset_t ;
typedef int lwpid_t ;
typedef int gdb_ps_prochandle_t ;
struct TYPE_4__ {int (* fill_function ) (int ,void*) ;} ;
struct TYPE_3__ {int (* fetch_registers ) (int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread_info* VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (void*) ;
 TYPE_2__* FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (int ,void*) ;
 TYPE_1__* VAR_4 ;

ps_err_e
FUNC_6 (gdb_ps_prochandle_t VAR_5, lwpid_t VAR_6, prgregset_t VAR_7)
{
  return VAR_0;
}
