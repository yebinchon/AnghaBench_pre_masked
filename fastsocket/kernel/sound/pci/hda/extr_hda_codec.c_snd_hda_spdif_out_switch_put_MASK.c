
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_spdif_out {scalar_t__ nid; unsigned short ctls; } ;
struct hda_codec {int spdif_mutex; int spdif_out; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned short VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,unsigned short,int) ;
 struct hda_spdif_out* FUNC_3 (int *,int) ;
 struct hda_codec* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = VAR_1->private_value;
 struct hda_spdif_out *VAR_5;
 hda_nid_t VAR_6;
 unsigned short VAR_7;
 int VAR_8;

 FUNC_0(&VAR_3->spdif_mutex);
 VAR_5 = FUNC_3(&VAR_3->spdif_out, VAR_4);
 VAR_6 = VAR_5->nid;
 VAR_7 = VAR_5->ctls & ~VAR_0;
 if (VAR_2->value.integer.value[0])
  VAR_7 |= VAR_0;
 VAR_8 = VAR_5->ctls != VAR_7;
 VAR_5->ctls = VAR_7;
 if (VAR_8 && VAR_6 != (u16)-1)
  FUNC_2(VAR_3, VAR_6, VAR_7 & 0xff, -1);
 FUNC_1(&VAR_3->spdif_mutex);
 return VAR_8;
}
