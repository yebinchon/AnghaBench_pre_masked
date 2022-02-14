
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {TYPE_1__* schemesMng; struct TYPE_5__* p_FmPcdKg; } ;
typedef TYPE_2__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_4__ {size_t ownerId; scalar_t__ allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

t_Error FUNC_2(t_Handle VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t *VAR_8)
{
    t_FmPcd *VAR_9 = (t_FmPcd *)VAR_5;
    uint8_t VAR_10;

    FUNC_1(VAR_9, VAR_0);
    FUNC_1(VAR_9->p_FmPcdKg, VAR_0);




    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    {
        if (!VAR_9->p_FmPcdKg->schemesMng[VAR_8[VAR_10]].allocated)
        {
            FUNC_0(VAR_4, VAR_1, ("Scheme was not previously allocated"));
        }
        if (VAR_9->p_FmPcdKg->schemesMng[VAR_8[VAR_10]].ownerId != VAR_7)
        {
            FUNC_0(VAR_4, VAR_1, ("Scheme is not owned by caller. "));
        }
        VAR_9->p_FmPcdKg->schemesMng[VAR_8[VAR_10]].allocated = VAR_3;
        VAR_9->p_FmPcdKg->schemesMng[VAR_8[VAR_10]].ownerId = 0;
    }

    return VAR_2;
}
