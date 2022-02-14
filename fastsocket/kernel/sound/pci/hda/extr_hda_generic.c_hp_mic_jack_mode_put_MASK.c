
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int *) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 unsigned int FUNC_4 (struct hda_codec*,int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 unsigned int FUNC_6 (struct hda_codec*,int ) ;
 unsigned int FUNC_7 (struct hda_codec*,int ) ;
 int FUNC_8 (struct hda_codec*,int ,unsigned int) ;
 struct hda_codec* FUNC_9 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_10(struct snd_kcontrol *VAR_4,
    struct snd_ctl_elem_value *VAR_5)
{
 struct hda_codec *VAR_6 = FUNC_9(VAR_4);
 hda_nid_t VAR_7 = VAR_4->private_value;
 int VAR_8 = FUNC_3(VAR_6, VAR_7);
 int VAR_9 = FUNC_2(VAR_6, VAR_7);
 unsigned int VAR_10, VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_6, VAR_7);
 VAR_12 = VAR_5->value.enumerated.item[0];
 if (VAR_11 == VAR_12)
  return 0;

 if (VAR_12 < VAR_8) {
  if (VAR_8 > 1)
   VAR_10 = VAR_12 ? VAR_1 : VAR_3;
  else
   VAR_10 = VAR_1;
 } else {
  VAR_12 -= VAR_8;
  if (VAR_9 > 1) {
   unsigned int VAR_13 = FUNC_4(VAR_6, VAR_7);
   VAR_10 = FUNC_6(VAR_6, VAR_7);
   VAR_10 &= ~(VAR_0 | VAR_1);
   VAR_10 |= FUNC_5(VAR_13, VAR_12) | VAR_2;
  } else
   VAR_10 = FUNC_7(VAR_6, VAR_7);
 }
 FUNC_8(VAR_6, VAR_7, VAR_10);
 FUNC_0(VAR_6, ((void*)0));

 return 1;
}
