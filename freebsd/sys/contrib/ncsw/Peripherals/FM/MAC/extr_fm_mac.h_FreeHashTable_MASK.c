
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int size; struct TYPE_7__* p_Lsts; } ;
typedef TYPE_1__ t_EthHashEntry ;
typedef TYPE_1__ t_EthHash ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static __inline__ void FUNC_2(t_EthHash *VAR_0)
{
    t_EthHashEntry *VAR_1;
    int VAR_2 = 0;

    if (VAR_0)
    {
        if (VAR_0->p_Lsts)
        {
            for (VAR_2=0; VAR_2<VAR_0->size; VAR_2++)
            {
                VAR_1 = FUNC_0(&VAR_0->p_Lsts[VAR_2]);
                while (VAR_1)
                {
                    FUNC_1(VAR_1);
                    VAR_1 = FUNC_0(&VAR_0->p_Lsts[VAR_2]);
                }
            }

            FUNC_1(VAR_0->p_Lsts);
        }

        FUNC_1(VAR_0);
    }
}
