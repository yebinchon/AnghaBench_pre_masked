
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_spdif_out {scalar_t__ nid; unsigned int status; int ctls; } ;
struct hda_codec {int spdif_mutex; int spdif_out; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned short FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,unsigned short,unsigned short) ;
 struct hda_spdif_out* FUNC_4 (int *,int) ;
 struct hda_codec* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = VAR_0->private_value;
 struct hda_spdif_out *VAR_4;
 hda_nid_t VAR_5;
 unsigned short VAR_6;
 int VAR_7;

 FUNC_1(&VAR_2->spdif_mutex);
 VAR_4 = FUNC_4(&VAR_2->spdif_out, VAR_3);
 VAR_5 = VAR_4->nid;
 VAR_4->status = VAR_1->value.iec958.status[0] |
  ((unsigned int)VAR_1->value.iec958.status[1] << 8) |
  ((unsigned int)VAR_1->value.iec958.status[2] << 16) |
  ((unsigned int)VAR_1->value.iec958.status[3] << 24);
 VAR_6 = FUNC_0(VAR_4->status);
 VAR_6 |= VAR_4->ctls & 1;
 VAR_7 = VAR_4->ctls != VAR_6;
 VAR_4->ctls = VAR_6;
 if (VAR_7 && VAR_5 != (u16)-1)
  FUNC_3(VAR_2, VAR_5, VAR_6 & 0xff, (VAR_6 >> 8) & 0xff);
 FUNC_2(&VAR_2->spdif_mutex);
 return VAR_7;
}
