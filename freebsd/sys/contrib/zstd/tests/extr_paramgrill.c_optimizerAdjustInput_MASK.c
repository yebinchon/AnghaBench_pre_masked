
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_3__ {scalar_t__* vals; } ;
typedef TYPE_1__ paramValues_t ;
typedef scalar_t__ U32 ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 size_t VAR_3 ;
 int FUNC_4 (int ,size_t,scalar_t__,int ) ;
 unsigned int* VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 scalar_t__* VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;

__attribute__((used)) static void FUNC_5(paramValues_t* VAR_12, const size_t VAR_13)
{
    varInds_t VAR_14;
    for(VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
        if(VAR_12->vals[VAR_14] != VAR_1) {
            U32 VAR_15 = FUNC_2(FUNC_1(VAR_12->vals[VAR_14], VAR_7[VAR_14]), VAR_6[VAR_14]);
            if(VAR_15 != VAR_12->vals[VAR_14]) {
                VAR_12->vals[VAR_14] = VAR_15;
                FUNC_0("Warning: parameter %s not in valid range, adjusting to ",
                        VAR_4[VAR_14]);
                FUNC_4(VAR_9, VAR_14, VAR_15, 0); FUNC_0("\n");
            }
        }
    }

    if(VAR_12->vals[VAR_11] != VAR_1) {

        U32 VAR_16 = VAR_13 > 1 ? FUNC_3((U32)(VAR_13-1)) + 1 : 1;


        if(VAR_13 < (1ULL << 31) && VAR_16 + 1 < VAR_12->vals[VAR_11]) {
            U32 VAR_17 = FUNC_1(VAR_7[VAR_11], VAR_16);
            if(VAR_17 != VAR_12->vals[VAR_11]) {
                VAR_12->vals[VAR_11] = VAR_17;
                FUNC_0("Warning: windowLog larger than src/block size, adjusted to %u\n",
                        (unsigned)VAR_12->vals[VAR_11]);
            }
        }
    }

    if(VAR_12->vals[VAR_11] != VAR_1 && VAR_12->vals[VAR_3] != VAR_1) {
        U32 VAR_18;
        if(VAR_12->vals[VAR_10] == VAR_1 || VAR_12->vals[VAR_10] >= (U32)VAR_2) {
            VAR_18 = VAR_12->vals[VAR_11] + 1;
        } else {
            VAR_18 = VAR_12->vals[VAR_11];
        }

        if(VAR_12->vals[VAR_3] > VAR_18) {
            VAR_12->vals[VAR_3] = VAR_18;
            FUNC_0("Warning: chainlog too much larger than windowLog size, adjusted to %u\n",
                    (unsigned)VAR_12->vals[VAR_3]);
        }
    }

    if(VAR_12->vals[VAR_11] != VAR_1 && VAR_12->vals[VAR_5] != VAR_1) {
        if(VAR_12->vals[VAR_11] + 1 < VAR_12->vals[VAR_5]) {
            VAR_12->vals[VAR_5] = VAR_12->vals[VAR_11] + 1;
            FUNC_0("Warning: hashlog too much larger than windowLog size, adjusted to %u\n",
                    (unsigned)VAR_12->vals[VAR_5]);
        }
    }

    if(VAR_12->vals[VAR_8] != VAR_1 && VAR_12->vals[VAR_3] != VAR_1) {
        if(VAR_12->vals[VAR_8] > VAR_12->vals[VAR_3]) {
            VAR_12->vals[VAR_3] = VAR_12->vals[VAR_8];
            FUNC_0("Warning: searchLog larger than chainLog, adjusted to %u\n",
                    (unsigned)VAR_12->vals[VAR_8]);
        }
    }
}
