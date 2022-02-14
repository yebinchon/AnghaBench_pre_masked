
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flagStaticTables; int * hufTableX4; int * dictEnd; int * vBase; int * base; int * previousDstEnd; int stage; int expected; } ;
typedef TYPE_1__ ZSTDv05_DCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

size_t FUNC_0(ZSTDv05_DCtx* VAR_3)
{
    VAR_3->expected = VAR_1;
    VAR_3->stage = VAR_2;
    VAR_3->previousDstEnd = ((void*)0);
    VAR_3->base = ((void*)0);
    VAR_3->vBase = ((void*)0);
    VAR_3->dictEnd = ((void*)0);
    VAR_3->hufTableX4[0] = VAR_0;
    VAR_3->flagStaticTables = 0;
    return 0;
}
