
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {struct TYPE_3__* owners; } ;
typedef TYPE_1__ t_FmPcdFrmReplicGroup ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(t_Handle VAR_0,
                                bool VAR_1)
{
    t_FmPcdFrmReplicGroup *VAR_2 = (t_FmPcdFrmReplicGroup *)VAR_0;
    FUNC_0(VAR_2);


    if (VAR_1)
        VAR_2->owners++;
    else
    {
        FUNC_0(VAR_2->owners);
        VAR_2->owners--;
    }
}
