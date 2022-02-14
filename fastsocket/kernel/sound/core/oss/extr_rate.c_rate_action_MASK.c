
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_plugin {int dummy; } ;
typedef enum snd_pcm_plugin_action { ____Placeholder_snd_pcm_plugin_action } snd_pcm_plugin_action ;


 int VAR_0 ;


 int FUNC_0 (struct snd_pcm_plugin*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_plugin *VAR_1,
         enum snd_pcm_plugin_action VAR_2,
         unsigned long VAR_3)
{
 if (FUNC_1(!VAR_1))
  return -VAR_0;
 switch (VAR_2) {
 case 129:
 case 128:
  FUNC_0(VAR_1);
  break;
 default:
  break;
 }
 return 0;
}
