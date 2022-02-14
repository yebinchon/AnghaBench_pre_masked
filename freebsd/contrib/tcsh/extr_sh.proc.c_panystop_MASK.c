
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {int p_flags; struct process* p_next; } ;
struct TYPE_2__ {struct process* p_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(int VAR_4)
{
    struct process *VAR_5;

    VAR_2 = 2;
    for (VAR_5 = VAR_3.p_next; VAR_5; VAR_5 = VAR_5->p_next)
 if (VAR_5->p_flags & VAR_1)
     FUNC_0(VAR_0, VAR_4 ? "\n" : "");
}
