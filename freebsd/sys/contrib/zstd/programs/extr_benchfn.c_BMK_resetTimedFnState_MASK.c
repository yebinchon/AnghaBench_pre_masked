
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double nanoSecPerRun; size_t sumOfReturn; } ;
struct TYPE_5__ {int timeBudget_ns; int runBudget_ns; int nbLoops; int coolTime; TYPE_1__ fastestRun; scalar_t__ timeSpent_ns; } ;
typedef int PTime ;
typedef TYPE_2__ BMK_timedFnState_t ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(BMK_timedFnState_t* VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    if (!VAR_2) VAR_2 = 1 ;
    if (!VAR_3) VAR_3 = 1;
    if (VAR_3 > VAR_2) VAR_3 = VAR_2;
    VAR_1->timeSpent_ns = 0;
    VAR_1->timeBudget_ns = (PTime)VAR_2 * VAR_0 / 1000;
    VAR_1->runBudget_ns = (PTime)VAR_3 * VAR_0 / 1000;
    VAR_1->fastestRun.nanoSecPerRun = (double)VAR_0 * 2000000000;
    VAR_1->fastestRun.sumOfReturn = (size_t)(-1LL);
    VAR_1->nbLoops = 1;
    VAR_1->coolTime = FUNC_0();
}
