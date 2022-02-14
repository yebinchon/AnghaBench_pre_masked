
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc; scalar_t__ dictSize; scalar_t__ outEnd; scalar_t__ outStart; scalar_t__ inPos; scalar_t__ hPos; int stage; } ;
typedef TYPE_1__ ZBUFF_DCtx ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(ZBUFF_DCtx* VAR_1)
{
    VAR_1->stage = VAR_0;
    VAR_1->hPos = VAR_1->inPos = VAR_1->outStart = VAR_1->outEnd = VAR_1->dictSize = 0;
    return FUNC_0(VAR_1->zc);
}
