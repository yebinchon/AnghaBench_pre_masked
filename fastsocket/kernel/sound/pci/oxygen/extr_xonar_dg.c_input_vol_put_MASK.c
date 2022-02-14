
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {unsigned int private_value; struct oxygen* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct dg* model_data; } ;
struct dg {int** input_vol; unsigned int input_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxygen*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
    struct snd_ctl_elem_value *VAR_4)
{
 struct oxygen *VAR_5 = VAR_3->private_data;
 struct dg *VAR_6 = VAR_5->model_data;
 unsigned int VAR_7 = VAR_3->private_value;
 int VAR_8 = 0;

 if (VAR_4->value.integer.value[0] < 2 * -12 ||
     VAR_4->value.integer.value[0] > 2 * 12 ||
     VAR_4->value.integer.value[1] < 2 * -12 ||
     VAR_4->value.integer.value[1] > 2 * 12)
  return -VAR_2;
 FUNC_1(&VAR_5->mutex);
 VAR_8 = VAR_6->input_vol[VAR_7][0] != VAR_4->value.integer.value[0] ||
    VAR_6->input_vol[VAR_7][1] != VAR_4->value.integer.value[1];
 if (VAR_8) {
  VAR_6->input_vol[VAR_7][0] = VAR_4->value.integer.value[0];
  VAR_6->input_vol[VAR_7][1] = VAR_4->value.integer.value[1];
  if (VAR_7 == VAR_6->input_sel) {
   FUNC_0(VAR_5, VAR_0,
         VAR_6->input_vol[VAR_7][0]);
   FUNC_0(VAR_5, VAR_1,
         VAR_6->input_vol[VAR_7][1]);
  }
 }
 FUNC_2(&VAR_5->mutex);
 return VAR_8;
}
