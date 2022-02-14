
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {unsigned int c_dma_size; int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int dma_addr; int rate; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 struct sonicvibes* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct sonicvibes*,int ,unsigned int) ;
 int FUNC_5 (struct sonicvibes*,int ) ;
 int FUNC_6 (struct sonicvibes*,int ,unsigned int) ;
 int FUNC_7 (struct sonicvibes*,int,unsigned char) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_2)
{
 struct sonicvibes *VAR_3 = FUNC_3(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 unsigned char VAR_5 = 0;
 unsigned int VAR_6 = FUNC_1(VAR_2);
 unsigned int VAR_7 = FUNC_2(VAR_2);

 VAR_3->c_dma_size = VAR_6;
 VAR_7 >>= 1;
 VAR_7--;
 if (VAR_4->channels > 1)
  VAR_5 |= 0x10;
 if (FUNC_0(VAR_4->format) == 16)
  VAR_5 |= 0x20;
 FUNC_7(VAR_3, ~0x30, VAR_5);
 FUNC_5(VAR_3, VAR_4->rate);
 FUNC_8(&VAR_3->reg_lock);
 FUNC_6(VAR_3, VAR_4->dma_addr, VAR_6);
 FUNC_4(VAR_3, VAR_1, VAR_7 >> 8);
 FUNC_4(VAR_3, VAR_0, VAR_7);
 FUNC_9(&VAR_3->reg_lock);
 return 0;
}
