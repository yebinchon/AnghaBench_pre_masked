
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int t_Handle ;
struct TYPE_7__ {int numOfKeys; TYPE_2__* keyAndNextEngineParams; } ;
typedef TYPE_3__ t_FmPcdCcNode ;
typedef scalar_t__ t_Error ;
struct TYPE_5__ {scalar_t__ h_Manip; } ;
struct TYPE_6__ {TYPE_1__ nextEngineParams; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static t_Error FUNC_1(t_FmPcdCcNode *VAR_1)
{
    t_Error VAR_2 = VAR_0;
    int VAR_3 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_1->numOfKeys; VAR_3++)
    {
        if (VAR_1->keyAndNextEngineParams[VAR_3].nextEngineParams.h_Manip)
        {
            VAR_2 =
                    FUNC_0(
                            VAR_1->keyAndNextEngineParams[VAR_3].nextEngineParams.h_Manip,
                            (t_Handle)VAR_1);
            if (VAR_2)
                return VAR_2;
        }
    }

    return VAR_2;
}
