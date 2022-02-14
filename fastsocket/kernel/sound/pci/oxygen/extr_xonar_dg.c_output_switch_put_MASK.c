
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct dg* model_data; } ;
struct dg {int output_sel; int* cs4245_regs; int hp_vol_att; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct oxygen*,size_t,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oxygen*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_9,
        struct snd_ctl_elem_value *VAR_10)
{
 struct oxygen *VAR_11 = VAR_9->private_data;
 struct dg *VAR_12 = VAR_11->model_data;
 u8 VAR_13;
 int VAR_14;

 if (VAR_10->value.enumerated.item[0] > 2)
  return -VAR_6;

 FUNC_1(&VAR_11->mutex);
 VAR_14 = VAR_10->value.enumerated.item[0] != VAR_12->output_sel;
 if (VAR_14) {
  VAR_12->output_sel = VAR_10->value.enumerated.item[0];

  VAR_13 = VAR_12->cs4245_regs[VAR_5] &
      ~VAR_2;
  VAR_13 |= VAR_12->output_sel == 2 ?
    VAR_0 : VAR_1;
  FUNC_0(VAR_11, VAR_5, VAR_13);

  FUNC_0(VAR_11, VAR_3,
        VAR_12->output_sel ? VAR_12->hp_vol_att : 0);
  FUNC_0(VAR_11, VAR_4,
        VAR_12->output_sel ? VAR_12->hp_vol_att : 0);

  FUNC_3(VAR_11, VAR_8,
          VAR_12->output_sel == 1 ? VAR_7 : 0,
          VAR_7);
 }
 FUNC_2(&VAR_11->mutex);
 return VAR_14;
}
