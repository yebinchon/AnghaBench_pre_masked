
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct pxa2xx_runtime_data {TYPE_2__* params; } ;
struct TYPE_4__ {scalar_t__* drcmr; } ;
struct TYPE_3__ {struct pxa2xx_runtime_data* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*,int *) ;

int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct pxa2xx_runtime_data *VAR_1 = VAR_0->runtime->private_data;

 if (VAR_1 && VAR_1->params && VAR_1->params->drcmr)
  *VAR_1->params->drcmr = 0;

 FUNC_0(VAR_0, ((void*)0));
 return 0;
}
