
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int * t_Handle ;
struct TYPE_5__ {TYPE_1__* p_FmPcdKg; } ;
typedef TYPE_2__ t_FmPcd ;
struct TYPE_4__ {size_t numOfSchemes; int * schemes; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,char*) ;

t_Handle FUNC_3(t_Handle VAR_2, uint8_t VAR_3)
{
    t_FmPcd *VAR_4 = (t_FmPcd*)VAR_2;

    FUNC_0(VAR_4);


    if (VAR_3 >= VAR_4->p_FmPcdKg->numOfSchemes)
    {
        FUNC_2(VAR_1, VAR_0, ("relative-scheme-id %d!", VAR_3));
        return ((void*)0);
    }

    if (!FUNC_1(&VAR_4->p_FmPcdKg->schemes[VAR_3]))
        return ((void*)0);

    return &VAR_4->p_FmPcdKg->schemes[VAR_3];
}
