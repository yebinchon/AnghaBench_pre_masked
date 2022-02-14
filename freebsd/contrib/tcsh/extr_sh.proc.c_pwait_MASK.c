
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {scalar_t__ p_procid; struct process* p_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct process*) ;
 int FUNC_1 (int ) ;
 struct process VAR_1 ;

void
FUNC_2(void)
{
    struct process *VAR_2, *VAR_3;




    for (VAR_3 = (VAR_2 = &VAR_1)->p_next; VAR_3 != ((void*)0); VAR_3 = (VAR_2 = VAR_3)->p_next)
 if (VAR_3->p_procid == 0) {
     VAR_2->p_next = VAR_3->p_next;
     FUNC_0(VAR_3);
     VAR_3 = VAR_2;
 }
    FUNC_1(VAR_0);
}
