
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct sigmatel_spec {unsigned int aloopback_mask; unsigned int aloopback; unsigned int aloopback_shift; } ;
struct hda_codec {int afg; struct sigmatel_spec* spec; } ;


 unsigned int FUNC_0 (struct snd_kcontrol*,int *) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ,int,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int,unsigned int) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;
 struct hda_codec* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_5(VAR_0);
 struct sigmatel_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4 = FUNC_0(VAR_0, &VAR_1->id);
 unsigned int VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_7 = VAR_3->aloopback_mask << VAR_4;
 if (VAR_1->value.integer.value[0])
  VAR_6 = VAR_3->aloopback | VAR_7;
 else
  VAR_6 = VAR_3->aloopback & ~VAR_7;
 if (VAR_3->aloopback == VAR_6)
  return 0;

 VAR_3->aloopback = VAR_6;




 VAR_5 = FUNC_1(VAR_2, VAR_2->afg, 0,
          VAR_0->private_value & 0xFFFF, 0x0);
 VAR_5 >>= VAR_3->aloopback_shift;

 if (VAR_3->aloopback & VAR_7) {
  FUNC_4(VAR_2);
  VAR_5 |= VAR_7;
 } else {
  FUNC_3(VAR_2);
  VAR_5 &= ~VAR_7;
 }

 FUNC_2(VAR_2, VAR_2->afg, 0,
  VAR_0->private_value >> 16, VAR_5);

 return 1;
}
