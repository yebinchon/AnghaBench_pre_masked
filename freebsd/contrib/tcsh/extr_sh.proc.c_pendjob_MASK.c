
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int p_flags; scalar_t__ p_procid; scalar_t__ p_jobid; scalar_t__ p_index; struct process* p_friends; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct process* VAR_2 ;
 struct process* VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char) ;

void
FUNC_2(void)
{
    struct process *VAR_4, *VAR_5;

    if (VAR_2 && (VAR_2->p_flags & (VAR_0 | VAR_1)) == 0) {
 VAR_4 = VAR_2;
 VAR_2 = ((void*)0);
 while (VAR_4->p_procid != VAR_4->p_jobid)
     VAR_4 = VAR_4->p_friends;
 FUNC_0("[%d]", VAR_4->p_index);
 VAR_5 = VAR_4;
 do {
     FUNC_0(" %d", VAR_4->p_procid);
     VAR_4 = VAR_4->p_friends;
 } while (VAR_4 != VAR_5);
 FUNC_1('\n');
    }
    VAR_3 = VAR_2 = 0;
}
