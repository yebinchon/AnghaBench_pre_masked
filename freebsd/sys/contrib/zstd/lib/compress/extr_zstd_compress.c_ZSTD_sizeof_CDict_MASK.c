
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__ const* workspace; } ;
struct TYPE_4__ {TYPE_3__ workspace; } ;
typedef TYPE_1__ ZSTD_CDict ;


 int FUNC_0 (int,char*,unsigned int) ;
 size_t FUNC_1 (TYPE_3__*) ;

size_t FUNC_2(const ZSTD_CDict* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    FUNC_0(5, "sizeof(*cdict) : %u", (unsigned)sizeof(*VAR_0));

    return (VAR_0->workspace.workspace == VAR_0 ? 0 : sizeof(*VAR_0))
        + FUNC_1(&VAR_0->workspace);
}
