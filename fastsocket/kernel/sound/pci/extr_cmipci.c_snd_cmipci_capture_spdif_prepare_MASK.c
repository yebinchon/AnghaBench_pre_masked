
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cmipci {int * channel; int reg_lock; scalar_t__ can_96k; } ;
struct TYPE_2__ {int rate; int format; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cmipci*,int ,int ) ;
 int FUNC_1 (struct cmipci*,int *,struct snd_pcm_substream*) ;
 int FUNC_2 (struct cmipci*,int ,int ) ;
 int FUNC_3 (int ) ;
 struct cmipci* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_7)
{
 struct cmipci *VAR_8 = FUNC_4(VAR_7);

 FUNC_5(&VAR_8->reg_lock);
 FUNC_2(VAR_8, VAR_4, VAR_0);
 if (VAR_8->can_96k) {
  if (VAR_7->runtime->rate > 48000)
   FUNC_2(VAR_8, VAR_3, VAR_2);
  else
   FUNC_0(VAR_8, VAR_3, VAR_2);
 }
 if (FUNC_3(VAR_7->runtime->format) > 16)
  FUNC_2(VAR_8, VAR_5, VAR_6);
 else
  FUNC_0(VAR_8, VAR_5, VAR_6);

 FUNC_6(&VAR_8->reg_lock);

 return FUNC_1(VAR_8, &VAR_8->channel[VAR_1], VAR_7);
}
