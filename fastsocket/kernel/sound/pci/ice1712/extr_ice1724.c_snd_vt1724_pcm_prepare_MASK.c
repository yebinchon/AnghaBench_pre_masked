
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt1724_pcm_reg {scalar_t__ count; scalar_t__ size; scalar_t__ addr; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_ice1712 {int reg_lock; scalar_t__ profi_port; } ;
struct TYPE_2__ {int dma_addr; struct vt1724_pcm_reg* private_data; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0)
{
 struct snd_ice1712 *VAR_1 = FUNC_4(VAR_0);
 const struct vt1724_pcm_reg *VAR_2 = VAR_0->runtime->private_data;

 FUNC_5(&VAR_1->reg_lock);
 FUNC_0(VAR_0->runtime->dma_addr, VAR_1->profi_port + VAR_2->addr);
 FUNC_1((FUNC_2(VAR_0) >> 2) - 1,
      VAR_1->profi_port + VAR_2->size);
 FUNC_1((FUNC_3(VAR_0) >> 2) - 1,
      VAR_1->profi_port + VAR_2->count);
 FUNC_6(&VAR_1->reg_lock);
 return 0;
}
