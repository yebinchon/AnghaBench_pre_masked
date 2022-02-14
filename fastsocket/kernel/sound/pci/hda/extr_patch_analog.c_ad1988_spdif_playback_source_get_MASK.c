
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {unsigned int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int,int ,int ,int ) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct hda_codec *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_5, 0x1d, 0, VAR_1,
     VAR_0);
 if (!(VAR_6 & 0x80))
  VAR_4->value.enumerated.item[0] = 0;
 else {
  VAR_6 = FUNC_0(VAR_5, 0x0b, 0,
      VAR_2, 0);
  if (VAR_6 < 3)
   VAR_6++;
  else
   VAR_6 = 0;
  VAR_4->value.enumerated.item[0] = VAR_6;
 }
 return 0;
}
