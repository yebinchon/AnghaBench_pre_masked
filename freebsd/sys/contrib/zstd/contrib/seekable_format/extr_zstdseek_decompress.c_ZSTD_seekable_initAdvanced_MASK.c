
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_seekable_customFile ;
struct TYPE_4__ {int dstream; scalar_t__ curFrame; scalar_t__ decompressedOffset; int src; } ;
typedef TYPE_1__ ZSTD_seekable ;
typedef scalar_t__ U64 ;
typedef scalar_t__ U32 ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t const) ;
 size_t FUNC_2 (TYPE_1__*) ;

size_t FUNC_3(ZSTD_seekable* VAR_0, ZSTD_seekable_customFile VAR_1)
{
    VAR_0->src = VAR_1;

    { const size_t VAR_2 = FUNC_2(VAR_0);
        if (FUNC_1(VAR_2)) return VAR_2; }

    VAR_0->decompressedOffset = (U64)-1;
    VAR_0->curFrame = (U32)-1;

    { const size_t VAR_3 = FUNC_0(VAR_0->dstream);
        if (FUNC_1(VAR_3)) return VAR_3; }
    return 0;
}
