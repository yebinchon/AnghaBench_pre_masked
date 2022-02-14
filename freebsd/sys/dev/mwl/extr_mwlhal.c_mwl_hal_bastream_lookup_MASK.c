
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_hal_priv {int mh_bastreams; TYPE_1__* mh_streams; } ;
struct mwl_hal {int dummy; } ;
struct TYPE_2__ {int const public; } ;
typedef int MWL_HAL_BASTREAM ;


 struct mwl_hal_priv* FUNC_0 (struct mwl_hal*) ;
 int VAR_0 ;

const MWL_HAL_BASTREAM *
FUNC_1(struct mwl_hal *VAR_1, int VAR_2)
{
 struct mwl_hal_priv *VAR_3 = FUNC_0(VAR_1);

 if (!(0 <= VAR_2 && VAR_2 < VAR_0))
  return ((void*)0);
 if (VAR_3->mh_bastreams & (1<<VAR_2))
  return ((void*)0);
 return &VAR_3->mh_streams[VAR_2].public;
}
