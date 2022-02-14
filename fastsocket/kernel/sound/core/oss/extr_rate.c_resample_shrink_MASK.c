
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int first; int step; scalar_t__ addr; } ;
struct snd_pcm_plugin_channel {int enabled; TYPE_3__ area; scalar_t__ wanted; } ;
struct TYPE_5__ {int format; } ;
struct TYPE_4__ {unsigned int channels; } ;
struct snd_pcm_plugin {TYPE_2__ dst_format; TYPE_1__ src_format; scalar_t__ extra_data; } ;
struct rate_priv {unsigned int pos; scalar_t__ pitch; struct rate_channel* channels; } ;
struct rate_channel {short last_S1; short last_S2; } ;


 short VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_plugin *VAR_2,
       const struct snd_pcm_plugin_channel *VAR_3,
       struct snd_pcm_plugin_channel *VAR_4,
       int VAR_5, int VAR_6)
{
 unsigned int VAR_7 = 0;
 signed int VAR_8;
 signed short VAR_9, VAR_10;
 signed short *VAR_11, *VAR_12;
 unsigned int VAR_13;
 int VAR_14, VAR_15;
 int VAR_16, VAR_17;
 struct rate_priv *VAR_18 = (struct rate_priv *)VAR_2->extra_data;
 struct rate_channel *VAR_19 = VAR_18->channels;

 for (VAR_13 = 0; VAR_13 < VAR_2->src_format.channels; ++VAR_13) {
  VAR_7 = VAR_18->pos;
  VAR_9 = VAR_19->last_S1;
  VAR_10 = VAR_19->last_S2;
  if (!VAR_3[VAR_13].enabled) {
   if (VAR_4[VAR_13].wanted)
    FUNC_0(&VAR_4[VAR_13].area, 0, VAR_6, VAR_2->dst_format.format);
   VAR_4[VAR_13].enabled = 0;
   continue;
  }
  VAR_4[VAR_13].enabled = 1;
  VAR_11 = (signed short *)VAR_3[VAR_13].area.addr +
   VAR_3[VAR_13].area.first / 8 / 2;
  VAR_12 = (signed short *)VAR_4[VAR_13].area.addr +
   VAR_4[VAR_13].area.first / 8 / 2;
  VAR_14 = VAR_3[VAR_13].area.step / 8 / 2;
  VAR_15 = VAR_4[VAR_13].area.step / 8 / 2;
  VAR_16 = VAR_5;
  VAR_17 = VAR_6;
  while (VAR_17 > 0) {
   VAR_9 = VAR_10;
   if (VAR_16-- > 0) {
    VAR_10 = *VAR_11;
    VAR_11 += VAR_14;
   }
   if (VAR_7 & ~VAR_1) {
    VAR_7 &= VAR_1;
    VAR_8 = VAR_9 + ((VAR_10 - VAR_9) * (signed int)VAR_7) / VAR_0;
    if (VAR_8 < -32768)
     VAR_8 = -32768;
    else if (VAR_8 > 32767)
     VAR_8 = 32767;
    *VAR_12 = VAR_8;
    VAR_12 += VAR_15;
    VAR_17--;
   }
   VAR_7 += VAR_18->pitch;
  }
  VAR_19->last_S1 = VAR_9;
  VAR_19->last_S2 = VAR_10;
  VAR_19++;
 }
 VAR_18->pos = VAR_7;
}
