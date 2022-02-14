
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int t_List ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {int node; } ;
typedef TYPE_1__ t_CcNodeInformation ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

void FUNC_8(t_List *VAR_2, t_CcNodeInformation *VAR_3,
                                  t_Handle VAR_4)
{
    t_CcNodeInformation *VAR_5;
    uint32_t VAR_6 = 0;

    VAR_5 = (t_CcNodeInformation *)FUNC_4(
            sizeof(t_CcNodeInformation));

    if (VAR_5)
    {
        FUNC_7(VAR_5, 0, sizeof(t_CcNodeInformation));
        FUNC_6(VAR_5, VAR_3, sizeof(t_CcNodeInformation));
        FUNC_0(&VAR_5->node);

        if (VAR_4)
            VAR_6 = FUNC_3(VAR_4);

        FUNC_1(&VAR_5->node, VAR_2);

        if (VAR_4)
            FUNC_5(VAR_4, VAR_6);
    }
    else
        FUNC_2(VAR_1, VAR_0, ("CC Node Information"));
}
