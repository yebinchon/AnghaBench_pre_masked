
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct pxa2xx_pcm_client* private_data; } ;
struct pxa2xx_pcm_client {int (* prepare ) (struct snd_pcm_substream*) ;} ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct pxa2xx_pcm_client *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_0);

 return VAR_1->prepare(VAR_0);
}
