
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {unsigned int p_dma_size; int* image; int reg_lock; int dma1; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,unsigned int,int) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_wss* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_wss*) ;
 int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (struct snd_wss*,int ,unsigned char) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_8)
{
 struct snd_wss *VAR_9 = FUNC_3(VAR_8);
 struct snd_pcm_runtime *VAR_10 = VAR_8->runtime;
 unsigned long VAR_11;
 unsigned int VAR_12 = FUNC_1(VAR_8);
 unsigned int VAR_13 = FUNC_2(VAR_8);

 FUNC_7(&VAR_9->reg_lock, VAR_11);
 VAR_9->p_dma_size = VAR_12;
 VAR_9->image[VAR_0] &= ~(VAR_1 | VAR_2);
 FUNC_0(VAR_9->dma1, VAR_10->dma_addr, VAR_12, VAR_7 | VAR_6);
 VAR_13 = FUNC_5(VAR_9->image[VAR_3], VAR_13) - 1;
 FUNC_6(VAR_9, VAR_4, (unsigned char) VAR_13);
 FUNC_6(VAR_9, VAR_5, (unsigned char) (VAR_13 >> 8));
 FUNC_8(&VAR_9->reg_lock, VAR_11);



 return 0;
}
