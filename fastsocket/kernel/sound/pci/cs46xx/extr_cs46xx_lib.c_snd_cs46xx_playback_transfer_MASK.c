
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_cs46xx_pcm* private_data; } ;
struct snd_cs46xx_pcm {int pcm_rec; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_cs46xx_pcm * VAR_3 = VAR_2->private_data;
 FUNC_0(VAR_1, &VAR_3->pcm_rec, VAR_0);
 return 0;
}
