
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {TYPE_1__* p_cwd; struct process* p_command; } ;
struct TYPE_2__ {scalar_t__ di_count; scalar_t__ di_next; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct process*) ;

__attribute__((used)) static void
FUNC_2(struct process *VAR_0)
{
    FUNC_1(VAR_0->p_command);
    if (VAR_0->p_cwd && --VAR_0->p_cwd->di_count == 0)
 if (VAR_0->p_cwd->di_next == 0)
     FUNC_0(VAR_0->p_cwd);
    FUNC_1(VAR_0);
}
