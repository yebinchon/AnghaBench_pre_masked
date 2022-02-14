
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ const maxNbSeq; int longLengthID; size_t longLengthPos; TYPE_2__* sequencesStart; TYPE_2__* sequences; scalar_t__* mlCode; scalar_t__* ofCode; scalar_t__* llCode; } ;
typedef TYPE_1__ seqStore_t ;
struct TYPE_5__ {scalar_t__ litLength; scalar_t__ matchLength; int offset; } ;
typedef TYPE_2__ seqDef ;
typedef scalar_t__ U32 ;
typedef scalar_t__ BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

void FUNC_4(const seqStore_t* VAR_2)
{
    const seqDef* const VAR_3 = VAR_2->sequencesStart;
    BYTE* const VAR_4 = VAR_2->llCode;
    BYTE* const VAR_5 = VAR_2->ofCode;
    BYTE* const VAR_6 = VAR_2->mlCode;
    U32 const VAR_7 = (U32)(VAR_2->sequences - VAR_2->sequencesStart);
    U32 VAR_8;
    FUNC_3(VAR_7 <= VAR_2->maxNbSeq);
    for (VAR_8=0; VAR_8<VAR_7; VAR_8++) {
        U32 const VAR_9 = VAR_3[VAR_8].litLength;
        U32 const VAR_10 = VAR_3[VAR_8].matchLength;
        VAR_4[VAR_8] = (BYTE)FUNC_0(VAR_9);
        VAR_5[VAR_8] = (BYTE)FUNC_2(VAR_3[VAR_8].offset);
        VAR_6[VAR_8] = (BYTE)FUNC_1(VAR_10);
    }
    if (VAR_2->longLengthID==1)
        VAR_4[VAR_2->longLengthPos] = VAR_0;
    if (VAR_2->longLengthID==2)
        VAR_6[VAR_2->longLengthPos] = VAR_1;
}
