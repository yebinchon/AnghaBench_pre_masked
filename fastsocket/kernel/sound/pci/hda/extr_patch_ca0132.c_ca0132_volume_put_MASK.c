
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {unsigned long private_value; } ;
struct TYPE_3__ {long* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int control_mutex; struct ca0132_spec* spec; } ;
struct ca0132_spec {long* vnode_lvol; long* vnode_rvol; } ;
typedef size_t hda_nid_t ;


 unsigned long FUNC_0 (size_t,int,int ,int) ;
 size_t VAR_0 ;
 int FUNC_1 (struct hda_codec*,size_t,size_t*) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*) ;
 size_t FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (struct hda_codec*) ;
 struct hda_codec* FUNC_10 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_11(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_10(VAR_1);
 struct ca0132_spec *VAR_4 = VAR_3->spec;
 hda_nid_t VAR_5 = FUNC_4(VAR_1);
 int VAR_6 = FUNC_2(VAR_1);
 long *VAR_7 = VAR_2->value.integer.value;
 hda_nid_t VAR_8 = 0;
 bool VAR_9;
 int VAR_10 = 1;


 if (VAR_6 & 1) {
  VAR_4->vnode_lvol[VAR_5 - VAR_0] = *VAR_7;
  VAR_7++;
 }
 if (VAR_6 & 2) {
  VAR_4->vnode_rvol[VAR_5 - VAR_0] = *VAR_7;
  VAR_7++;
 }


 VAR_9 = FUNC_1(VAR_3, VAR_5, &VAR_8);
 if (VAR_9) {
  int VAR_11 = FUNC_3(VAR_1);
  unsigned long VAR_12;

  FUNC_9(VAR_3);
  FUNC_5(&VAR_3->control_mutex);
  VAR_12 = VAR_1->private_value;
  VAR_1->private_value = FUNC_0(VAR_8, VAR_6,
        0, VAR_11);
  VAR_10 = FUNC_7(VAR_1, VAR_2);
  VAR_1->private_value = VAR_12;
  FUNC_6(&VAR_3->control_mutex);
  FUNC_8(VAR_3);
 }

 return VAR_10;
}
