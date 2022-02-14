
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int windowLog; } ;
struct TYPE_4__ {TYPE_2__ fParams; } ;
typedef TYPE_1__ ZSTDv06_DCtx ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 size_t FUNC_2 (TYPE_2__*,void const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_3(ZSTDv06_DCtx* VAR_1, const void* VAR_2, size_t VAR_3)
{
    size_t const VAR_4 = FUNC_2(&(VAR_1->fParams), VAR_2, VAR_3);
    if ((FUNC_1()) && (VAR_1->fParams.windowLog > 25)) return FUNC_0(VAR_0);
    return VAR_4;
}
