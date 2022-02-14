
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ctl_fd; scalar_t__ gregs_valid; } ;
typedef TYPE_1__ procinfo ;
typedef int procfs_ctl_t ;
typedef int gdb_gregset_t ;
typedef int arg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,char*) ;
 int FUNC_1 (char**,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,void*,int) ;

int
FUNC_5 (procinfo *VAR_3)
{
  gdb_gregset_t *VAR_4;
  int VAR_5;

  if ((VAR_4 = FUNC_3 (VAR_3)) == ((void*)0))
    return 0;

  if (VAR_3->ctl_fd == 0 &&
      FUNC_2 (VAR_3, VAR_0) == 0)
    {
      return 0;
    }
  else
    {
      VAR_5 = (FUNC_0 (VAR_3->ctl_fd, VAR_2, VAR_4) >= 0);

    }


  VAR_3->gregs_valid = 0;
  return VAR_5;
}
