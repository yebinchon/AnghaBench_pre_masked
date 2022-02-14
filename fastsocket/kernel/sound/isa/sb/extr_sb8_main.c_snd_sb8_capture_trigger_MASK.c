
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {unsigned int capture_format; int mode; int reg_lock; int mixer_lock; int force_mode16; int c_period_size; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 struct snd_sb* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_sb*,unsigned int) ;
 int FUNC_2 (struct snd_sb*) ;
 int FUNC_3 (struct snd_sb*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_8,
       int VAR_9)
{
 unsigned long VAR_10;
 struct snd_sb *VAR_11 = FUNC_0(VAR_8);
 unsigned int VAR_12;

 FUNC_5(&VAR_11->reg_lock, VAR_10);
 switch (VAR_9) {
 case 129:
  FUNC_1(VAR_11, VAR_11->capture_format);
  if (VAR_11->capture_format == VAR_3) {
   VAR_12 = VAR_11->c_period_size - 1;
   FUNC_1(VAR_11, VAR_12 & 0xff);
   FUNC_1(VAR_11, VAR_12 >> 8);
  }
  break;
 case 128:
  if (VAR_11->capture_format == VAR_2) {
   struct snd_pcm_runtime *VAR_13 = VAR_8->runtime;
   FUNC_2(VAR_11);
   if (VAR_13->channels > 1) {

    FUNC_4(&VAR_11->mixer_lock);
    FUNC_3(VAR_11, VAR_0, VAR_11->force_mode16);
    FUNC_6(&VAR_11->mixer_lock);

    FUNC_1(VAR_11, VAR_4);
   }
  } else {
   FUNC_1(VAR_11, VAR_1);
  }
  FUNC_1(VAR_11, VAR_5);
 }
 FUNC_7(&VAR_11->reg_lock, VAR_10);
 VAR_11->mode = (VAR_9 == 129) ? VAR_6 : VAR_7;
 return 0;
}
