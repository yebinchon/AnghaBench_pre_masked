
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_dictLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
struct TYPE_4__ {scalar_t__ streamStage; int dictUses; int * ddictLocal; int * ddict; int customMem; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (void const*,size_t,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

size_t FUNC_3(ZSTD_DCtx* VAR_4,
                                   const void* VAR_5, size_t VAR_6,
                                         ZSTD_dictLoadMethod_e VAR_7,
                                         ZSTD_dictContentType_e VAR_8)
{
    FUNC_0(VAR_4->streamStage != VAR_3, VAR_2);
    FUNC_1(VAR_4);
    if (VAR_5 && VAR_6 != 0) {
        VAR_4->ddictLocal = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_4->customMem);
        FUNC_0(VAR_4->ddictLocal == ((void*)0), VAR_1);
        VAR_4->ddict = VAR_4->ddictLocal;
        VAR_4->dictUses = VAR_0;
    }
    return 0;
}
