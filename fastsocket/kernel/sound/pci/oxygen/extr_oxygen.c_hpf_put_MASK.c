
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct generic_data* model_data; } ;
struct generic_data {unsigned int* wm8785_regs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_value *VAR_4)
{
 struct oxygen *VAR_5 = VAR_3->private_data;
 struct generic_data *VAR_6 = VAR_5->model_data;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_0(&VAR_5->mutex);
 VAR_7 = VAR_6->wm8785_regs[VAR_2] & ~(VAR_1 | VAR_0);
 if (VAR_4->value.enumerated.item[0])
  VAR_7 |= VAR_1 | VAR_0;
 VAR_8 = VAR_7 != VAR_6->wm8785_regs[VAR_2];
 if (VAR_8)
  FUNC_2(VAR_5, VAR_2, VAR_7);
 FUNC_1(&VAR_5->mutex);
 return VAR_8;
}
