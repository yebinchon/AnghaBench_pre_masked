
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procdesc {int * pd_proc; } ;
struct proc {struct procdesc* p_procdesc; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct procdesc*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct proc *VAR_2)
{
 struct procdesc *VAR_3;

 FUNC_2(&VAR_1, VAR_0);
 FUNC_0(VAR_2->p_procdesc != ((void*)0), ("procdesc_reap: p_procdesc == NULL"));

 VAR_3 = VAR_2->p_procdesc;
 VAR_3->pd_proc = ((void*)0);
 VAR_2->p_procdesc = ((void*)0);
 FUNC_1(VAR_3);
}
