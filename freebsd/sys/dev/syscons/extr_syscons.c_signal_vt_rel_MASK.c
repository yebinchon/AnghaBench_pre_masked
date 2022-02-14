
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mode; int relsig; } ;
struct TYPE_5__ {int pid; int proc; TYPE_1__ smode; int status; } ;
typedef TYPE_2__ scr_stat ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(scr_stat *VAR_4)
{
    if (VAR_4->smode.mode != VAR_3)
 return VAR_0;
    VAR_4->status |= VAR_1;
    FUNC_1(VAR_4->proc);
    FUNC_3(VAR_4->proc, VAR_4->smode.relsig);
    FUNC_2(VAR_4->proc);
    FUNC_0(5, ("sending relsig to %d\n", VAR_4->pid));
    return VAR_2;
}
