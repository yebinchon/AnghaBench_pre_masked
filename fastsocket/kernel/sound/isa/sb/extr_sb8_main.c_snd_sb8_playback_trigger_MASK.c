
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {unsigned int playback_format; int force_mode16; int mode; int reg_lock; int mixer_lock; int p_period_size; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 struct snd_sb* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_sb*,unsigned int) ;
 int FUNC_2 (struct snd_sb*) ;
 int FUNC_3 (struct snd_sb*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_7,
        int VAR_8)
{
 unsigned long VAR_9;
 struct snd_sb *VAR_10 = FUNC_0(VAR_7);
 unsigned int VAR_11;

 FUNC_5(&VAR_10->reg_lock, VAR_9);
 switch (VAR_8) {
 case 129:
  FUNC_1(VAR_10, VAR_10->playback_format);
  if (VAR_10->playback_format == VAR_2) {
   VAR_11 = VAR_10->p_period_size - 1;
   FUNC_1(VAR_10, VAR_11 & 0xff);
   FUNC_1(VAR_10, VAR_11 >> 8);
  }
  break;
 case 128:
  if (VAR_10->playback_format == VAR_1) {
   struct snd_pcm_runtime *VAR_12 = VAR_7->runtime;
   FUNC_2(VAR_10);
   if (VAR_12->channels > 1) {
    FUNC_4(&VAR_10->mixer_lock);

    FUNC_3(VAR_10, VAR_4, VAR_10->force_mode16 & ~0x02);
    FUNC_6(&VAR_10->mixer_lock);
   }
  } else {
   FUNC_1(VAR_10, VAR_0);
  }
  FUNC_1(VAR_10, VAR_3);
 }
 FUNC_7(&VAR_10->reg_lock, VAR_9);
 VAR_10->mode = (VAR_8 == 129) ? VAR_6 : VAR_5;
 return 0;
}
