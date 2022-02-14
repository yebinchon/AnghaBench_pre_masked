
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {scalar_t__ p_procid; scalar_t__ p_jobid; int p_index; struct process* p_next; int p_flags; struct process* p_friends; } ;
struct TYPE_2__ {struct process* p_next; } ;


 int FUNC_0 (int,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct process*) ;
 struct process* VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct process *VAR_4)
{
    struct process *VAR_5;
    int VAR_6;

    if (VAR_4->p_procid == 0) {
 FUNC_2("%s", FUNC_0(17, 3, "BUG: process flushed twice"));
 return;
    }
    while (VAR_4->p_procid != VAR_4->p_jobid)
 VAR_4 = VAR_4->p_friends;
    FUNC_1(VAR_4);
    if (VAR_4 == VAR_1)
 VAR_1 = 0;
    VAR_6 = VAR_4->p_index;
    VAR_5 = VAR_4;
    do {
 VAR_5->p_index = VAR_5->p_procid = 0;
 VAR_5->p_flags &= ~VAR_0;
    } while ((VAR_5 = VAR_5->p_friends) != VAR_4);
    if (VAR_6 == VAR_2) {
 for (VAR_5 = VAR_3.p_next, VAR_6 = 0; VAR_5; VAR_5 = VAR_5->p_next)
     if (VAR_5->p_index > VAR_6)
  VAR_6 = VAR_5->p_index;
 VAR_2 = VAR_6;
    }
}
