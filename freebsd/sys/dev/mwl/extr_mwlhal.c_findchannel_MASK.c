
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int nchannels; struct mwl_hal_channel* channels; } ;
struct mwl_hal_priv {TYPE_2__ mh_20M_5G; TYPE_2__ mh_40M_5G; TYPE_2__ mh_20M; TYPE_2__ mh_40M; } ;
struct mwl_hal_channel {int ieee; } ;
struct TYPE_5__ {scalar_t__ FreqBand; scalar_t__ ChnlWidth; scalar_t__ ExtChnlOffset; } ;
struct TYPE_7__ {int channel; TYPE_1__ channelFlags; } ;
typedef TYPE_2__ MWL_HAL_CHANNELINFO ;
typedef TYPE_3__ MWL_HAL_CHANNEL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static const struct mwl_hal_channel *
FUNC_0(const struct mwl_hal_priv *VAR_4, const MWL_HAL_CHANNEL *VAR_5)
{
 const struct mwl_hal_channel *VAR_6;
 const MWL_HAL_CHANNELINFO *VAR_7;
 int VAR_8 = VAR_5->channel, VAR_9;

 if (VAR_5->channelFlags.FreqBand == VAR_2) {
  VAR_9 = VAR_8 - 1;
  if (VAR_5->channelFlags.ChnlWidth == VAR_0) {
   VAR_7 = &VAR_4->mh_40M;
   if (VAR_5->channelFlags.ExtChnlOffset == VAR_1)
    VAR_9 -= 4;
  } else
   VAR_7 = &VAR_4->mh_20M;

  VAR_6 = ((unsigned)VAR_9 < VAR_7->nchannels) ? &VAR_7->channels[VAR_9] : ((void*)0);
 } else if (VAR_5->channelFlags.FreqBand == VAR_3) {
  if (VAR_5->channelFlags.ChnlWidth == VAR_0) {
   VAR_7 = &VAR_4->mh_40M_5G;
   if (VAR_5->channelFlags.ExtChnlOffset == VAR_1)
    VAR_8 -= 4;
  } else
   VAR_7 = &VAR_4->mh_20M_5G;

  for (VAR_9 = 0; VAR_9 < VAR_7->nchannels; VAR_9++)
   if (VAR_7->channels[VAR_9].ieee == VAR_8)
    break;
  VAR_6 = (VAR_9 < VAR_7->nchannels) ? &VAR_7->channels[VAR_9] : ((void*)0);
 } else
  VAR_6 = ((void*)0);
 return VAR_6;
}
