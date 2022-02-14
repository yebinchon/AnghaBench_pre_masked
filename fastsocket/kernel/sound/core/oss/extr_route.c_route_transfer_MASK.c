
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_plugin_channel {int dummy; } ;
struct TYPE_4__ {int channels; int format; } ;
struct TYPE_3__ {int channels; } ;
struct snd_pcm_plugin {TYPE_2__ dst_format; TYPE_1__ src_format; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_plugin_channel const*,struct snd_pcm_plugin_channel*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_plugin_channel*,int,int ,int) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_3(struct snd_pcm_plugin *VAR_1,
     const struct snd_pcm_plugin_channel *VAR_2,
     struct snd_pcm_plugin_channel *VAR_3,
     snd_pcm_uframes_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct snd_pcm_plugin_channel *VAR_8;
 int VAR_9;

 if (FUNC_1(!VAR_1 || !VAR_2 || !VAR_3))
  return -VAR_0;
 if (VAR_4 == 0)
  return 0;

 VAR_5 = VAR_1->src_format.channels;
 VAR_6 = VAR_1->dst_format.channels;

 VAR_9 = VAR_1->dst_format.format;
 VAR_8 = VAR_3;
 if (VAR_5 <= 1) {

  for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
   FUNC_0(VAR_2, VAR_8, VAR_4, VAR_9);
   VAR_8++;
  }
  return VAR_4;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6 && VAR_7 < VAR_5; ++VAR_7) {
  FUNC_0(VAR_2, VAR_8, VAR_4, VAR_9);
  VAR_8++;
  VAR_2++;
 }
 if (VAR_7 < VAR_6)
  FUNC_2(VAR_8, VAR_6 - VAR_7, VAR_4, VAR_9);
 return VAR_4;
}
