
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int const VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
            struct snd_ctl_elem_value *VAR_2)
{
 int VAR_3;
 static const unsigned int VAR_4[13] = {
  8000, 9600, 11025, 12000, 16000, 22050, 24000,
  32000, 44100, 48000, 64000, 88200, 96000
 };

 for (VAR_3 = 0; VAR_3 < 13; VAR_3++) {
  if (VAR_4[VAR_3] == VAR_0)
   break;
 }

 VAR_2->value.enumerated.item[0] = VAR_3;
 return 0;
}
