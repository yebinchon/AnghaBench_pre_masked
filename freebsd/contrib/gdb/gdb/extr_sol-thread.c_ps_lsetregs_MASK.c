
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cleanup {int dummy; } ;
typedef int ps_err_e ;
typedef scalar_t__ prgregset_t ;
typedef int lwpid_t ;
typedef int gdb_ps_prochandle_t ;
typedef int gdb_gregset_t ;
struct TYPE_4__ {int (* to_store_registers ) (int) ;} ;
struct TYPE_3__ {int (* to_store_registers ) (int) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct cleanup*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct cleanup* FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;

ps_err_e
FUNC_7 (gdb_ps_prochandle_t VAR_5, lwpid_t VAR_6,
      const prgregset_t VAR_7)
{
  struct cleanup *VAR_8;

  VAR_8 = FUNC_3 ();

  VAR_1 = FUNC_0 (VAR_6, FUNC_1 (VAR_1));

  FUNC_6 ((gdb_gregset_t *) VAR_7);
  if (VAR_4)
    VAR_3.to_store_registers (-1);
  else
    VAR_2.to_store_registers (-1);

  FUNC_2 (VAR_8);

  return VAR_0;
}
