
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdsp {int max_channels; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdsp*,int,int) ;
 int FUNC_1 (struct hdsp*,int,int) ;
 int FUNC_2 (struct hdsp*,int) ;
 int FUNC_3 (struct hdsp*,int,int) ;
 int FUNC_4 (struct hdsp*) ;
 struct hdsp* FUNC_5 (struct snd_kcontrol*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct hdsp *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 if (!FUNC_4(VAR_3))
  return -VAR_0;

 VAR_5 = VAR_2->value.integer.value[0];
 VAR_6 = VAR_2->value.integer.value[1];

 if (VAR_5 >= VAR_3->max_channels)
  VAR_8 = FUNC_1(VAR_3,VAR_5-VAR_3->max_channels, VAR_6);
 else
  VAR_8 = FUNC_0(VAR_3,VAR_5, VAR_6);

 VAR_7 = VAR_2->value.integer.value[2];

 FUNC_6(&VAR_3->lock);
 VAR_4 = VAR_7 != FUNC_2(VAR_3, VAR_8);
 if (VAR_4)
  FUNC_3(VAR_3, VAR_8, VAR_7);
 FUNC_7(&VAR_3->lock);
 return VAR_4;
}
