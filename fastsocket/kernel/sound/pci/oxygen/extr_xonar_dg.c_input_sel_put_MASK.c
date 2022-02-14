
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
struct dg {size_t input_sel; int const* cs4245_regs; int ** input_vol; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int const VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct oxygen*,size_t,int const) ;
 int FUNC_1 (struct oxygen*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct oxygen*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_7,
    struct snd_ctl_elem_value *VAR_8)
{
 static const u8 VAR_9[4] = {
  128,
  131,
  130,
  129
 };
 struct oxygen *VAR_10 = VAR_7->private_data;
 struct dg *VAR_11 = VAR_10->model_data;
 int VAR_12;

 if (VAR_8->value.enumerated.item[0] > 3)
  return -VAR_4;

 FUNC_2(&VAR_10->mutex);
 VAR_12 = VAR_8->value.enumerated.item[0] != VAR_11->input_sel;
 if (VAR_12) {
  VAR_11->input_sel = VAR_8->value.enumerated.item[0];

  FUNC_0(VAR_10, VAR_0,
        (VAR_11->cs4245_regs[VAR_0] &
       ~VAR_3) |
        VAR_9[VAR_11->input_sel]);

  FUNC_1(VAR_10, VAR_1,
        VAR_11->input_vol[VAR_11->input_sel][0]);
  FUNC_1(VAR_10, VAR_2,
        VAR_11->input_vol[VAR_11->input_sel][1]);

  FUNC_4(VAR_10, VAR_6,
          VAR_11->input_sel ? 0 : VAR_5,
          VAR_5);
 }
 FUNC_3(&VAR_10->mutex);
 return VAR_12;
}
