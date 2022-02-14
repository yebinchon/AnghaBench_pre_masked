
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * dstream; } ;
typedef TYPE_1__ ZSTD_seekable ;


 int * FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

ZSTD_seekable* FUNC_4(void)
{
    ZSTD_seekable* VAR_0 = FUNC_2(sizeof(ZSTD_seekable));

    if (VAR_0 == ((void*)0)) return ((void*)0);


    FUNC_3(VAR_0, 0, sizeof(*VAR_0));

    VAR_0->dstream = FUNC_0();
    if (VAR_0->dstream == ((void*)0)) {
        FUNC_1(VAR_0);
        return ((void*)0);
    }

    return VAR_0;
}
