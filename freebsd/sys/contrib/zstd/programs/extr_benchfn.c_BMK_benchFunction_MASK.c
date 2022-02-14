
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UTIL_time_t ;
struct TYPE_6__ {size_t blockCount; size_t (* benchFn ) (int ,scalar_t__,int ,int ,int ) ;size_t* blockResults; scalar_t__* srcSizes; scalar_t__ (* errorFn ) (size_t const) ;int benchPayload; int * dstCapacities; int * dstBuffers; int * srcBuffers; int initPayload; int (* initFn ) (int ) ;} ;
struct TYPE_5__ {double nanoSecPerRun; size_t sumOfReturn; } ;
typedef scalar_t__ PTime ;
typedef TYPE_1__ BMK_runTime_t ;
typedef int BMK_runOutcome_t ;
typedef TYPE_2__ BMK_benchParams_t ;


 int FUNC_0 (size_t const) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_8 (size_t const) ;

BMK_runOutcome_t FUNC_9(BMK_benchParams_t VAR_0,
                                   unsigned VAR_1)
{
    size_t VAR_2 = 0;
    VAR_1 += !VAR_1;


    { size_t VAR_3;
        for(VAR_3 = 0; VAR_3 < VAR_0.blockCount; VAR_3++) {
            FUNC_5(VAR_0.dstBuffers[VAR_3], 0xE5, VAR_0.dstCapacities[VAR_3]);
    } }


    { UTIL_time_t const VAR_4 = FUNC_4();
        unsigned VAR_5, VAR_6;
        if (VAR_0.initFn != ((void*)0)) VAR_0.initFn(VAR_0.initPayload);
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            for (VAR_6 = 0; VAR_6 < VAR_0.blockCount; VAR_6++) {
                size_t const VAR_7 = VAR_0.benchFn(VAR_0.srcBuffers[VAR_6], VAR_0.srcSizes[VAR_6],
                                   VAR_0.dstBuffers[VAR_6], VAR_0.dstCapacities[VAR_6],
                                   VAR_0.benchPayload);
                if (VAR_5 == 0) {
                    if (VAR_0.blockResults != ((void*)0)) VAR_0.blockResults[VAR_6] = VAR_7;
                    if ((VAR_0.errorFn != ((void*)0)) && (VAR_0.errorFn(VAR_7))) {
                        FUNC_2(FUNC_0(VAR_7),
                            "Function benchmark failed on block %u (of size %u) with error %i",
                            VAR_6, (unsigned)VAR_0.srcSizes[VAR_6], (int)VAR_7);
                    }
                    VAR_2 += VAR_7;
            } }
        }

        { PTime const VAR_8 = FUNC_3(VAR_4);
            BMK_runTime_t VAR_9;
            VAR_9.nanoSecPerRun = (double)VAR_8 / VAR_1;
            VAR_9.sumOfReturn = VAR_2;
            return FUNC_1(VAR_9);
    } }
}
