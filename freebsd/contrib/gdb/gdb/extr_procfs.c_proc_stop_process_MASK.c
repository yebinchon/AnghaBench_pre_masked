
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ctl_fd; int status_valid; int prstatus; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__,char*,int) ;

int
FUNC_8 (procinfo *VAR_3)
{
  int VAR_4;






  if (VAR_3->ctl_fd == 0 &&
      FUNC_2 (VAR_3, VAR_0) == 0)
    return 0;
  else
    {




      VAR_4 = (FUNC_1 (VAR_3->ctl_fd, VAR_2, &VAR_3->prstatus) >= 0);

      if (VAR_4)
 {
   VAR_3->status_valid = 1;
   FUNC_0 (FUNC_3 (VAR_3),
        FUNC_6 (VAR_3),
        FUNC_5 (VAR_3),
        FUNC_4 (VAR_3));
 }

    }

  return VAR_4;
}
