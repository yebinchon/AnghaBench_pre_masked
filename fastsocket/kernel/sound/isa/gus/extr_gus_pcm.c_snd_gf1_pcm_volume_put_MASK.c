
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_gus_voice {int number; struct gus_pcm_private* private_data; int pcm; } ;
struct TYPE_6__ {unsigned short pcm_volume_level_left1; unsigned short pcm_volume_level_right1; int pcm_volume_level_left; int pcm_volume_level_right; struct snd_gus_voice* voices; } ;
struct snd_gus_card {int voice_alloc; int reg_lock; TYPE_3__ gf1; int pcm_volume_level_lock; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct gus_pcm_private {int flags; int final_volume; struct snd_gus_voice** pvoices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (struct snd_gus_card*,int ) ;
 int FUNC_3 (struct snd_gus_card*,int ,unsigned short) ;
 struct snd_gus_card* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_value *VAR_4)
{
 struct snd_gus_card *VAR_5 = FUNC_4(VAR_3);
 unsigned long VAR_6;
 int VAR_7;
 unsigned int VAR_8;
 unsigned short VAR_9, VAR_10, VAR_11;
 struct gus_pcm_private *VAR_12;
 struct snd_gus_voice *VAR_13;

 VAR_9 = VAR_4->value.integer.value[0] & 127;
 VAR_10 = VAR_4->value.integer.value[1] & 127;
 FUNC_6(&VAR_5->pcm_volume_level_lock, VAR_6);
 VAR_7 = VAR_9 != VAR_5->gf1.pcm_volume_level_left1 ||
          VAR_10 != VAR_5->gf1.pcm_volume_level_right1;
 VAR_5->gf1.pcm_volume_level_left1 = VAR_9;
 VAR_5->gf1.pcm_volume_level_right1 = VAR_10;
 VAR_5->gf1.pcm_volume_level_left = FUNC_1(VAR_9 << 9) << 4;
 VAR_5->gf1.pcm_volume_level_right = FUNC_1(VAR_10 << 9) << 4;
 FUNC_8(&VAR_5->pcm_volume_level_lock, VAR_6);

 FUNC_6(&VAR_5->voice_alloc, VAR_6);
 for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
  VAR_13 = &VAR_5->gf1.voices[VAR_8];
  if (!VAR_13->pcm)
   continue;
  VAR_12 = VAR_13->private_data;
  if (!(VAR_12->flags & VAR_0))
   continue;

  FUNC_5(&VAR_5->reg_lock);
  FUNC_2(VAR_5, VAR_13->number);
  FUNC_0(VAR_5, VAR_1);
  VAR_11 = VAR_13 == VAR_12->pvoices[0] ? VAR_5->gf1.pcm_volume_level_left : VAR_5->gf1.pcm_volume_level_right;
  FUNC_3(VAR_5, VAR_2, VAR_11);
  VAR_12->final_volume = 1;
  FUNC_7(&VAR_5->reg_lock);
 }
 FUNC_8(&VAR_5->voice_alloc, VAR_6);
 return VAR_7;
}
