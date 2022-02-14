
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc {int dummy; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {int pid; TYPE_1__ smode; struct proc* proc; } ;
typedef TYPE_2__ scr_stat ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(scr_stat *VAR_3)
{
    struct proc *VAR_4;

    if (VAR_3->proc) {
 if ((VAR_4 = FUNC_2(VAR_3->pid)) != ((void*)0))
     FUNC_1(VAR_4);
 if (VAR_3->proc == VAR_4)
     return VAR_1;
 VAR_3->proc = ((void*)0);
 VAR_3->smode.mode = VAR_2;
 FUNC_0(5, ("vt controlling process %d died\n", VAR_3->pid));
    }
    return VAR_0;
}
