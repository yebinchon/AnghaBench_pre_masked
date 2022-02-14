
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int execd_pathname; } ;
struct target_waitstatus {scalar_t__ kind; TYPE_1__ value; } ;
typedef int ptid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct target_waitstatus*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;

int
FUNC_3 (int VAR_1, char **VAR_2)
{
  struct target_waitstatus VAR_3;
  ptid_t VAR_4;

  FUNC_0 (&VAR_4, &VAR_3);

  if (VAR_3.kind != VAR_0)
    return 0;

  if (FUNC_1 (VAR_4) != VAR_1)
    return 0;

  *VAR_2 = FUNC_2 (VAR_3.value.execd_pathname);
  return 1;
}
