
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {TYPE_2__* netEnvs; } ;
typedef TYPE_1__ t_FmPcd ;
struct TYPE_5__ {scalar_t__ owners; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void FUNC_3(t_Handle VAR_0, uint8_t VAR_1)
{
    uint32_t VAR_2;

    FUNC_0(VAR_0);
    FUNC_0(((t_FmPcd*)VAR_0)->netEnvs[VAR_1].owners);

    VAR_2 = FUNC_1(&((t_FmPcd*)VAR_0)->netEnvs[VAR_1]);
    ((t_FmPcd*)VAR_0)->netEnvs[VAR_1].owners--;
    FUNC_2(&((t_FmPcd*)VAR_0)->netEnvs[VAR_1], VAR_2);
}
