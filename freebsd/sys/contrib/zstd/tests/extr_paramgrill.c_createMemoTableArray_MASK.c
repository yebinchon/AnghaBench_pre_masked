
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int varInds_t ;
struct TYPE_6__ {scalar_t__* vals; } ;
typedef TYPE_1__ paramValues_t ;
struct TYPE_7__ {size_t tableLen; int * table; int tableType; int varLen; int varArray; } ;
typedef TYPE_2__ memoTable_t ;
typedef int ZSTD_strategy ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__* const) ;
 size_t FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,size_t const,int const* const,int) ;
 size_t VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static memoTable_t*
FUNC_4(const paramValues_t VAR_7,
                     const varInds_t* const VAR_8,
                     const size_t VAR_9,
                     const U32 VAR_10)
{
    memoTable_t* const VAR_11 = (memoTable_t*)FUNC_0(sizeof(memoTable_t),(VAR_1 + 1));
    ZSTD_strategy VAR_12, VAR_13 = VAR_2, VAR_14 = VAR_1;

    if(VAR_11 == ((void*)0)) {
        return ((void*)0);
    }

    for(VAR_12 = 1; VAR_12 <= (int)VAR_1; VAR_12++) {
        VAR_11[VAR_12].varLen = FUNC_3(VAR_11[VAR_12].varArray, VAR_9, VAR_8, VAR_12);
    }


    if(VAR_10 == 0) {
        for(VAR_12 = 1; VAR_12 <= (int)VAR_1; VAR_12++) {
            VAR_11[VAR_12].tableType = VAR_4;
            VAR_11[VAR_12].table = ((void*)0);
            VAR_11[VAR_12].tableLen = 0;
        }
        return VAR_11;
    }


    if(VAR_7.vals[VAR_5] != VAR_0) {
        VAR_13 = VAR_7.vals[VAR_5];
        VAR_14 = VAR_7.vals[VAR_5];
    }


    for(VAR_12 = VAR_13; VAR_12 <= VAR_14; VAR_12++) {
        size_t VAR_15 = FUNC_2(VAR_11[VAR_12].varArray, VAR_11[VAR_12].varLen);
        VAR_11[VAR_12].tableType = VAR_3;

        if(VAR_10 != VAR_0 && VAR_15 > (1ULL << VAR_10)) {
            VAR_11[VAR_12].tableType = VAR_6;
            VAR_15 = (1ULL << VAR_10);
        }

        VAR_11[VAR_12].table = (BYTE*)FUNC_0(sizeof(BYTE), VAR_15);
        VAR_11[VAR_12].tableLen = VAR_15;

        if(VAR_11[VAR_12].table == ((void*)0)) {
            FUNC_1(VAR_11);
            return ((void*)0);
        }
    }

    return VAR_11;
}
