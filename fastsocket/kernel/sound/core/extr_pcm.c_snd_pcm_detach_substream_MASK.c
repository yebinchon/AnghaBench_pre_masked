
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* pstr; struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {struct snd_pcm_runtime* rules; } ;
struct snd_pcm_runtime {struct snd_pcm_runtime* hwptr_log; TYPE_1__ hw_constraints; scalar_t__ control; scalar_t__ status; int (* private_free ) (struct snd_pcm_runtime*) ;} ;
struct snd_pcm_mmap_status {int dummy; } ;
struct snd_pcm_mmap_control {int dummy; } ;
struct TYPE_4__ {int substream_opened; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*) ;

void FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1;

 if (FUNC_1(VAR_0))
  return;
 VAR_1 = VAR_0->runtime;
 if (VAR_1->private_free != ((void*)0))
  VAR_1->private_free(VAR_1);
 FUNC_3((void*)VAR_1->status,
         FUNC_0(sizeof(struct snd_pcm_mmap_status)));
 FUNC_3((void*)VAR_1->control,
         FUNC_0(sizeof(struct snd_pcm_mmap_control)));
 FUNC_2(VAR_1->hw_constraints.rules);




 FUNC_2(VAR_1);
 VAR_0->runtime = ((void*)0);
 VAR_0->pstr->substream_opened--;
}
