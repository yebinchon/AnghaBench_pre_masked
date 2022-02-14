
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct dg* model_data; } ;
struct dg {int hp_vol_att; scalar_t__ output_sel; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxygen*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
    struct snd_ctl_elem_value *VAR_4)
{
 static const s8 VAR_5[3] = { 2 * 16, 2 * 7, 0 };
 struct oxygen *VAR_6 = VAR_3->private_data;
 struct dg *VAR_7 = VAR_6->model_data;
 s8 VAR_8;
 int VAR_9;

 if (VAR_4->value.enumerated.item[0] > 2)
  return -VAR_2;
 VAR_8 = VAR_5[VAR_4->value.enumerated.item[0]];
 FUNC_1(&VAR_6->mutex);
 VAR_9 = VAR_8 != VAR_7->hp_vol_att;
 if (VAR_9) {
  VAR_7->hp_vol_att = VAR_8;
  if (VAR_7->output_sel) {
   FUNC_0(VAR_6, VAR_0, VAR_8);
   FUNC_0(VAR_6, VAR_1, VAR_8);
  }
 }
 FUNC_2(&VAR_6->mutex);
 return VAR_9;
}
