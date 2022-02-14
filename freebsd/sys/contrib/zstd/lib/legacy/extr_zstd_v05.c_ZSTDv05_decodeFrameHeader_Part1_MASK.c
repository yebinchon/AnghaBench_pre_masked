
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t headerSize; } ;
typedef TYPE_1__ ZSTDv05_DCtx ;
typedef scalar_t__ U32 ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_2(ZSTDv05_DCtx* VAR_4, const void* VAR_5, size_t VAR_6)
{
    U32 VAR_7;
    if (VAR_6 != VAR_1)
        return FUNC_0(VAR_3);
    VAR_7 = FUNC_1(VAR_5);
    if (VAR_7 != VAR_0) return FUNC_0(VAR_2);
    VAR_4->headerSize = VAR_1;
    return VAR_4->headerSize;
}
