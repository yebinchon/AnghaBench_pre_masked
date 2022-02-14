
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int dma_addr; int format; } ;
struct ensoniq {int p1_dma_size; int p1_period_size; int ctrl; int sctrl; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ensoniq*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int* VAR_15 ;
 int FUNC_6 (struct ensoniq*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (struct snd_pcm_substream*) ;
 struct ensoniq* FUNC_10 (struct snd_pcm_substream*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_16)
{
 struct ensoniq *VAR_17 = FUNC_10(VAR_16);
 struct snd_pcm_runtime *VAR_18 = VAR_16->runtime;
 unsigned int VAR_19 = 0;

 VAR_17->p1_dma_size = FUNC_8(VAR_16);
 VAR_17->p1_period_size = FUNC_9(VAR_16);
 if (FUNC_7(VAR_18->format) == 16)
  VAR_19 |= 0x02;
 if (VAR_18->channels > 1)
  VAR_19 |= 0x01;
 FUNC_11(&VAR_17->reg_lock);
 VAR_17->ctrl &= ~VAR_6;







 FUNC_4(VAR_17->ctrl, FUNC_3(VAR_17, VAR_0));
 FUNC_4(FUNC_1(VAR_12), FUNC_3(VAR_17, VAR_13));
 FUNC_4(VAR_18->dma_addr, FUNC_3(VAR_17, VAR_2));
 FUNC_4((VAR_17->p1_dma_size >> 2) - 1, FUNC_3(VAR_17, VAR_3));
 VAR_17->sctrl &= ~(VAR_8 | VAR_10 | VAR_11 | VAR_9);
 VAR_17->sctrl |= VAR_7 | FUNC_2(VAR_19);
 FUNC_4(VAR_17->sctrl, FUNC_3(VAR_17, VAR_14));
 FUNC_4((VAR_17->p1_period_size >> VAR_15[VAR_19]) - 1,
      FUNC_3(VAR_17, VAR_1));
 FUNC_4(VAR_17->ctrl, FUNC_3(VAR_17, VAR_0));
 FUNC_12(&VAR_17->reg_lock);

 FUNC_6(VAR_17, VAR_18->rate);

 return 0;
}
