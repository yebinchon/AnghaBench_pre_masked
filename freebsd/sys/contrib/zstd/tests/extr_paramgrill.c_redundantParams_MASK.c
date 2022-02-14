
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* vals; } ;
typedef TYPE_1__ paramValues_t ;
struct TYPE_7__ {scalar_t__ cMem; } ;
typedef TYPE_2__ constraint_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (TYPE_1__ const) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static int
FUNC_2(const paramValues_t VAR_7, const constraint_t VAR_8, const size_t VAR_9)
{
    return
       (FUNC_0(FUNC_1(VAR_7)) > (size_t)VAR_8.cMem)
    || ((1ULL << (VAR_7.vals[VAR_6] - 1)) >= VAR_9 && VAR_7.vals[VAR_6] != VAR_3[VAR_6])
    || (VAR_7.vals[VAR_1] > (VAR_7.vals[VAR_6] + (VAR_7.vals[VAR_5] > VAR_0)))
    || (VAR_7.vals[VAR_4] > VAR_7.vals[VAR_1])
    || (VAR_7.vals[VAR_2] > VAR_7.vals[VAR_6] + 1);
}
