
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_spdif_out {int ctls; } ;
struct hda_codec {int spdif_mutex; int spdif_out; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct hda_spdif_out* FUNC_2 (int *,int) ;
 struct hda_codec* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = VAR_1->private_value;
 struct hda_spdif_out *VAR_5;

 FUNC_0(&VAR_3->spdif_mutex);
 VAR_5 = FUNC_2(&VAR_3->spdif_out, VAR_4);
 VAR_2->value.integer.value[0] = VAR_5->ctls & VAR_0;
 FUNC_1(&VAR_3->spdif_mutex);
 return 0;
}
