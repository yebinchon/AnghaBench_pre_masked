
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
typedef int td_thrhandle_t ;
typedef scalar_t__ td_err_e ;
typedef int prgregset_t ;
typedef int prfpregset_t ;
typedef int gdb_gregset_t ;
typedef int gdb_fpregset_t ;
typedef int caddr_t ;
struct TYPE_2__ {int (* to_store_registers ) (int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,char*) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int *,int*) ;

__attribute__((used)) static void
FUNC_17 (int VAR_6)
{
  thread_t VAR_7;
  td_thrhandle_t VAR_8;
  td_err_e VAR_9;
  prgregset_t VAR_10;
  prfpregset_t VAR_11;





  if (!FUNC_5 (VAR_3))
    {
      VAR_5.to_store_registers (VAR_6);
      return;
    }



  VAR_7 = FUNC_0 (VAR_3);

  VAR_9 = FUNC_6 (VAR_4, VAR_7, &VAR_8);
  if (VAR_9 != VAR_2)
    FUNC_2 ("sol_thread_store_registers: td_ta_map_id2thr %s",
    FUNC_14 (VAR_9));

  if (VAR_6 != -1)
    {
      char VAR_12[VAR_0];


      FUNC_11 (VAR_6, VAR_12);

      VAR_9 = FUNC_8 (&VAR_8, VAR_10);
      if (VAR_9 != VAR_2)
 FUNC_2 ("sol_thread_store_registers: td_thr_getgregs %s",
        FUNC_14 (VAR_9));
      VAR_9 = FUNC_7 (&VAR_8, &VAR_11);
      if (VAR_9 != VAR_2)
 FUNC_2 ("sol_thread_store_registers: td_thr_getfpregs %s",
        FUNC_14 (VAR_9));


      FUNC_13 (VAR_6, VAR_12);
    }

  FUNC_4 ((gdb_gregset_t *) &VAR_10, VAR_6);
  FUNC_3 ((gdb_fpregset_t *) &VAR_11, VAR_6);

  VAR_9 = FUNC_10 (&VAR_8, VAR_10);
  if (VAR_9 != VAR_2)
    FUNC_2 ("sol_thread_store_registers: td_thr_setgregs %s",
    FUNC_14 (VAR_9));
  VAR_9 = FUNC_9 (&VAR_8, &VAR_11);
  if (VAR_9 != VAR_2)
    FUNC_2 ("sol_thread_store_registers: td_thr_setfpregs %s",
    FUNC_14 (VAR_9));
}
