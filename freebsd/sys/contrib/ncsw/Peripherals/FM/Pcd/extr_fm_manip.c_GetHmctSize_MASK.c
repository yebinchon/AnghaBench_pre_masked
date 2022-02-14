
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ tableSize; scalar_t__ h_NextManip; struct TYPE_6__* h_PrevManip; } ;
typedef TYPE_1__ t_FmPcdManip ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static uint16_t FUNC_3(t_FmPcdManip *VAR_0)
{
    uint16_t VAR_1 = 0;
    t_FmPcdManip *VAR_2 = VAR_0;

    if (!FUNC_0(VAR_0))
        return VAR_0->tableSize;


    while (FUNC_1(VAR_2))
        VAR_2 = VAR_2->h_PrevManip;

    while (FUNC_2(VAR_2))
    {
        VAR_1 += VAR_2->tableSize;
        VAR_2 = (t_FmPcdManip *)VAR_2->h_NextManip;
    }
    VAR_1 += VAR_2->tableSize;

    return (VAR_1);
}
