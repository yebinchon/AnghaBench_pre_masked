
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct gus_pcm_private* private_data; } ;
struct gus_pcm_private {scalar_t__ memory; TYPE_2__* gus; int ** pvoices; } ;
struct TYPE_3__ {int mem_alloc; } ;
struct TYPE_4__ {TYPE_1__ gf1; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct gus_pcm_private *VAR_2 = VAR_1->private_data;

 FUNC_2(VAR_0);
 if (VAR_2->pvoices[0]) {
  FUNC_0(VAR_2->gus, VAR_2->pvoices[0]);
  VAR_2->pvoices[0] = ((void*)0);
 }
 if (VAR_2->pvoices[1]) {
  FUNC_0(VAR_2->gus, VAR_2->pvoices[1]);
  VAR_2->pvoices[1] = ((void*)0);
 }
 if (VAR_2->memory > 0) {
  FUNC_1(&VAR_2->gus->gf1.mem_alloc, VAR_2->memory);
  VAR_2->memory = 0;
 }
 return 0;
}
