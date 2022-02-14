
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {long* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {long* vnode_lswitch; long* vnode_rswitch; long* effects_switch; scalar_t__* input_pins; long cur_mic_boost; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (struct snd_kcontrol*) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_4,
    struct snd_ctl_elem_value *VAR_5)
{
 struct hda_codec *VAR_6 = FUNC_2(VAR_4);
 struct ca0132_spec *VAR_7 = VAR_6->spec;
 hda_nid_t VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = FUNC_0(VAR_4);
 long *VAR_10 = VAR_5->value.integer.value;


 if ((VAR_8 >= VAR_3) && (VAR_8 < VAR_2)) {
  if (VAR_9 & 1) {
   *VAR_10 = VAR_7->vnode_lswitch[VAR_8 - VAR_3];
   VAR_10++;
  }
  if (VAR_9 & 2) {
   *VAR_10 = VAR_7->vnode_rswitch[VAR_8 - VAR_3];
   VAR_10++;
  }
  return 0;
 }


 if ((VAR_8 >= VAR_1) && (VAR_8 < VAR_0)) {
  *VAR_10 = VAR_7->effects_switch[VAR_8 - VAR_1];
  return 0;
 }


 if (VAR_8 == VAR_7->input_pins[0]) {
  *VAR_10 = VAR_7->cur_mic_boost;
  return 0;
 }

 return 0;
}
