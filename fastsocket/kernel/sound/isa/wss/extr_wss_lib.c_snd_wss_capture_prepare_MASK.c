
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {unsigned int c_dma_size; int* image; int hardware; int reg_lock; scalar_t__ single_dma; int dma2; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,unsigned int,int) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_wss* FUNC_3 (struct snd_pcm_substream*) ;
 unsigned int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (struct snd_wss*,int ,unsigned char) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_13)
{
 struct snd_wss *VAR_14 = FUNC_3(VAR_13);
 struct snd_pcm_runtime *VAR_15 = VAR_13->runtime;
 unsigned long VAR_16;
 unsigned int VAR_17 = FUNC_1(VAR_13);
 unsigned int VAR_18 = FUNC_2(VAR_13);

 FUNC_6(&VAR_14->reg_lock, VAR_16);
 VAR_14->c_dma_size = VAR_17;
 VAR_14->image[VAR_0] &= ~(VAR_4 | VAR_5);
 FUNC_0(VAR_14->dma2, VAR_15->dma_addr, VAR_17, VAR_10 | VAR_9);
 if (VAR_14->hardware & VAR_11)
  VAR_18 = FUNC_4(VAR_14->image[VAR_1],
       VAR_18);
 else
  VAR_18 = FUNC_4(VAR_14->image[VAR_6],
       VAR_18);
 VAR_18--;
 if (VAR_14->single_dma && VAR_14->hardware != VAR_12) {
  FUNC_5(VAR_14, VAR_2, (unsigned char) VAR_18);
  FUNC_5(VAR_14, VAR_3,
       (unsigned char) (VAR_18 >> 8));
 } else {
  FUNC_5(VAR_14, VAR_7, (unsigned char) VAR_18);
  FUNC_5(VAR_14, VAR_8,
       (unsigned char) (VAR_18 >> 8));
 }
 FUNC_7(&VAR_14->reg_lock, VAR_16);
 return 0;
}
