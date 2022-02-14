
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int td_thrinfo_t ;
typedef scalar_t__ td_err_e ;
struct thread_info {TYPE_1__* private; } ;
struct TYPE_2__ {int ti_valid; int ti; int th; int th_valid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct thread_info*,int) ;

__attribute__((used)) static td_thrinfo_t *
FUNC_4 (struct thread_info *VAR_1)
{
  td_err_e VAR_2;

  if (VAR_1->private->ti_valid)
    return &VAR_1->private->ti;

  if (!VAR_1->private->th_valid)
    FUNC_3 (VAR_1, 1);

  VAR_2 =
    FUNC_1 (&VAR_1->private->th, &VAR_1->private->ti);
  if (VAR_2 != VAR_0)
    FUNC_0 ("thread_db_get_info: cannot get thread info: %s",
    FUNC_2 (VAR_2));

  VAR_1->private->ti_valid = 1;
  return &VAR_1->private->ti;
}
