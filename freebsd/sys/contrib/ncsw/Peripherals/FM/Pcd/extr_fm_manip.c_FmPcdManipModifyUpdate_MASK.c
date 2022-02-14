
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int opcode; int shadowUpdateParams; int h_Frag; } ;
typedef TYPE_1__ t_FmPcdManip ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static t_Error FUNC_3(t_Handle VAR_9, t_Handle VAR_10,
                                      bool VAR_11, int VAR_12,
                                      t_Handle VAR_13)
{

    t_FmPcdManip *VAR_14 = (t_FmPcdManip *)VAR_9;
    t_Error VAR_15 = VAR_1;

    FUNC_1(VAR_12);

    switch (VAR_14->opcode)
    {
        default:
            return VAR_1;
    }

    return VAR_15;
}
