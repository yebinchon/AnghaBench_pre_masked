
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ctl_fd; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (scalar_t__,char*,int) ;

int
FUNC_3 (procinfo *VAR_3, int VAR_4)
{
  int VAR_5;






  if (VAR_3->ctl_fd == 0 &&
      FUNC_1 (VAR_3, VAR_0) == 0)
    {
      return 0;
    }
  else
    {
      VAR_5 = (FUNC_0 (VAR_3->ctl_fd, VAR_2, &VAR_4) >= 0);

  }

  return VAR_5;
}
