
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
struct hdsp {int precise_ptr; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdsp*,unsigned int) ;
 int FUNC_1 (struct hdsp*) ;
 struct hdsp* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct hdsp *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;
 unsigned int VAR_5;

 if (!FUNC_1(VAR_3))
  return -VAR_0;
 VAR_5 = VAR_2->value.integer.value[0] & 1;
 FUNC_3(&VAR_3->lock);
 VAR_4 = (int)VAR_5 != VAR_3->precise_ptr;
 FUNC_0(VAR_3, VAR_5);
 FUNC_4(&VAR_3->lock);
 return VAR_4;
}
