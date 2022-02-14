
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_10__ {TYPE_5__* p_FmPcdPlcr; } ;
typedef TYPE_3__ t_FmPcd ;
typedef int t_Error ;
struct TYPE_11__ {TYPE_2__* profiles; } ;
struct TYPE_8__ {scalar_t__ ownerId; scalar_t__ allocated; } ;
struct TYPE_9__ {TYPE_1__ profilesMng; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static t_Error FUNC_4(t_FmPcd *VAR_9, uint16_t VAR_10, uint16_t *VAR_11)
{
    uint32_t VAR_12;
    uint16_t VAR_13, VAR_14=0;
    uint32_t VAR_15;

    FUNC_3(VAR_9, VAR_0);

    if (!VAR_10)
        return VAR_3;

    if (VAR_10>VAR_4)
        FUNC_2(VAR_6, VAR_2, ("numProfiles is too big."));

    VAR_15 = FUNC_0(VAR_9->p_FmPcdPlcr);

    VAR_12 = 0;
    for (VAR_13=0;VAR_13<VAR_4; VAR_13++)
        if (!VAR_9->p_FmPcdPlcr->profiles[VAR_13].profilesMng.allocated)
        {
            VAR_12++;
            VAR_11[VAR_14] = VAR_13;
            VAR_14++;
            if (VAR_12 == VAR_10)
                break;
        }

    if (VAR_12 != VAR_10)
    {
        FUNC_1(VAR_9->p_FmPcdPlcr, VAR_15);
        FUNC_2(VAR_5, VAR_1,VAR_7);
    }

    for (VAR_13 = 0;VAR_13<VAR_14;VAR_13++)
    {
        VAR_9->p_FmPcdPlcr->profiles[VAR_11[VAR_13]].profilesMng.allocated = VAR_8;
        VAR_9->p_FmPcdPlcr->profiles[VAR_11[VAR_13]].profilesMng.ownerId = 0;
    }
    FUNC_1(VAR_9->p_FmPcdPlcr, VAR_15);

    return VAR_3;
}
