
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_plugin_format {int channels; int format; } ;
struct TYPE_2__ {unsigned int first; int step; scalar_t__ addr; } ;
struct snd_pcm_plugin_channel {int frames; int enabled; TYPE_1__ area; scalar_t__ wanted; } ;
struct snd_pcm_plugin {scalar_t__ stream; int buf_frames; scalar_t__ access; scalar_t__ buf; struct snd_pcm_plugin_channel* buf_channels; struct snd_pcm_plugin_format dst_format; struct snd_pcm_plugin_format src_format; } ;
typedef int ssize_t ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_plugin *VAR_6, snd_pcm_uframes_t VAR_7)
{
 struct snd_pcm_plugin_format *VAR_8;
 ssize_t VAR_9;
 size_t VAR_10;
 unsigned int VAR_11;
 struct snd_pcm_plugin_channel *VAR_12;

 if (VAR_6->stream == VAR_5) {
  VAR_8 = &VAR_6->src_format;
 } else {
  VAR_8 = &VAR_6->dst_format;
 }
 if ((VAR_9 = FUNC_1(VAR_8->format)) < 0)
  return VAR_9;
 VAR_10 = VAR_7 * VAR_8->channels * VAR_9;
 if (FUNC_0(VAR_10 % 8))
  return -VAR_2;
 VAR_10 /= 8;
 if (VAR_6->buf_frames < VAR_7) {
  FUNC_2(VAR_6->buf);
  VAR_6->buf = FUNC_3(VAR_10);
  VAR_6->buf_frames = VAR_7;
 }
 if (!VAR_6->buf) {
  VAR_6->buf_frames = 0;
  return -VAR_1;
 }
 VAR_12 = VAR_6->buf_channels;
 if (VAR_6->access == VAR_3) {
  for (VAR_11 = 0; VAR_11 < VAR_8->channels; VAR_11++, VAR_12++) {
   VAR_12->frames = VAR_7;
   VAR_12->enabled = 1;
   VAR_12->wanted = 0;
   VAR_12->area.addr = VAR_6->buf;
   VAR_12->area.first = VAR_11 * VAR_9;
   VAR_12->area.step = VAR_8->channels * VAR_9;
  }
 } else if (VAR_6->access == VAR_4) {
  if (FUNC_0(VAR_10 % VAR_8->channels))
   return -VAR_0;
  VAR_10 /= VAR_8->channels;
  for (VAR_11 = 0; VAR_11 < VAR_8->channels; VAR_11++, VAR_12++) {
   VAR_12->frames = VAR_7;
   VAR_12->enabled = 1;
   VAR_12->wanted = 0;
   VAR_12->area.addr = VAR_6->buf + (VAR_11 * VAR_10);
   VAR_12->area.first = 0;
   VAR_12->area.step = VAR_9;
  }
 } else
  return -VAR_0;
 return 0;
}
