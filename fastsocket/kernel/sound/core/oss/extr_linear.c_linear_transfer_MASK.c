
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int first; int step; } ;
struct snd_pcm_plugin_channel {TYPE_2__ area; } ;
struct TYPE_3__ {unsigned int channels; } ;
struct snd_pcm_plugin {TYPE_1__ src_format; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_plugin*,struct snd_pcm_plugin_channel const*,struct snd_pcm_plugin_channel*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_2(struct snd_pcm_plugin *VAR_1,
          const struct snd_pcm_plugin_channel *VAR_2,
          struct snd_pcm_plugin_channel *VAR_3,
          snd_pcm_uframes_t VAR_4)
{
 if (FUNC_1(!VAR_1 || !VAR_2 || !VAR_3))
  return -VAR_0;
 if (VAR_4 == 0)
  return 0;
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
