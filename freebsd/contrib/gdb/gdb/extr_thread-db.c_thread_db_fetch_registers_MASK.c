
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ td_err_e ;
struct thread_info {TYPE_1__* private; } ;
typedef scalar_t__ prgregset_t ;
typedef int gdb_prfpregset_t ;
typedef int gdb_gregset_t ;
struct TYPE_4__ {int (* to_fetch_registers ) (int) ;} ;
struct TYPE_3__ {int th; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,long,char*) ;
 struct thread_info* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct thread_info*,int) ;

__attribute__((used)) static void
FUNC_11 (int VAR_3)
{
  struct thread_info *VAR_4;
  prgregset_t VAR_5;
  gdb_prfpregset_t VAR_6;
  td_err_e VAR_7;

  if (!FUNC_3 (VAR_1))
    {

      VAR_2->to_fetch_registers (VAR_3);
      return;
    }

  VAR_4 = FUNC_2 (VAR_1);
  FUNC_10 (VAR_4, 1);

  VAR_7 = FUNC_8 (&VAR_4->private->th, VAR_5);
  if (VAR_7 != VAR_0)
    FUNC_1 ("Cannot fetch general-purpose registers for thread %ld: %s",
    (long) FUNC_0 (VAR_1), FUNC_9 (VAR_7));

  VAR_7 = FUNC_7 (&VAR_4->private->th, &VAR_6);
  if (VAR_7 != VAR_0)
    FUNC_1 ("Cannot get floating-point registers for thread %ld: %s",
    (long) FUNC_0 (VAR_1), FUNC_9 (VAR_7));




  FUNC_6 ((gdb_gregset_t *) VAR_5);
  FUNC_5 (&VAR_6);
}
