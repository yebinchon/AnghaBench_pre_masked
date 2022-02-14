
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int opcode; int ownerTmp; int h_Frag; } ;
typedef TYPE_1__ t_FmPcdManip ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;

t_Error FUNC_5(t_Handle VAR_7,
                                              t_Handle VAR_8)
{
    t_FmPcdManip *VAR_9 = (t_FmPcdManip *)VAR_7;
    t_Error VAR_10 = VAR_2;

    FUNC_3(VAR_7, VAR_0);
    FUNC_3(VAR_8, VAR_0);

    switch (VAR_9->opcode)
    {
        default:
            break;
    }

    return VAR_10;
}
