
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; struct gus_pcm_private* private_data; } ;
struct snd_gus_card {int reg_lock; } ;
struct gus_pcm_private {int flags; int memory; TYPE_1__** pvoices; } ;
typedef unsigned int snd_pcm_uframes_t ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;
 unsigned char FUNC_1 (struct snd_gus_card*,int ) ;
 int FUNC_2 (struct snd_gus_card*,int ,unsigned char) ;
 int FUNC_3 (struct snd_gus_card*,int ) ;
 struct snd_gus_card* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7(struct snd_pcm_substream *VAR_3)
{
 struct snd_gus_card *VAR_4 = FUNC_4(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 struct gus_pcm_private *VAR_6 = VAR_5->private_data;
 unsigned int VAR_7;
 unsigned char VAR_8;

 VAR_7 = 0;
 FUNC_5(&VAR_4->reg_lock);
 if (VAR_6->flags & VAR_0) {
  FUNC_3(VAR_4, VAR_6->pvoices[0]->number);
  VAR_8 = FUNC_1(VAR_4, VAR_2);
  VAR_7 = (FUNC_2(VAR_4, VAR_1, VAR_8 & 4) >> 4) - VAR_6->memory;
  if (VAR_3->runtime->channels > 1)
   VAR_7 <<= 1;
  VAR_7 = FUNC_0(VAR_5, VAR_7);
 }
 FUNC_6(&VAR_4->reg_lock);
 return VAR_7;
}
