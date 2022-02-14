
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int windowLog; } ;
struct TYPE_4__ {size_t headerSize; TYPE_2__ params; } ;
typedef TYPE_1__ ZSTDv05_DCtx ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 size_t FUNC_2 (TYPE_2__*,void const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_3(ZSTDv05_DCtx* VAR_2, const void* VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    if (VAR_4 != VAR_2->headerSize)
        return FUNC_0(VAR_1);
    VAR_5 = FUNC_2(&(VAR_2->params), VAR_3, VAR_4);
    if ((FUNC_1()) && (VAR_2->params.windowLog > 25)) return FUNC_0(VAR_0);
    return VAR_5;
}
