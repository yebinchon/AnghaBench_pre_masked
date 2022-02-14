
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_plugin_channel {int enabled; int area; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int *,int ,int *,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(const struct snd_pcm_plugin_channel *VAR_0,
        struct snd_pcm_plugin_channel *VAR_1,
        snd_pcm_uframes_t VAR_2, int VAR_3)
{
 VAR_1->enabled = 1;
 FUNC_0(&VAR_0->area, 0, &VAR_1->area, 0, VAR_2, VAR_3);
}
