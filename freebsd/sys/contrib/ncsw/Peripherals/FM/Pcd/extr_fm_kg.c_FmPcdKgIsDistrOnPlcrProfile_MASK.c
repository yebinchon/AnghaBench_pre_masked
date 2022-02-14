
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_1__* p_FmPcdKg; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {scalar_t__ nextRelativePlcrProfile; scalar_t__ bitOffsetInPlcrProfile; scalar_t__ extractedOrs; int valid; } ;
struct TYPE_4__ {TYPE_2__* schemes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_1(t_Handle VAR_2, uint8_t VAR_3)
{
    t_FmPcd *VAR_4 = (t_FmPcd*)VAR_2;

   FUNC_0(VAR_4->p_FmPcdKg->schemes[VAR_3].valid);

    if ((VAR_4->p_FmPcdKg->schemes[VAR_3].extractedOrs &&
        VAR_4->p_FmPcdKg->schemes[VAR_3].bitOffsetInPlcrProfile) ||
        VAR_4->p_FmPcdKg->schemes[VAR_3].nextRelativePlcrProfile)
        return VAR_1;
    else
        return VAR_0;

}
