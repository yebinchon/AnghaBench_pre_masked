
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin {scalar_t__ (* dst_frames ) (struct snd_pcm_plugin*,scalar_t__) ;scalar_t__ (* src_frames ) (struct snd_pcm_plugin*,scalar_t__) ;struct snd_pcm_plugin* prev; struct snd_pcm_plugin* next; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 struct snd_pcm_plugin* FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_pcm_plugin* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_5 (struct snd_pcm_plugin*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct snd_pcm_plugin*,scalar_t__) ;

snd_pcm_sframes_t FUNC_7(struct snd_pcm_substream *VAR_3, snd_pcm_uframes_t VAR_4)
{
 struct snd_pcm_plugin *VAR_5, *VAR_6, *VAR_7;
 snd_pcm_sframes_t VAR_8;
 int VAR_9 = FUNC_4(VAR_3);

 if (FUNC_1(!VAR_3))
  return -VAR_0;
 if (VAR_4 == 0)
  return 0;
 VAR_8 = VAR_4;
 if (VAR_9 == VAR_2) {
  VAR_5 = FUNC_2(VAR_3);
  while (VAR_5 && VAR_8 > 0) {
   VAR_7 = VAR_5->next;
   if (VAR_5->dst_frames) {
    VAR_8 = VAR_5->dst_frames(VAR_5, VAR_8);
    if (VAR_8 < 0)
     return VAR_8;
   }
   VAR_5 = VAR_7;
  }
 } else if (VAR_9 == VAR_1) {
  VAR_5 = FUNC_3(VAR_3);
  while (VAR_5) {
   VAR_6 = VAR_5->prev;
   if (VAR_5->src_frames) {
    VAR_8 = VAR_5->src_frames(VAR_5, VAR_8);
    if (VAR_8 < 0)
     return VAR_8;
   }
   VAR_5 = VAR_6;
  }
 } else
  FUNC_0();
 return VAR_8;
}
