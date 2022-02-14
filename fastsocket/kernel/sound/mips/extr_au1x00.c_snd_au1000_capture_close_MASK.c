
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; } ;
struct snd_au1000 {TYPE_2__** stream; } ;
struct TYPE_4__ {int * substream; } ;
struct TYPE_3__ {struct snd_au1000* private_data; } ;


 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct snd_pcm_substream *VAR_1)
{
 struct snd_au1000 *VAR_2 = VAR_1->pcm->private_data;

 VAR_2->stream[VAR_0]->substream = ((void*)0);
 return 0;
}
