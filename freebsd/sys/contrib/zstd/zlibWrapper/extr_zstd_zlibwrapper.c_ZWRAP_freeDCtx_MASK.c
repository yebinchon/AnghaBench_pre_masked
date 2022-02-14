
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int customMem; struct TYPE_4__* version; int zbd; } ;
typedef TYPE_1__ ZWRAP_DCtx ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(ZWRAP_DCtx* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    FUNC_1(VAR_0->zbd);
    FUNC_0(VAR_0->version, VAR_0->customMem);
    FUNC_0(VAR_0, VAR_0->customMem);
    return 0;
}
