
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {TYPE_1__* p_FmPcdPlcr; } ;
typedef TYPE_2__ t_FmPcd ;
struct TYPE_4__ {size_t numOfSharedProfiles; size_t* sharedProfilesIds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(t_Handle VAR_3, uint16_t VAR_4)
{
    t_FmPcd *VAR_5 = (t_FmPcd*)VAR_3;
    uint16_t VAR_6;

    FUNC_0(VAR_5, VAR_0, VAR_1);

    for (VAR_6=0;VAR_6<VAR_5->p_FmPcdPlcr->numOfSharedProfiles;VAR_6++)
        if (VAR_5->p_FmPcdPlcr->sharedProfilesIds[VAR_6] == VAR_4)
            return VAR_2;
    return VAR_1;
}
