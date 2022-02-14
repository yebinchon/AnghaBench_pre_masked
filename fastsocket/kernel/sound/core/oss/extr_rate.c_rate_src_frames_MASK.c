
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rate; } ;
struct TYPE_3__ {scalar_t__ rate; } ;
struct snd_pcm_plugin {TYPE_2__ dst_format; TYPE_1__ src_format; scalar_t__ extra_data; } ;
struct rate_priv {int pitch; int old_src_frames; int old_dst_frames; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_1(struct snd_pcm_plugin *VAR_3, snd_pcm_uframes_t VAR_4)
{
 struct rate_priv *VAR_5;
 snd_pcm_sframes_t VAR_6;

 if (FUNC_0(!VAR_3))
  return -VAR_1;
 if (VAR_4 == 0)
  return 0;
 VAR_5 = (struct rate_priv *)VAR_3->extra_data;
 if (VAR_3->src_format.rate < VAR_3->dst_format.rate) {
  VAR_6 = (((VAR_4 * VAR_5->pitch) + (VAR_0/2)) >> VAR_2);
 } else {
  VAR_6 = (((VAR_4 << VAR_2) + (VAR_5->pitch / 2)) / VAR_5->pitch);
 }
 if (VAR_5->old_src_frames > 0) {
  snd_pcm_sframes_t VAR_7 = VAR_4, VAR_8 = VAR_5->old_dst_frames;
  while (VAR_5->old_src_frames < VAR_7) {
   VAR_7 >>= 1;
   VAR_8 <<= 1;
  }
  while (VAR_5->old_src_frames > VAR_7) {
   VAR_7 <<= 1;
   VAR_8 >>= 1;
  }
  if (VAR_5->old_src_frames == VAR_7)
   return VAR_8;
 }
 VAR_5->old_src_frames = VAR_4;
 VAR_5->old_dst_frames = VAR_6;
 return VAR_6;
}
