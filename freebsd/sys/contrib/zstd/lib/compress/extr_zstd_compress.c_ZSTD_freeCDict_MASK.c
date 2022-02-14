
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_5__ {int workspace; int customMem; } ;
typedef TYPE_1__ ZSTD_CDict ;


 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int const) ;

size_t FUNC_3(ZSTD_CDict* VAR_0)
{
    if (VAR_0==((void*)0)) return 0;
    { ZSTD_customMem const VAR_1 = VAR_0->customMem;
        int VAR_2 = FUNC_1(&VAR_0->workspace, VAR_0);
        FUNC_0(&VAR_0->workspace, VAR_1);
        if (!VAR_2) {
            FUNC_2(VAR_0, VAR_1);
        }
        return 0;
    }
}
