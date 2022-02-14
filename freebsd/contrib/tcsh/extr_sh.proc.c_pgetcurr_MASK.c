
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {scalar_t__ p_procid; scalar_t__ p_jobid; int p_flags; struct process* p_next; } ;
struct TYPE_2__ {struct process* p_next; } ;


 int VAR_0 ;
 struct process* VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static struct process *
FUNC_0(struct process *VAR_3)
{
    struct process *VAR_4;
    struct process *VAR_5 = ((void*)0);

    for (VAR_4 = VAR_2.p_next; VAR_4; VAR_4 = VAR_4->p_next)
 if (VAR_4 != VAR_1 && VAR_4 != VAR_3 && VAR_4->p_procid &&
     VAR_4->p_procid == VAR_4->p_jobid) {
     if (VAR_4->p_flags & VAR_0)
  return (VAR_4);
     if (VAR_5 == ((void*)0))
  VAR_5 = VAR_4;
 }
    return (VAR_5);
}
