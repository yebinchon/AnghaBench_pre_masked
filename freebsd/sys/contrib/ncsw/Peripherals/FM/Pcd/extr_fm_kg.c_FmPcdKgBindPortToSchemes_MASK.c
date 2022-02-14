
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {int hardwarePortId; } ;
typedef TYPE_1__ t_FmPcdKgInterModuleBindPortToSchemes ;
typedef int t_FmPcd ;
typedef scalar_t__ t_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int VAR_3 ;

t_Error FUNC_4(t_Handle VAR_4 , t_FmPcdKgInterModuleBindPortToSchemes *VAR_5)
{
    t_FmPcd *VAR_6 = (t_FmPcd*)VAR_4;
    uint32_t VAR_7;
    t_Error VAR_8 = VAR_0;

    VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7, VAR_3);
    if (VAR_8)
        FUNC_3(VAR_1, VAR_8, VAR_2);

    VAR_8 = FUNC_2(VAR_6, VAR_5->hardwarePortId, VAR_7, VAR_3);
    if (VAR_8)
        FUNC_3(VAR_1, VAR_8, VAR_2);

    FUNC_1(VAR_6, VAR_5);

    return VAR_0;
}
