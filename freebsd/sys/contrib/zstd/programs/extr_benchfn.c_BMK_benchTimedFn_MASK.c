
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double nanoSecPerRun; } ;
struct TYPE_6__ {int runBudget_ns; double nbLoops; unsigned long long timeSpent_ns; TYPE_2__ fastestRun; } ;
typedef int PTime ;
typedef TYPE_1__ BMK_timedFnState_t ;
typedef TYPE_2__ BMK_runTime_t ;
typedef int const BMK_runOutcome_t ;
typedef int BMK_benchParams_t ;


 int const FUNC_0 (int ,double) ;
 TYPE_2__ FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int const FUNC_3 (TYPE_2__) ;
 double FUNC_4 (double,double) ;
 int FUNC_5 (int) ;

BMK_runOutcome_t FUNC_6(BMK_timedFnState_t* VAR_0,
                                  BMK_benchParams_t VAR_1)
{
    PTime const VAR_2 = VAR_0->runBudget_ns;
    PTime const VAR_3 = VAR_2 / 2;
    int VAR_4 = 0;
    BMK_runTime_t VAR_5 = VAR_0->fastestRun;

    while (!VAR_4) {
        BMK_runOutcome_t const VAR_6 = FUNC_0(VAR_1, VAR_0->nbLoops);

        if(!FUNC_2(VAR_6)) {
            return VAR_6;
        }

        { BMK_runTime_t const VAR_7 = FUNC_1(VAR_6);
            double const VAR_8 = VAR_7.nanoSecPerRun * VAR_0->nbLoops;

            VAR_0->timeSpent_ns += (unsigned long long)VAR_8;


            if (VAR_8 > (VAR_2 / 50)) {
                double const VAR_9 = FUNC_4(VAR_5.nanoSecPerRun, VAR_7.nanoSecPerRun);
                VAR_0->nbLoops = (unsigned)(VAR_2 / VAR_9) + 1;
            } else {

                const unsigned VAR_10 = 10;
                FUNC_5(VAR_0->nbLoops < ((unsigned)-1) / VAR_10);
                VAR_0->nbLoops *= VAR_10;
            }

            if(VAR_8 < VAR_3) {

                FUNC_5(VAR_4 == 0);
                continue;
            } else {
                if(VAR_7.nanoSecPerRun < VAR_5.nanoSecPerRun) {
                    VAR_5 = VAR_7;
                }
                VAR_4 = 1;
            }
        }
    }

    return FUNC_3(VAR_5);
}
