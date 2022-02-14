
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
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_6 ;

t_Error FUNC_2(t_Handle VAR_7, uint8_t VAR_8, uint8_t VAR_9, uint8_t *VAR_10)
{
    t_FmPcd *VAR_11 = (t_FmPcd *)VAR_7;
    uint8_t VAR_12, VAR_13;

    FUNC_1(VAR_11, VAR_0);
    FUNC_1(VAR_11->p_FmPcdKg, VAR_0);




    for (VAR_13 = 0, VAR_12 = 0; VAR_12 < VAR_4 && VAR_13 < VAR_8; VAR_12++)
    {
        if (!VAR_11->p_FmPcdKg->schemesMng[VAR_12].allocated)
        {
            VAR_11->p_FmPcdKg->schemesMng[VAR_12].allocated = VAR_6;
            VAR_11->p_FmPcdKg->schemesMng[VAR_12].ownerId = VAR_9;
            VAR_10[VAR_13] = VAR_12;
            VAR_13++;
        }
    }

    if (VAR_13 != VAR_8)
    {

        for (VAR_13--; VAR_13; VAR_13--)
        {
            VAR_11->p_FmPcdKg->schemesMng[VAR_10[VAR_13]].allocated = VAR_3;
            VAR_11->p_FmPcdKg->schemesMng[VAR_10[VAR_13]].ownerId = 0;
            VAR_10[VAR_13] = 0;
        }

        FUNC_0(VAR_5, VAR_1, ("No schemes found"));
    }

    return VAR_2;
}
