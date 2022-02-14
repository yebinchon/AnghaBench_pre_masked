
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {unsigned long private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hda_codec {int control_mutex; struct ca0132_spec* spec; } ;
struct ca0132_spec {int shared_out_nid; int shared_mic_nid; } ;
typedef int hda_nid_t ;


 void* FUNC_0 (int,int,int ,int) ;


 int FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_kcontrol*,struct snd_ctl_elem_info*) ;
 struct hda_codec* FUNC_7 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_info *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_7(VAR_0);
 struct ca0132_spec *VAR_3 = VAR_2->spec;
 hda_nid_t VAR_4 = FUNC_3(VAR_0);
 int VAR_5 = FUNC_1(VAR_0);
 int VAR_6 = FUNC_2(VAR_0);
 unsigned long VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 128:

  VAR_4 = VAR_3->shared_out_nid;
  FUNC_4(&VAR_2->control_mutex);
  VAR_7 = VAR_0->private_value;
  VAR_0->private_value = FUNC_0(VAR_4, VAR_5, 0, VAR_6);
  VAR_8 = FUNC_6(VAR_0, VAR_1);
  VAR_0->private_value = VAR_7;
  FUNC_5(&VAR_2->control_mutex);
  break;
 case 129:

  VAR_4 = VAR_3->shared_mic_nid;
  FUNC_4(&VAR_2->control_mutex);
  VAR_7 = VAR_0->private_value;
  VAR_0->private_value = FUNC_0(VAR_4, VAR_5, 0, VAR_6);
  VAR_8 = FUNC_6(VAR_0, VAR_1);
  VAR_0->private_value = VAR_7;
  FUNC_5(&VAR_2->control_mutex);
  break;
 default:
  VAR_8 = FUNC_6(VAR_0, VAR_1);
 }
 return VAR_8;
}
