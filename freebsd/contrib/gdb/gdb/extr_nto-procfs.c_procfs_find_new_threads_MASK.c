
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int status ;
typedef int ptid_t ;
struct TYPE_3__ {int tid; } ;
typedef TYPE_1__ procfs_status ;
typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ,TYPE_1__*,int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

void
FUNC_5 (void)
{
  procfs_status VAR_4;
  pid_t VAR_5;
  ptid_t VAR_6;

  if (VAR_2 == -1)
    return;

  VAR_5 = FUNC_4 (VAR_3);

  for (VAR_4.tid = 1;; ++VAR_4.tid)
    {
      if (FUNC_1 (VAR_2, VAR_0, &VAR_4, sizeof (VAR_4), 0)
   != VAR_1 && VAR_4.tid != 0)
 break;
      VAR_6 = FUNC_3 (VAR_5, 0, VAR_4.tid);
      if (!FUNC_2 (VAR_6))
 FUNC_0 (VAR_6);
    }
  return;
}
