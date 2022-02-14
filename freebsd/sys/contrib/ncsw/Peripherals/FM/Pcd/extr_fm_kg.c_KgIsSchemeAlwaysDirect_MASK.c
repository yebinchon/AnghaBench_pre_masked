
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdKg; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* schemes; } ;
struct TYPE_4__ {scalar_t__ matchVector; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

bool FUNC_0(t_Handle VAR_3, uint8_t VAR_4)
{
    t_FmPcd *VAR_5 = (t_FmPcd*)VAR_3;

    if (VAR_5->p_FmPcdKg->schemes[VAR_4].matchVector == VAR_1)
        return VAR_2;
    else
        return VAR_0;
}
