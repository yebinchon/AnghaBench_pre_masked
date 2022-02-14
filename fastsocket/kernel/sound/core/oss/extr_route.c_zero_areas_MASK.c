
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_plugin_channel {scalar_t__ enabled; int area; scalar_t__ wanted; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_plugin_channel *VAR_0, int VAR_1,
         snd_pcm_uframes_t VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 for (; VAR_4 < VAR_1; ++VAR_4) {
  if (VAR_0->wanted)
   FUNC_0(&VAR_0->area, 0, VAR_2, VAR_3);
  VAR_0->enabled = 0;
  VAR_0++;
 }
}
