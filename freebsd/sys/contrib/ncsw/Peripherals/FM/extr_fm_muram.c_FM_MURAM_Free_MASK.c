
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_2__ {scalar_t__ h_Mem; } ;
typedef TYPE_1__ t_FmMuram ;
typedef int t_Error ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

t_Error FUNC_2(t_Handle VAR_1)
{
    t_FmMuram *VAR_2 = ( t_FmMuram *)VAR_1;

    if (VAR_2->h_Mem)
        FUNC_0(VAR_2->h_Mem);

    FUNC_1(VAR_1);

    return VAR_0;
}
