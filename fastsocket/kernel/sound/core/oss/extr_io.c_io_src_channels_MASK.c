
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_plugin_channel {int wanted; } ;
struct TYPE_2__ {unsigned int channels; } ;
struct snd_pcm_plugin {scalar_t__ access; TYPE_1__ src_format; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_plugin*,int,struct snd_pcm_plugin_channel**) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_1(struct snd_pcm_plugin *VAR_1,
        snd_pcm_uframes_t VAR_2,
        struct snd_pcm_plugin_channel **VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 struct snd_pcm_plugin_channel *VAR_6;
 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_6);
 if (VAR_4 < 0)
  return VAR_4;
 *VAR_3 = VAR_6;
 if (VAR_1->access == VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_1->src_format.channels; ++VAR_5, ++VAR_6)
   VAR_6->wanted = 1;
 }
 return VAR_2;
}
