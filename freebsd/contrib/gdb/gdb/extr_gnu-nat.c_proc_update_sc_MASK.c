
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_state_t ;
struct proc {int sc; int cur_sc; scalar_t__ fetched_regs; scalar_t__ state_changed; scalar_t__ state_valid; scalar_t__ aborted; int port; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct proc*,char*,...) ;
 scalar_t__ FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;

int
FUNC_10 (struct proc *VAR_2)
{
  int VAR_3;
  int VAR_4 = 0;
  int VAR_5 = VAR_2->sc - VAR_2->cur_sc;

  if (VAR_5)
    FUNC_1 (VAR_2, "sc: %d --> %d", VAR_2->cur_sc, VAR_2->sc);

  if (VAR_2->sc == 0 && VAR_2->state_changed)

    {
      FUNC_0 (FUNC_3 (VAR_2));
      FUNC_1 (VAR_2, "storing back changed thread state");
      VAR_4 = FUNC_8 (VAR_2->port, VAR_0,
    (thread_state_t) &VAR_2->state, VAR_1);
      if (!VAR_4)
 VAR_2->state_changed = 0;
    }

  if (VAR_5 > 0)
    {
      while (VAR_5-- > 0 && !VAR_4)
 {
   if (FUNC_2 (VAR_2))
     VAR_4 = FUNC_6 (VAR_2->port);
   else
     VAR_4 = FUNC_9 (VAR_2->port);
 }
    }
  else
    {
      while (VAR_5++ < 0 && !VAR_4)
 {
   if (FUNC_2 (VAR_2))
     VAR_4 = FUNC_5 (VAR_2->port);
   else
     VAR_4 = FUNC_7 (VAR_2->port);
 }
    }
  if (!VAR_4)
    VAR_2->cur_sc = VAR_2->sc;


  VAR_3 = !VAR_4 && VAR_2->sc == 0;

  FUNC_1 (VAR_2, "is %s", VAR_4 ? "dead" : VAR_3 ? "running" : "suspended");
  if (VAR_4)
    FUNC_1 (VAR_2, "err = %s", FUNC_4 (VAR_4));

  if (VAR_3)
    {
      VAR_2->aborted = 0;
      VAR_2->state_valid = VAR_2->state_changed = 0;
      VAR_2->fetched_regs = 0;
    }

  return VAR_3;
}
