
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xonar_pcm179x {int hp_gain_offset; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_pcm179x* model_data; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_value *VAR_2)
{
 static const s8 VAR_3[] = { 2*-18, 2*-6, 0 };
 struct oxygen *VAR_4 = VAR_1->private_data;
 struct xonar_pcm179x *VAR_5 = VAR_4->model_data;
 s8 VAR_6;
 int VAR_7;

 if (VAR_2->value.enumerated.item[0] > 2)
  return -VAR_0;
 VAR_6 = VAR_3[VAR_2->value.enumerated.item[0]];
 FUNC_0(&VAR_4->mutex);
 VAR_7 = VAR_6 != VAR_5->hp_gain_offset;
 if (VAR_7) {
  VAR_5->hp_gain_offset = VAR_6;
  FUNC_2(VAR_4);
 }
 FUNC_1(&VAR_4->mutex);
 return VAR_7;
}
