
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pr_flags; } ;
typedef TYPE_1__ prrun_t ;
typedef int prrun ;
struct TYPE_9__ {scalar_t__ ctl_fd; } ;
typedef TYPE_2__ procinfo ;
typedef int procfs_ctl_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (scalar_t__,char*,int) ;

int
FUNC_5 (procinfo *VAR_6, int VAR_7, int VAR_8)
{
  int VAR_9;
  int VAR_10;






  if (VAR_6->ctl_fd == 0 &&
      FUNC_2 (VAR_6, VAR_0) == 0)
    {
      return 0;
    }

  VAR_10 = VAR_3;
  if (VAR_7)
    VAR_10 |= VAR_5;
  if (VAR_8 == 0)
    VAR_10 |= VAR_4;
  else if (VAR_8 != -1)
    FUNC_3 (VAR_6, VAR_8);
  {
    prrun_t VAR_11;

    FUNC_1 (&VAR_11, 0, sizeof (VAR_11));
    VAR_11.pr_flags = VAR_10;
    VAR_9 = (FUNC_0 (VAR_6->ctl_fd, VAR_2, &VAR_11) >= 0);
  }


  return VAR_9;
}
