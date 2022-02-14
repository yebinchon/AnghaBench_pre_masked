
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * cstream; int framelog; } ;
typedef TYPE_1__ ZSTD_seekable_CStream ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

ZSTD_seekable_CStream* FUNC_7()
{
    ZSTD_seekable_CStream* VAR_0 = FUNC_5(sizeof(ZSTD_seekable_CStream));

    if (VAR_0 == ((void*)0)) return ((void*)0);

    FUNC_6(VAR_0, 0, sizeof(*VAR_0));

    VAR_0->cstream = FUNC_0();
    if (VAR_0->cstream == ((void*)0)) goto failed1;

    if (FUNC_2(FUNC_3(&VAR_0->framelog))) goto failed2;

    return VAR_0;

failed2:
    FUNC_1(VAR_0->cstream);
failed1:
    FUNC_4(VAR_0);
    return ((void*)0);
}
