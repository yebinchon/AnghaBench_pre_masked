
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
struct TYPE_4__ {int (* to_store_registers ) (int) ;} ;
struct TYPE_3__ {int th; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,long,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 struct thread_info* FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,scalar_t__) ;
 char* FUNC_11 (scalar_t__) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct thread_info*,int) ;

__attribute__((used)) static void
FUNC_14 (int VAR_4)
{
  prgregset_t VAR_5;
  gdb_prfpregset_t VAR_6;
  td_err_e VAR_7;
  struct thread_info *VAR_8;

  if (!FUNC_6 (VAR_2))
    {

      VAR_3->to_store_registers (VAR_4);
      return;
    }

  VAR_8 = FUNC_5 (VAR_2);
  FUNC_13 (VAR_8, 1);

  if (VAR_4 != -1)
    {
      char VAR_9[VAR_0];

      FUNC_1 (VAR_4, VAR_9);
      FUNC_12 (-1);
      FUNC_8 (VAR_4, VAR_9);
    }

  FUNC_4 ((gdb_gregset_t *) VAR_5, -1);
  FUNC_3 (&VAR_6, -1);

  VAR_7 = FUNC_10 (&VAR_8->private->th, VAR_5);
  if (VAR_7 != VAR_1)
    FUNC_2 ("Cannot store general-purpose registers for thread %ld: %s",
    (long) FUNC_0 (VAR_2), FUNC_11 (VAR_7));
  VAR_7 = FUNC_9 (&VAR_8->private->th, &VAR_6);
  if (VAR_7 != VAR_1)
    FUNC_2 ("Cannot store floating-point registers  for thread %ld: %s",
    (long) FUNC_0 (VAR_2), FUNC_11 (VAR_7));
}
