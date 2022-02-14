
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
struct hdsp {int dummy; } ;


 int FUNC_0 (struct hdsp*) ;
 struct hdsp* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct hdsp *VAR_2 = FUNC_1(VAR_0);

 switch (FUNC_0(VAR_2)) {
 case 32000:
  VAR_1->value.enumerated.item[0] = 0;
  break;
 case 44100:
  VAR_1->value.enumerated.item[0] = 1;
  break;
 case 48000:
  VAR_1->value.enumerated.item[0] = 2;
  break;
 case 64000:
  VAR_1->value.enumerated.item[0] = 3;
  break;
 case 88200:
  VAR_1->value.enumerated.item[0] = 4;
  break;
 case 96000:
  VAR_1->value.enumerated.item[0] = 5;
  break;
 case 128000:
  VAR_1->value.enumerated.item[0] = 7;
  break;
 case 176400:
  VAR_1->value.enumerated.item[0] = 8;
  break;
 case 192000:
  VAR_1->value.enumerated.item[0] = 9;
  break;
 default:
  VAR_1->value.enumerated.item[0] = 6;
 }
 return 0;
}
