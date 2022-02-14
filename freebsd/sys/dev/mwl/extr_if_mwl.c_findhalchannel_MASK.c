
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mwl_hal_channel {int ieee; } ;
struct TYPE_3__ {int nchannels; struct mwl_hal_channel* channels; } ;
typedef TYPE_1__ MWL_HAL_CHANNELINFO ;



__attribute__((used)) static const struct mwl_hal_channel *
FUNC_0(const MWL_HAL_CHANNELINFO *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nchannels; VAR_2++) {
  const struct mwl_hal_channel *VAR_3 = &VAR_0->channels[VAR_2];
  if (VAR_3->ieee == VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}
