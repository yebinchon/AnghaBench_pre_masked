
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {int pcm_hwptr; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 struct snd_pdacf* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pdacf *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->pcm_hwptr;
}
