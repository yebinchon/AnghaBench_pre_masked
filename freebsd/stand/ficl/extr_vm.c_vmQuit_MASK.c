
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i; } ;
struct TYPE_5__ {scalar_t__ index; int * end; int * cp; } ;
struct TYPE_7__ {char* pad; TYPE_2__ sourceID; TYPE_1__ tib; int state; int * runningWord; int * ip; scalar_t__ fRestart; int rStack; } ;
typedef TYPE_3__ FICL_VM ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(FICL_VM *VAR_1)
{
    FUNC_0(VAR_1->rStack);
    VAR_1->fRestart = 0;
    VAR_1->ip = ((void*)0);
    VAR_1->runningWord = ((void*)0);
    VAR_1->state = VAR_0;
    VAR_1->tib.cp = ((void*)0);
    VAR_1->tib.end = ((void*)0);
    VAR_1->tib.index = 0;
    VAR_1->pad[0] = '\0';
    VAR_1->sourceID.i = 0;
    return;
}
