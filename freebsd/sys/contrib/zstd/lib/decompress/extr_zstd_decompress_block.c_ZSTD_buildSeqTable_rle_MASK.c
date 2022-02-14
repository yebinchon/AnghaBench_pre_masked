
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fastMode; scalar_t__ tableLog; } ;
typedef TYPE_1__ ZSTD_seqSymbol_header ;
struct TYPE_5__ {int baseValue; scalar_t__ nbAdditionalBits; scalar_t__ nextState; scalar_t__ nbBits; } ;
typedef TYPE_2__ ZSTD_seqSymbol ;
typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(ZSTD_seqSymbol* VAR_0, U32 VAR_1, U32 VAR_2)
{
    void* VAR_3 = VAR_0;
    ZSTD_seqSymbol_header* const VAR_4 = (ZSTD_seqSymbol_header*)VAR_3;
    ZSTD_seqSymbol* const VAR_5 = VAR_0 + 1;

    VAR_4->tableLog = 0;
    VAR_4->fastMode = 0;

    VAR_5->nbBits = 0;
    VAR_5->nextState = 0;
    FUNC_0(VAR_2 < 255);
    VAR_5->nbAdditionalBits = (BYTE)VAR_2;
    VAR_5->baseValue = VAR_1;
}
