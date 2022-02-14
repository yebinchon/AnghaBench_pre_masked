
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int capture_format; int mixer_lock; int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_sb*,int ,unsigned long) ;
 int FUNC_2 (struct snd_sb*,int ) ;
 int FUNC_3 (struct snd_sb*,int ,unsigned int) ;
 unsigned long FUNC_4 (struct snd_pcm_substream*) ;
 unsigned int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_sb* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_3)
{
 struct snd_sb *VAR_4 = FUNC_6(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 unsigned long VAR_6;
 unsigned VAR_7;

 VAR_4->capture_format = FUNC_0(VAR_5);

 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = FUNC_5(VAR_3);

 if (VAR_4->capture_format & VAR_0)
  VAR_7 >>= 1;
 VAR_7--;

 FUNC_7(&VAR_4->reg_lock);
 FUNC_2(VAR_4, VAR_5->rate);
 FUNC_1(VAR_4, VAR_5->dma_addr, VAR_6);
 FUNC_8(&VAR_4->reg_lock);
 FUNC_7(&VAR_4->mixer_lock);
 FUNC_3(VAR_4, VAR_1, VAR_7 & 0xff);
 FUNC_3(VAR_4, VAR_2, VAR_7 >> 8);
 FUNC_8(&VAR_4->mixer_lock);
 return 0;
}
