
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (scalar_t__,int ) ;

t_Error FUNC_4(t_Handle VAR_4, void *VAR_5)
{
    t_FmMuram *VAR_6 = ( t_FmMuram *)VAR_4;

    FUNC_3(VAR_4, VAR_1);
    FUNC_3(VAR_6->h_Mem, VAR_1);

    if (FUNC_0(VAR_6->h_Mem, FUNC_1(VAR_5)) == 0)
        FUNC_2(VAR_3, VAR_0, ("memory pointer!!!"));

    return VAR_2;
}
