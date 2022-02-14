
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct atiixp_dma* private_data; } ;
struct atiixp_modem {scalar_t__ remap_addr; } ;
struct atiixp_dma {unsigned int buf_addr; unsigned int buf_bytes; TYPE_1__* ops; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {scalar_t__ dt_cur; } ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 struct atiixp_modem* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct atiixp_modem *VAR_1 = FUNC_2(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct atiixp_dma *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;
 int VAR_5 = 1000;

 while (VAR_5--) {
  VAR_4 = FUNC_1(VAR_1->remap_addr + VAR_3->ops->dt_cur);
  if (VAR_4 < VAR_3->buf_addr)
   continue;
  VAR_4 -= VAR_3->buf_addr;
  if (VAR_4 >= VAR_3->buf_bytes)
   continue;
  return FUNC_0(VAR_2, VAR_4);
 }
 FUNC_3("atiixp-modem: invalid DMA pointer read 0x%x (buf=%x)\n",
     FUNC_1(VAR_1->remap_addr + VAR_3->ops->dt_cur), VAR_3->buf_addr);
 return 0;
}
