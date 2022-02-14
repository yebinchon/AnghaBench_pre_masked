
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {scalar_t__ max; } ;
struct snd_soc_codec {int mutex; int control_data; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short* VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_soc_codec* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_soc_codec*,char*) ;
 int FUNC_4 (struct snd_soc_codec*,char*) ;
 int FUNC_5 (struct snd_soc_codec*,char*) ;
 int FUNC_6 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_9,
     struct snd_ctl_elem_value *VAR_10)
{
 struct snd_soc_codec *VAR_11 = FUNC_2(VAR_9);
 struct soc_enum *VAR_12 = (struct soc_enum *)VAR_9->private_value;
 unsigned short VAR_13;
 int VAR_14, VAR_15 = 0;


 if (!VAR_11->control_data)
  return -VAR_6;

 if (VAR_10->value.enumerated.item[0] >= VAR_12->max)
  return -VAR_5;

 FUNC_0(&VAR_11->mutex);


 VAR_13 = VAR_8[VAR_10->value.enumerated.item[0]];


 VAR_14 = !!(VAR_13 & (1 << VAR_3));
 if (VAR_14 != FUNC_5(VAR_11, "Mouthpiece")) {
  VAR_15 = 1;
  if (VAR_14)
   FUNC_4(VAR_11, "Mouthpiece");
  else
   FUNC_3(VAR_11, "Mouthpiece");
 }
 VAR_14 = !!(VAR_13 & (1 << VAR_1));
 if (VAR_14 != FUNC_5(VAR_11, "Earpiece")) {
  VAR_15 = 1;
  if (VAR_14)
   FUNC_4(VAR_11, "Earpiece");
  else
   FUNC_3(VAR_11, "Earpiece");
 }
 VAR_14 = !!(VAR_13 & (1 << VAR_2));
 if (VAR_14 != FUNC_5(VAR_11, "Microphone")) {
  VAR_15 = 1;
  if (VAR_14)
   FUNC_4(VAR_11, "Microphone");
  else
   FUNC_3(VAR_11, "Microphone");
 }
 VAR_14 = !!(VAR_13 & (1 << VAR_4));
 if (VAR_14 != FUNC_5(VAR_11, "Speaker")) {
  VAR_15 = 1;
  if (VAR_14)
   FUNC_4(VAR_11, "Speaker");
  else
   FUNC_3(VAR_11, "Speaker");
 }
 VAR_14 = !!(VAR_13 & (1 << VAR_0));
 if (VAR_14 != VAR_7) {
  VAR_7 = VAR_14;
  VAR_15 = 1;
  if (VAR_14)
   FUNC_4(VAR_11, "AGCIN");
  else
   FUNC_3(VAR_11, "AGCIN");
 }
 if (VAR_15)
  FUNC_6(VAR_11);

 FUNC_1(&VAR_11->mutex);

 return VAR_15;
}
