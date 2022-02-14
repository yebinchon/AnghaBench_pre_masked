
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_3 (struct hda_codec*,int,int ,int ,unsigned int) ;
 struct hda_codec* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_6,
         struct snd_ctl_elem_value *VAR_7)
{
 struct hda_codec *VAR_8 = FUNC_4(VAR_6);
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = VAR_7->value.enumerated.item[0];
 if (VAR_9 > 3)
  return -VAR_5;
 if (!VAR_9) {
  VAR_10 = FUNC_2(VAR_8, 0x1d, 0,
      VAR_1,
      VAR_0);
  VAR_11 = VAR_10 & 0x80;
  if (VAR_11) {
   FUNC_3(VAR_8, 0x1d, 0,
        VAR_3,
        FUNC_1(0));
   FUNC_3(VAR_8, 0x1d, 0,
        VAR_3,
        FUNC_0(1));
  }
 } else {
  VAR_10 = FUNC_2(VAR_8, 0x1d, 0,
      VAR_1,
      VAR_0 | 0x01);
  VAR_11 = VAR_10 & 0x80;
  if (VAR_11) {
   FUNC_3(VAR_8, 0x1d, 0,
        VAR_3,
        FUNC_0(0));
   FUNC_3(VAR_8, 0x1d, 0,
        VAR_3,
        FUNC_1(1));
  }
  VAR_10 = FUNC_2(VAR_8, 0x0b, 0,
      VAR_2, 0) + 1;
  VAR_11 |= VAR_10 != VAR_9;
  if (VAR_11)
   FUNC_3(VAR_8, 0x0b, 0,
        VAR_4,
        VAR_9 - 1);
 }
 return VAR_11;
}
