
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pid; scalar_t__ status_valid; int ctl_fd; } ;
typedef TYPE_1__ procinfo ;
typedef long procfs_ctl_t ;
typedef int arg ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long VAR_10 ;

 long VAR_11 ;

 TYPE_1__* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ,long*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (int ,void*,int) ;

__attribute__((used)) static int
FUNC_4 (procinfo *VAR_12, long VAR_13, long VAR_14)
{
  long VAR_15 = 0;
  if (VAR_12->pid != 0)
    VAR_12 = FUNC_0 (VAR_12->pid, 0);
  VAR_12->status_valid = 0;

  if (!VAR_15)
    FUNC_2 ("procfs: modify_flag failed to turn %s %s",
      VAR_13 == 129 ? "PR_FORK" :
      VAR_13 == 128 ? "PR_RLC" :






      "<unknown flag>",
      VAR_14 == VAR_0 ? "off" : "on");

  return VAR_15;
}
