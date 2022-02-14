
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {int dma_bytes; } ;
struct ct_vm {int (* map ) (struct ct_vm*,TYPE_1__*,int ) ;} ;
struct ct_atc_pcm {int vm_block; TYPE_1__* substream; } ;
struct ct_atc {struct ct_vm* vm; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int VAR_0 ;
 int FUNC_0 (struct ct_vm*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_1(struct ct_atc *VAR_1, struct ct_atc_pcm *VAR_2)
{
 struct snd_pcm_runtime *VAR_3;
 struct ct_vm *VAR_4;

 if (!VAR_2->substream)
  return 0;

 VAR_3 = VAR_2->substream->runtime;
 VAR_4 = VAR_1->vm;

 VAR_2->vm_block = VAR_4->map(VAR_4, VAR_2->substream, VAR_3->dma_bytes);

 if (!VAR_2->vm_block)
  return -VAR_0;

 return 0;
}
