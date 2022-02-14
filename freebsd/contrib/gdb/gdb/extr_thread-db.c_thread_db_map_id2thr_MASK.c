
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ td_err_e ;
struct thread_info {TYPE_1__* private; int ptid; } ;
struct TYPE_2__ {int th_valid; int th; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,long,char*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *) ;
 int VAR_1 ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (struct thread_info *VAR_2, int VAR_3)
{
  td_err_e VAR_4;

  if (VAR_2->private->th_valid)
    return;

  VAR_4 = FUNC_2 (VAR_1, FUNC_0 (VAR_2->ptid),
       &VAR_2->private->th);
  if (VAR_4 != VAR_0)
    {
      if (VAR_3)
 FUNC_1 ("Cannot find thread %ld: %s",
        (long) FUNC_0 (VAR_2->ptid),
        FUNC_3 (VAR_4));
    }
  else
    VAR_2->private->th_valid = 1;
}
