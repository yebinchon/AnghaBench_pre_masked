
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dictUses; int * ddict; int * ddictLocal; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ZSTD_DCtx* VAR_1)
{
    FUNC_0(VAR_1->ddictLocal);
    VAR_1->ddictLocal = ((void*)0);
    VAR_1->ddict = ((void*)0);
    VAR_1->dictUses = VAR_0;
}
