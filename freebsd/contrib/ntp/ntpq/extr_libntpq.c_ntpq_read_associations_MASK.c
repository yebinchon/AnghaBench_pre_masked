
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_2__ {int assid; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;

int FUNC_1 ( u_short VAR_2[], int VAR_3 )
{
    int VAR_4 = 0;

    if (FUNC_0()) {

        if(VAR_1 < VAR_3)
          VAR_3 = VAR_1;

        for (VAR_4=0;VAR_4<VAR_3;VAR_4++)
            VAR_2[VAR_4] = VAR_0[VAR_4].assid;

        return VAR_1;
    }

    return 0;
}
