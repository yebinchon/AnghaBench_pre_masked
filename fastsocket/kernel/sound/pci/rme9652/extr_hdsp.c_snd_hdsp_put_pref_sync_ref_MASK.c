
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
struct hdsp {int io_type; int lock; } ;



 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct hdsp*) ;
 int FUNC_1 (struct hdsp*,unsigned int) ;
 int FUNC_2 (struct hdsp*) ;
 struct hdsp* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct hdsp *VAR_4 = FUNC_3(VAR_2);
 int VAR_5, VAR_6;
 unsigned int VAR_7;

 if (!FUNC_2(VAR_4))
  return -VAR_0;

 switch (VAR_4->io_type) {
 case 131:
 case 129:
  VAR_6 = 6;
  break;
 case 128:
  VAR_6 = 4;
  break;
 case 130:
  VAR_6 = 3;
  break;
 default:
  return -VAR_1;
 }

 VAR_7 = VAR_3->value.enumerated.item[0] % VAR_6;
 FUNC_4(&VAR_4->lock);
 VAR_5 = (int)VAR_7 != FUNC_0(VAR_4);
 FUNC_1(VAR_4, VAR_7);
 FUNC_5(&VAR_4->lock);
 return VAR_5;
}
