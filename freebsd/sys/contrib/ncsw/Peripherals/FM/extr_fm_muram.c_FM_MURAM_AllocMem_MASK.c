
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_2__ {scalar_t__ h_Mem; } ;
typedef TYPE_1__ t_FmMuram ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,char*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 void* FUNC_2 (uintptr_t) ;

void * FUNC_3(t_Handle VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    t_FmMuram *VAR_5 = ( t_FmMuram *)VAR_2;
    uintptr_t VAR_6;

    FUNC_1(VAR_2, VAR_0, ((void*)0));
    FUNC_1(VAR_5->h_Mem, VAR_0, ((void*)0));

    VAR_6 = (uintptr_t)FUNC_0(VAR_5->h_Mem, VAR_3, VAR_4 ,"FM MURAM");

    if (VAR_6 == VAR_1)
        return ((void*)0);

    return FUNC_2(VAR_6);
}
