
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdKg; } ;
typedef TYPE_3__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_5__ {TYPE_1__* clsPlanBlocksMng; } ;
struct TYPE_4__ {size_t ownerId; scalar_t__ allocated; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_7 ;

t_Error FUNC_2(t_Handle VAR_8, uint16_t VAR_9, uint8_t VAR_10, uint8_t *VAR_11)
{
    t_FmPcd *VAR_12 = (t_FmPcd *)VAR_8;
    uint8_t VAR_13, VAR_14=0, VAR_15=0;
    uint8_t VAR_16, VAR_17;




    if (!VAR_9)
        return VAR_3;

    if ((VAR_9 % VAR_0) || (!FUNC_0(VAR_9)))
         FUNC_1(VAR_5, VAR_2, ("numOfClsPlanEntries must be a power of 2 and divisible by 8"));

    VAR_13 = (uint8_t)(VAR_9/VAR_0);


    VAR_15 = 0;
    for (VAR_16 = 0; VAR_16 < VAR_4/VAR_0;)
    {
        if (!VAR_12->p_FmPcdKg->clsPlanBlocksMng[VAR_16].allocated)
        {
            VAR_14++;
            VAR_16++;
            if (VAR_14 == VAR_13)
                break;
        }
        else
        {
            VAR_14 = 0;

            VAR_15 = VAR_16 = (uint8_t)(VAR_15 + VAR_13);
        }
    }

    if (VAR_14 == VAR_13)
    {
        *VAR_11 = (uint8_t)(VAR_15 * VAR_0);
        for (VAR_17 = VAR_15; VAR_17 < (VAR_15 + VAR_13); VAR_17++)
        {
            VAR_12->p_FmPcdKg->clsPlanBlocksMng[VAR_17].allocated = VAR_7;
            VAR_12->p_FmPcdKg->clsPlanBlocksMng[VAR_17].ownerId = VAR_10;
        }
        return VAR_3;
    }
    else
        FUNC_1(VAR_6, VAR_1, ("No resources for clsPlan"));
}
