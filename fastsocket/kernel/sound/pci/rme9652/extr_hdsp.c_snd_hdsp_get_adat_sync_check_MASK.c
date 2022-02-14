
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int * item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct TYPE_4__ {int index; } ;
struct snd_ctl_elem_value {TYPE_3__ value; TYPE_1__ id; } ;
struct hdsp {int io_type; } ;



 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct hdsp*,int) ;
 int FUNC_1 (int) ;
 struct hdsp* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 int VAR_4;
 struct hdsp *VAR_5 = FUNC_2(VAR_2);

 VAR_4 = VAR_3->id.index - 1;
 FUNC_1(VAR_4 < 0);

 switch (VAR_5->io_type) {
 case 131:
 case 129:
  if (VAR_4 >= 3)
   return -VAR_0;
  break;
 case 128:
 case 130:
  if (VAR_4 >= 1)
   return -VAR_0;
  break;
 default:
  return -VAR_1;
 }

 VAR_3->value.enumerated.item[0] = FUNC_0(VAR_5, VAR_4);
 return 0;
}
