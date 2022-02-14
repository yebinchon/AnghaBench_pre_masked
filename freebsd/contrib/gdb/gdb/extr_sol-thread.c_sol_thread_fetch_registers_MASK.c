
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
typedef int prgregset_t ;
typedef int prfpregset_t ;
typedef int gdb_gregset_t ;
typedef int gdb_fpregset_t ;
typedef int caddr_t ;
struct TYPE_4__ {int (* to_fetch_registers ) (int) ;} ;
struct TYPE_3__ {int (* to_fetch_registers ) (int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *,int*) ;

__attribute__((used)) static void
FUNC_14 (int VAR_9)
{
  thread_t VAR_10;
  td_thrhandle_t VAR_11;
  td_err_e VAR_12;
  prgregset_t VAR_13;
  prfpregset_t VAR_14;





  if (!FUNC_3 (VAR_4))
    {
      if (VAR_8)
 VAR_7.to_fetch_registers (VAR_9);
      else
 VAR_6.to_fetch_registers (VAR_9);
      return;
    }



  VAR_10 = FUNC_0 (VAR_4);

  if (VAR_10 == 0)
    FUNC_2 ("sol_thread_fetch_registers:  thread == 0");

  VAR_12 = FUNC_4 (VAR_5, VAR_10, &VAR_11);
  if (VAR_12 != VAR_2)
    FUNC_2 ("sol_thread_fetch_registers: td_ta_map_id2thr: %s",
    FUNC_11 (VAR_12));



  VAR_12 = FUNC_6 (&VAR_11, VAR_13);
  if (VAR_12 != VAR_2
      && VAR_12 != VAR_3)
    FUNC_2 ("sol_thread_fetch_registers: td_thr_getgregs %s",
    FUNC_11 (VAR_12));






  VAR_12 = FUNC_5 (&VAR_11, &VAR_14);
  if (VAR_12 != VAR_2
      && VAR_12 != VAR_0)
    FUNC_2 ("sol_thread_fetch_registers: td_thr_getfpregs %s",
    FUNC_11 (VAR_12));





  FUNC_10 ((gdb_gregset_t *) &VAR_13);
  FUNC_9 ((gdb_fpregset_t *) &VAR_14);
}
