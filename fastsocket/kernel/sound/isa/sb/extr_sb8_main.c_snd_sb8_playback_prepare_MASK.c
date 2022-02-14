
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int hardware; scalar_t__ playback_format; unsigned int p_dma_size; unsigned int p_period_size; unsigned int force_mode16; int dma8; int reg_lock; int mixer_lock; int mode; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int rate; int channels; int* dma_area; int rate_den; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;




 int VAR_12 ;
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

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_13)
{
 unsigned long VAR_14;
 struct snd_sb *VAR_15 = FUNC_5(VAR_13);
 struct snd_pcm_runtime *VAR_16 = VAR_13->runtime;
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_18 = VAR_16->rate;
 switch (VAR_15->hardware) {
 case 128:
  if (VAR_16->channels > 1) {
   if (FUNC_1(VAR_18 != FUNC_0(11025) &&
           VAR_18 != FUNC_0(22050)))
    return -VAR_2;
   VAR_15->playback_format = VAR_5;
   break;
  }

 case 129:
  if (VAR_18 > 23000) {
   VAR_15->playback_format = VAR_5;
   break;
  }

 case 130:
  VAR_15->playback_format = VAR_6;
  break;
 case 131:
  VAR_15->playback_format = VAR_7;
  break;
 default:
  return -VAR_2;
 }
 VAR_19 = VAR_15->p_dma_size = FUNC_3(VAR_13);
 VAR_20 = VAR_15->p_period_size = FUNC_4(VAR_13);
 FUNC_10(&VAR_15->reg_lock, VAR_14);
 FUNC_6(VAR_15, VAR_10);
 if (VAR_16->channels > 1) {

  FUNC_9(&VAR_15->mixer_lock);
  VAR_17 = FUNC_7(VAR_15, VAR_11);
  FUNC_8(VAR_15, VAR_11, VAR_17 | 0x02);
  FUNC_11(&VAR_15->mixer_lock);


  FUNC_6(VAR_15, VAR_4);
  VAR_16->dma_area[0] = 0x80;
  FUNC_2(VAR_15->dma8, VAR_16->dma_addr, 1, VAR_1);

  VAR_15->mode = VAR_12;
  FUNC_6(VAR_15, VAR_7);
  FUNC_6(VAR_15, 0);
  FUNC_6(VAR_15, 0);
 }
 FUNC_6(VAR_15, VAR_9);
 if (VAR_16->channels > 1) {
  FUNC_6(VAR_15, 256 - VAR_16->rate_den / 2);
  FUNC_9(&VAR_15->mixer_lock);

  VAR_17 = FUNC_7(VAR_15, VAR_8);
  FUNC_8(VAR_15, VAR_8, VAR_17 | 0x20);
  FUNC_11(&VAR_15->mixer_lock);

  VAR_15->force_mode16 = VAR_17;
 } else {
  FUNC_6(VAR_15, 256 - VAR_16->rate_den);
 }
 if (VAR_15->playback_format != VAR_7) {
  VAR_20--;
  FUNC_6(VAR_15, VAR_3);
  FUNC_6(VAR_15, VAR_20 & 0xff);
  FUNC_6(VAR_15, VAR_20 >> 8);
 }
 FUNC_12(&VAR_15->reg_lock, VAR_14);
 FUNC_2(VAR_15->dma8, VAR_16->dma_addr,
   VAR_19, VAR_1 | VAR_0);
 return 0;
}
