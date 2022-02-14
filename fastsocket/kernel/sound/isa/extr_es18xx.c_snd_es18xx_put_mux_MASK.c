
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_es18xx {int version; } ;
struct TYPE_4__ {unsigned char* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (struct snd_es18xx*,int,int,unsigned char) ;
 struct snd_es18xx* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 static unsigned char VAR_3[4] = {0, 2, 6, 7};
 struct snd_es18xx *VAR_4 = FUNC_1(VAR_1);
 unsigned char VAR_5 = VAR_2->value.enumerated.item[0];
 unsigned char VAR_6 = 0;

 switch (VAR_4->version) {

 case 0x1887:
 case 0x1888:
  if (VAR_5 > 4)
   return -VAR_0;
  if (VAR_5 == 4) {
   VAR_6 = FUNC_0(VAR_4, 0x7a, 0x08, 0x08) != 0x08;
   VAR_5 = 3;
  } else
   VAR_6 = FUNC_0(VAR_4, 0x7a, 0x08, 0x00) != 0x00;

 case 0x1868:
 case 0x1878:
  if (VAR_5 > 3)
   return -VAR_0;
  VAR_5 = VAR_3[VAR_5];
  break;

 case 0x1869:
 case 0x1879:
  if (VAR_5 > 7)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }
 return (FUNC_0(VAR_4, 0x1c, 0x07, VAR_5) != VAR_5) || VAR_6;
}
