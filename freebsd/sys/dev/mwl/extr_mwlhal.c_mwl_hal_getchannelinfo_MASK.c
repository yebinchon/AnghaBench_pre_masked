
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ freqLow; scalar_t__ freqHigh; } ;
struct mwl_hal_priv {TYPE_1__ mh_40M_5G; TYPE_1__ mh_20M_5G; TYPE_1__ mh_40M; TYPE_1__ mh_20M; } ;
struct mwl_hal {int dummy; } ;
typedef TYPE_1__ MWL_HAL_CHANNELINFO ;


 int VAR_0 ;
 struct mwl_hal_priv* FUNC_0 (struct mwl_hal*) ;
 int VAR_1 ;



int
FUNC_1(struct mwl_hal *VAR_2, int VAR_3, int VAR_4,
 const MWL_HAL_CHANNELINFO **VAR_5)
{
 struct mwl_hal_priv *VAR_6 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 129:
  *VAR_5 = (VAR_4 == VAR_1) ? &VAR_6->mh_20M : &VAR_6->mh_40M;
  break;
 case 128:
  *VAR_5 = (VAR_4 == VAR_1) ?
       &VAR_6->mh_20M_5G : &VAR_6->mh_40M_5G;
  break;
 default:
  return VAR_0;
 }
 return ((*VAR_5)->freqLow == (*VAR_5)->freqHigh) ? VAR_0 : 0;
}
