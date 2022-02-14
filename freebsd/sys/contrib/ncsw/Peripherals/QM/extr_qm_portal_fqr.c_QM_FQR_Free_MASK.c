
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t numOfFqids; scalar_t__ fqidBase; int h_Qm; int shadowMode; struct TYPE_5__** p_Fqs; int h_QmPortal; } ;
typedef TYPE_1__ t_QmFqr ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;

t_Error FUNC_5(t_Handle VAR_2)
{
    t_QmFqr *VAR_3 = (t_QmFqr *)VAR_2;
    uint32_t VAR_4;

    if (!VAR_3)
        return FUNC_0(VAR_0);

    if (VAR_3->p_Fqs)
    {
        for (VAR_4=0;VAR_4<VAR_3->numOfFqids;VAR_4++)
            if (VAR_3->p_Fqs[VAR_4])
            {
                if (!VAR_3->shadowMode)
                    FUNC_4(VAR_3->h_QmPortal, VAR_3->p_Fqs[VAR_4]);
                FUNC_3(VAR_3->p_Fqs[VAR_4]);
            }
        FUNC_2(VAR_3->p_Fqs);
    }

    if (!VAR_3->shadowMode && VAR_3->fqidBase)
        FUNC_1(VAR_3->h_Qm, VAR_3->fqidBase);

    FUNC_3(VAR_3);

    return VAR_1;
}
