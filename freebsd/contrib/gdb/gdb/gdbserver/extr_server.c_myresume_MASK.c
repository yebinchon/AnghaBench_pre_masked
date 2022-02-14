
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_resume {int thread; int step; int sig; int leave_stopped; } ;
struct inferior_list_entry {int id; } ;
struct TYPE_2__ {int (* resume ) (struct thread_resume*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct thread_resume*) ;
 TYPE_1__* VAR_2 ;

void
FUNC_1 (int VAR_3, int VAR_4)
{
  struct thread_resume VAR_5[2];
  int VAR_6 = 0;

  if (VAR_3 || VAR_4 || VAR_0 > 0)
    {
      VAR_5[0].thread
 = ((struct inferior_list_entry *) VAR_1)->id;
      VAR_5[0].step = VAR_3;
      VAR_5[0].sig = VAR_4;
      VAR_5[0].leave_stopped = 0;
      VAR_6++;
    }
  VAR_5[VAR_6].thread = -1;
  VAR_5[VAR_6].step = 0;
  VAR_5[VAR_6].sig = 0;
  VAR_5[VAR_6].leave_stopped = (VAR_0 > 0);

  (*VAR_2->resume) (VAR_5);
}
