
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* addr; } ;
struct snd_pcm_plugin_channel {TYPE_2__ area; scalar_t__ enabled; } ;
struct TYPE_3__ {int channels; } ;
struct snd_pcm_plugin {scalar_t__ access; int plug; scalar_t__ extra_data; TYPE_1__ dst_format; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void**,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_3(struct snd_pcm_plugin *VAR_2,
       const struct snd_pcm_plugin_channel *VAR_3,
       struct snd_pcm_plugin_channel *VAR_4,
       snd_pcm_uframes_t VAR_5)
{
 if (FUNC_2(!VAR_2))
  return -VAR_0;
 if (FUNC_2(!VAR_4))
  return -VAR_0;
 if (VAR_2->access == VAR_1) {
  return FUNC_0(VAR_2->plug, VAR_4->area.addr, VAR_5);
 } else {
  int VAR_6, VAR_7 = VAR_2->dst_format.channels;
  void **VAR_8 = (void**)VAR_2->extra_data;
  if (FUNC_2(!VAR_8))
   return -VAR_0;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   if (VAR_4[VAR_6].enabled)
    VAR_8[VAR_6] = VAR_4[VAR_6].area.addr;
   else
    VAR_8[VAR_6] = ((void*)0);
  }
  return FUNC_1(VAR_2->plug, VAR_8, VAR_5);
 }
 return 0;
}
