
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {TYPE_1__* p_FmPcdKg; } ;
typedef TYPE_2__ t_FmPcd ;
struct TYPE_3__ {size_t numOfSchemes; size_t* schemesIds; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;

uint8_t FUNC_1(t_Handle VAR_3, uint8_t VAR_4)
{
    t_FmPcd *VAR_5 = (t_FmPcd*)VAR_3;
    uint8_t VAR_6;

    for (VAR_6 = 0;VAR_6<VAR_5->p_FmPcdKg->numOfSchemes;VAR_6++)
        if (VAR_5->p_FmPcdKg->schemesIds[VAR_6] == VAR_4)
            return VAR_6;

    if (VAR_6 == VAR_5->p_FmPcdKg->numOfSchemes)
        FUNC_0(VAR_2, VAR_0, ("Scheme is out of partition range"));

    return VAR_1;
}
