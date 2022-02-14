
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; int acqsig; } ;
struct TYPE_7__ {int pid; int proc; TYPE_2__ smode; int status; TYPE_1__* sc; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_5__ {scalar_t__ unit; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(scr_stat *VAR_6)
{
    if (VAR_6->smode.mode != VAR_3)
 return VAR_0;
    if (VAR_6->sc->unit == VAR_4)
 FUNC_3(VAR_5, VAR_0);
    VAR_6->status |= VAR_1;
    FUNC_1(VAR_6->proc);
    FUNC_4(VAR_6->proc, VAR_6->smode.acqsig);
    FUNC_2(VAR_6->proc);
    FUNC_0(5, ("sending acqsig to %d\n", VAR_6->pid));
    return VAR_2;
}
