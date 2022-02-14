
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned long buffer_size; struct ct_atc_pcm* private_data; } ;
struct ct_atc_pcm {int dummy; } ;
struct ct_atc {unsigned long (* pcm_playback_position ) (struct ct_atc*,struct ct_atc_pcm*) ;} ;
typedef unsigned long snd_pcm_uframes_t ;


 unsigned long FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 struct ct_atc* FUNC_1 (struct snd_pcm_substream*) ;
 unsigned long FUNC_2 (struct ct_atc*,struct ct_atc_pcm*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_0)
{
 unsigned long VAR_1;
 struct ct_atc *VAR_2 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_3 = VAR_0->runtime;
 struct ct_atc_pcm *VAR_4 = VAR_3->private_data;


 VAR_1 = VAR_2->pcm_playback_position(VAR_2, VAR_4);
 VAR_1 = FUNC_0(VAR_3, VAR_1);
 if (VAR_1 >= VAR_3->buffer_size)
  VAR_1 = 0;
 return VAR_1;
}
