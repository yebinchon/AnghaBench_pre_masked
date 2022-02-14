
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcsp {unsigned int playback_ptr; int substream_lock; } ;
struct snd_pcm_substream {int runtime; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,unsigned int) ;
 struct snd_pcsp* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream
         *VAR_0)
{
 struct snd_pcsp *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;
 FUNC_2(&VAR_1->substream_lock);
 VAR_2 = VAR_1->playback_ptr;
 FUNC_3(&VAR_1->substream_lock);
 return FUNC_0(VAR_0->runtime, VAR_2);
}
