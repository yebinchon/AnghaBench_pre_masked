
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb {int playback_format; int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; int rate; } ;
struct TYPE_2__ {unsigned int dsp_cmd; unsigned int format; unsigned int dma_off; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct snd_sb*) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 int FUNC_2 (struct snd_sb*,int ,unsigned long) ;
 int FUNC_3 (struct snd_sb*,int ) ;
 unsigned long FUNC_4 (struct snd_pcm_substream*) ;
 unsigned int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_sb* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct snd_sb*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_1)
{
 struct snd_sb *VAR_2 = FUNC_6(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 unsigned long VAR_4;
 unsigned VAR_5;

 VAR_2->playback_format = FUNC_1(VAR_3);

 VAR_4 = FUNC_4(VAR_1);
 VAR_5 = FUNC_5(VAR_1);

 if (VAR_2->playback_format & VAR_0)
  VAR_5 >>= 1;
 VAR_5--;







 FUNC_8(&VAR_2->reg_lock);
 FUNC_3(VAR_2, VAR_3->rate);
 FUNC_2(VAR_2, VAR_3->dma_addr, VAR_4);



 FUNC_7(VAR_2, FUNC_0(VAR_2).dsp_cmd);
 FUNC_7(VAR_2, FUNC_0(VAR_2).format);
 FUNC_7(VAR_2, VAR_5 & 0xff);
 FUNC_7(VAR_2, VAR_5 >> 8);
 FUNC_7(VAR_2, FUNC_0(VAR_2).dma_off);
 FUNC_9(&VAR_2->reg_lock);

 return 0;
}
