
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned short* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short FUNC_0 (int ) ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 unsigned short* VAR_8 ;
 struct snd_soc_codec* FUNC_1 (struct snd_kcontrol*) ;
 unsigned short FUNC_2 (struct snd_soc_codec*,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_9,
     struct snd_ctl_elem_value *VAR_10)
{
 struct snd_soc_codec *VAR_11 = FUNC_1(VAR_9);
 unsigned short VAR_12, VAR_13;

 VAR_12 = ((FUNC_2(VAR_11, "Mouthpiece") <<
       VAR_3) |
   (FUNC_2(VAR_11, "Earpiece") <<
       VAR_1));
 if (VAR_12)
  VAR_12 |= (FUNC_2(VAR_11, "Microphone") <<
       VAR_2);
 else
  VAR_12 = ((FUNC_2(VAR_11, "Microphone") <<
       VAR_2) |
   (FUNC_2(VAR_11, "Speaker") <<
       VAR_4) |
   (VAR_6 << VAR_0));

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++)
  if (VAR_12 == VAR_8[VAR_13])
   break;

 if (VAR_13 >= FUNC_0(VAR_7))
  return -VAR_5;

 VAR_10->value.enumerated.item[0] = VAR_13;

 return 0;
}
