
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {struct itimers* p_itimers; } ;
struct itimers {int ** its_timers; int its_worklist; int its_prof; int its_virtual; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct itimers*,int ) ;
 struct itimers* FUNC_5 (int,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct proc *VAR_4)
{
 struct itimers *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(sizeof (struct itimers), VAR_0, VAR_1 | VAR_2);
 FUNC_0(&VAR_5->its_virtual);
 FUNC_0(&VAR_5->its_prof);
 FUNC_3(&VAR_5->its_worklist);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_5->its_timers[VAR_6] = ((void*)0);
 FUNC_1(VAR_4);
 if (VAR_4->p_itimers == ((void*)0)) {
  VAR_4->p_itimers = VAR_5;
  FUNC_2(VAR_4);
 }
 else {
  FUNC_2(VAR_4);
  FUNC_4(VAR_5, VAR_0);
 }
}
