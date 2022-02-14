
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checksumFlag; scalar_t__ seekTableIndex; scalar_t__ seekTablePos; scalar_t__ size; } ;
struct TYPE_5__ {unsigned int maxFrameSize; int cstream; scalar_t__ writingSeekTable; TYPE_1__ framelog; int xxhState; scalar_t__ frameDSize; scalar_t__ frameCSize; } ;
typedef TYPE_2__ ZSTD_seekable_CStream ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 unsigned int VAR_0 ;
 size_t FUNC_2 (int ,int) ;
 int VAR_1 ;

size_t FUNC_3(ZSTD_seekable_CStream* VAR_2,
                                 int VAR_3,
                                 int VAR_4,
                                 unsigned VAR_5)
{
    VAR_2->framelog.size = 0;
    VAR_2->frameCSize = 0;
    VAR_2->frameDSize = 0;


    if (VAR_5 > VAR_0) {
        return FUNC_0(VAR_1);
    }

    VAR_2->maxFrameSize = VAR_5
                                ? VAR_5
                                : VAR_0;

    VAR_2->framelog.checksumFlag = VAR_4;
    if (VAR_2->framelog.checksumFlag) {
        FUNC_1(&VAR_2->xxhState, 0);
    }

    VAR_2->framelog.seekTablePos = 0;
    VAR_2->framelog.seekTableIndex = 0;
    VAR_2->writingSeekTable = 0;

    return FUNC_2(VAR_2->cstream, VAR_3);
}
