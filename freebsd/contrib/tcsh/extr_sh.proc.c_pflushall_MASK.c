
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {scalar_t__ p_procid; struct process* p_next; } ;
struct TYPE_2__ {struct process* p_next; } ;


 int FUNC_0 (struct process*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(void)
{
    struct process *VAR_1;

    for (VAR_1 = VAR_0.p_next; VAR_1 != ((void*)0); VAR_1 = VAR_1->p_next)
 if (VAR_1->p_procid)
     FUNC_0(VAR_1);
}
