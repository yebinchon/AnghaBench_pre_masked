
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * rep; int hufTable; int OFTable; int MLTable; int LLTable; } ;
struct TYPE_9__ {int dictSize; TYPE_2__ entropy; scalar_t__ entropyPresent; scalar_t__ dictContent; int dictID; } ;
typedef TYPE_3__ ZSTD_DDict ;
struct TYPE_7__ {int * rep; } ;
struct TYPE_10__ {int litEntropy; int fseEntropy; TYPE_1__ entropy; int HUFptr; int OFTptr; int MLTptr; int LLTptr; int const* dictEnd; int const* previousDstEnd; scalar_t__ virtualStart; scalar_t__ prefixStart; int dictID; } ;
typedef TYPE_4__ ZSTD_DCtx ;
typedef int BYTE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;

void FUNC_2(ZSTD_DCtx* VAR_0, const ZSTD_DDict* VAR_1)
{
    FUNC_0(4, "ZSTD_copyDDictParameters");
    FUNC_1(VAR_0 != ((void*)0));
    FUNC_1(VAR_1 != ((void*)0));
    VAR_0->dictID = VAR_1->dictID;
    VAR_0->prefixStart = VAR_1->dictContent;
    VAR_0->virtualStart = VAR_1->dictContent;
    VAR_0->dictEnd = (const BYTE*)VAR_1->dictContent + VAR_1->dictSize;
    VAR_0->previousDstEnd = VAR_0->dictEnd;
    if (VAR_1->entropyPresent) {
        VAR_0->litEntropy = 1;
        VAR_0->fseEntropy = 1;
        VAR_0->LLTptr = VAR_1->entropy.LLTable;
        VAR_0->MLTptr = VAR_1->entropy.MLTable;
        VAR_0->OFTptr = VAR_1->entropy.OFTable;
        VAR_0->HUFptr = VAR_1->entropy.hufTable;
        VAR_0->entropy.rep[0] = VAR_1->entropy.rep[0];
        VAR_0->entropy.rep[1] = VAR_1->entropy.rep[1];
        VAR_0->entropy.rep[2] = VAR_1->entropy.rep[2];
    } else {
        VAR_0->litEntropy = 0;
        VAR_0->fseEntropy = 0;
    }
}
