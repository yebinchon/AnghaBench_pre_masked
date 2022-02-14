
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sig; } ;
struct TYPE_5__ {TYPE_1__ value; int kind; } ;
struct TYPE_6__ {TYPE_2__ status; } ;
struct inf {TYPE_3__ wait; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;

void
FUNC_1 (struct inf *VAR_2)
{
  FUNC_0 ("Pid %d died with unknown exit status, using SIGKILL.", VAR_2->pid);
  VAR_2->wait.status.kind = VAR_1;
  VAR_2->wait.status.value.sig = VAR_0;
}
