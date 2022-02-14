
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int t_List ;
struct TYPE_4__ {int size; int * p_Lsts; } ;
typedef TYPE_1__ t_EthHash ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static __inline__ t_EthHash * FUNC_4(uint16_t VAR_2)
{
    uint32_t VAR_3;
    t_EthHash *VAR_4;


    VAR_4 = (t_EthHash *)FUNC_3(sizeof(t_EthHash));
    if (!VAR_4)
    {
        FUNC_1(VAR_1, VAR_0, ("Address hash table"));
        return ((void*)0);
    }
    VAR_4->size = VAR_2;

    VAR_4->p_Lsts = (t_List *)FUNC_3(VAR_4->size*sizeof(t_List));
    if (!VAR_4->p_Lsts)
    {
        FUNC_1(VAR_1, VAR_0, ("Address hash table"));
        FUNC_2(VAR_4);
        return ((void*)0);
    }

    for (VAR_3=0 ; VAR_3<VAR_4->size; VAR_3++)
        FUNC_0(&VAR_4->p_Lsts[VAR_3]);

    return VAR_4;
}
