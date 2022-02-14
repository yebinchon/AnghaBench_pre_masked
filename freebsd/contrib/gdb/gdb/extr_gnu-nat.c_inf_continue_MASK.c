
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int port; struct proc* next; } ;
struct inf {scalar_t__ stopped; struct proc* threads; int pid; } ;
typedef int process_t ;
typedef scalar_t__ error_t ;


 int FUNC_0 (struct inf*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6 (struct inf *VAR_1)
{
  process_t VAR_2;
  error_t VAR_3 = FUNC_2 (VAR_0, VAR_1->pid, &VAR_2);

  if (!VAR_3)
    {
      FUNC_0 (VAR_1, "continuing process");

      VAR_3 = FUNC_1 (VAR_2);
      if (!VAR_3)
 {
   struct proc *VAR_4;

   for (VAR_4 = VAR_1->threads; VAR_4; VAR_4 = VAR_4->next)
     FUNC_4 (VAR_4->port);

   VAR_1->stopped = 0;
 }
    }

  if (VAR_3)
    FUNC_5 ("Can't continue process: %s", FUNC_3 (VAR_3));
}
