
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int hardware; scalar_t__ capture_format; unsigned int c_dma_size; unsigned int c_period_size; unsigned int force_mode16; int dma8; int reg_lock; int mixer_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int rate; int channels; int rate_den; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;




 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,unsigned int,int) ;
 unsigned int FUNC_3 (struct snd_pcm_substream*) ;
 unsigned int FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_sb* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_sb*,unsigned int) ;
 unsigned int FUNC_7 (struct snd_sb*,int ) ;
 int FUNC_8 (struct snd_sb*,int ,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_11)
{
 unsigned long VAR_12;
 struct snd_sb *VAR_13 = FUNC_5(VAR_11);
 struct snd_pcm_runtime *VAR_14 = VAR_11->runtime;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_16 = VAR_14->rate;
 switch (VAR_13->hardware) {
 case 128:
  if (VAR_14->channels > 1) {
   if (FUNC_1(VAR_16 != FUNC_0(11025) &&
           VAR_16 != FUNC_0(22050)))
    return -VAR_2;
   VAR_13->capture_format = VAR_5;
   break;
  }
  VAR_13->capture_format = (VAR_16 > 23000) ? VAR_5 : VAR_7;
  break;
 case 129:
  if (VAR_16 > 13000) {
   VAR_13->capture_format = VAR_5;
   break;
  }

 case 130:
  VAR_13->capture_format = VAR_7;
  break;
 case 131:
  VAR_13->capture_format = VAR_6;
  break;
 default:
  return -VAR_2;
 }
 VAR_17 = VAR_13->c_dma_size = FUNC_3(VAR_11);
 VAR_18 = VAR_13->c_period_size = FUNC_4(VAR_11);
 FUNC_10(&VAR_13->reg_lock, VAR_12);
 FUNC_6(VAR_13, VAR_9);
 if (VAR_14->channels > 1)
  FUNC_6(VAR_13, VAR_10);
 FUNC_6(VAR_13, VAR_8);
 if (VAR_14->channels > 1) {
  FUNC_6(VAR_13, 256 - VAR_14->rate_den / 2);
  FUNC_9(&VAR_13->mixer_lock);

  VAR_15 = FUNC_7(VAR_13, VAR_4);
  FUNC_8(VAR_13, VAR_4, VAR_15 | 0x20);
  FUNC_11(&VAR_13->mixer_lock);

  VAR_13->force_mode16 = VAR_15;
 } else {
  FUNC_6(VAR_13, 256 - VAR_14->rate_den);
 }
 if (VAR_13->capture_format != VAR_6) {
  VAR_18--;
  FUNC_6(VAR_13, VAR_3);
  FUNC_6(VAR_13, VAR_18 & 0xff);
  FUNC_6(VAR_13, VAR_18 >> 8);
 }
 FUNC_12(&VAR_13->reg_lock, VAR_12);
 FUNC_2(VAR_13->dma8, VAR_14->dma_addr,
   VAR_17, VAR_1 | VAR_0);
 return 0;
}
