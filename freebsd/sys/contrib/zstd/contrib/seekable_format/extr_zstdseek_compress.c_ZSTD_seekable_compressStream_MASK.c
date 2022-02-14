
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ checksumFlag; } ;
struct TYPE_13__ {size_t maxFrameSize; size_t frameDSize; int frameCSize; int xxhState; TYPE_1__ framelog; int cstream; } ;
typedef TYPE_2__ ZSTD_seekable_CStream ;
struct TYPE_14__ {size_t pos; } ;
typedef TYPE_3__ ZSTD_outBuffer ;
struct TYPE_15__ {int pos; size_t size; size_t member_1; int member_2; int const* const member_0; scalar_t__ src; } ;
typedef TYPE_4__ ZSTD_inBuffer ;
typedef int BYTE ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,int const* const,size_t) ;
 size_t FUNC_2 (int ,TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (size_t const) ;
 size_t FUNC_4 (TYPE_2__*,TYPE_3__*) ;

size_t FUNC_5(ZSTD_seekable_CStream* VAR_0, ZSTD_outBuffer* VAR_1, ZSTD_inBuffer* VAR_2)
{
    const BYTE* const VAR_3 = (const BYTE*) VAR_2->src + VAR_2->pos;
    size_t VAR_4 = VAR_2->size - VAR_2->pos;

    VAR_4 = FUNC_0(VAR_4, (size_t)(VAR_0->maxFrameSize - VAR_0->frameDSize));


    if (VAR_4 > 0) {
        ZSTD_inBuffer VAR_5 = { VAR_3, VAR_4, 0 };
        size_t const VAR_6 = VAR_1->pos;

        size_t const VAR_7 = FUNC_2(VAR_0->cstream, VAR_1, &VAR_5);

        if (VAR_0->framelog.checksumFlag) {
            FUNC_1(&VAR_0->xxhState, VAR_3, VAR_5.pos);
        }

        VAR_0->frameCSize += VAR_1->pos - VAR_6;
        VAR_0->frameDSize += VAR_5.pos;

        VAR_2->pos += VAR_5.pos;

        if (FUNC_3(VAR_7)) return VAR_7;
    }

    if (VAR_0->maxFrameSize == VAR_0->frameDSize) {

        size_t const VAR_8 = FUNC_4(VAR_0, VAR_1);
        if (FUNC_3(VAR_8)) return VAR_8;


        return (size_t)VAR_0->maxFrameSize;
    }

    return (size_t)(VAR_0->maxFrameSize - VAR_0->frameDSize);
}
