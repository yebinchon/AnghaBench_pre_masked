
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_4__ {TYPE_1__* netEnvs; } ;
typedef TYPE_2__ t_FmPcd ;
struct TYPE_3__ {size_t macsecVector; } ;


 int FUNC_0 (scalar_t__) ;

uint32_t FUNC_1(t_Handle VAR_0, uint32_t VAR_1)
{
    t_FmPcd *VAR_2 = (t_FmPcd*)VAR_0;

    FUNC_0(VAR_0);
    return VAR_2->netEnvs[VAR_1].macsecVector;
}
