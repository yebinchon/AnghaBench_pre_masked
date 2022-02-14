
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_6__ {scalar_t__ tid; char* pr_fpregs; } ;
typedef TYPE_1__ tfpregset_t ;
struct TYPE_7__ {scalar_t__ ctl_fd; scalar_t__ tid; scalar_t__ fpregs_valid; } ;
typedef TYPE_2__ procinfo ;
typedef int procfs_ctl_t ;
typedef int gdb_fpregset_t ;
typedef int arg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,...) ;
 int FUNC_1 (char**,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,void*,int) ;

int
FUNC_5 (procinfo *VAR_4)
{
  gdb_fpregset_t *VAR_5;
  int VAR_6;

  if ((VAR_5 = FUNC_3 (VAR_4)) == ((void*)0))
    return 0;

  if (VAR_4->ctl_fd == 0 &&
      FUNC_2 (VAR_4, VAR_0) == 0)
    {
      return 0;
    }
  else
    {
      VAR_6 = (FUNC_0 (VAR_4->ctl_fd, VAR_2, VAR_5) >= 0);


    }


  VAR_4->fpregs_valid = 0;
  return VAR_6;
}
