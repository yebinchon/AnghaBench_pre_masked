
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_wm8776 {unsigned int** volumes; } ;
struct snd_maya44 {int mutex; int ice; struct snd_wm8776* wm; } ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct maya_vol_info {unsigned int maxval; unsigned int mute; unsigned int offset; unsigned int update; int mask; int* mux_bits; int * regs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (struct snd_kcontrol*,int *) ;
 struct snd_maya44* FUNC_3 (struct snd_kcontrol*) ;
 struct maya_vol_info* VAR_1 ;
 int FUNC_4 (int ,struct snd_wm8776*,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
   struct snd_ctl_elem_value *VAR_3)
{
 struct snd_maya44 *VAR_4 = FUNC_3(VAR_2);
 struct snd_wm8776 *VAR_5 =
  &VAR_4->wm[FUNC_2(VAR_2, &VAR_3->id)];
 unsigned int VAR_6 = VAR_2->private_value;
 struct maya_vol_info *VAR_7 = &VAR_1[VAR_6];
 unsigned int VAR_8, VAR_9;
 int VAR_10, VAR_11 = 0;

 FUNC_0(&VAR_4->mutex);
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  VAR_8 = VAR_3->value.integer.value[VAR_10];
  if (VAR_8 > VAR_7->maxval)
   VAR_8 = VAR_7->maxval;
  if (VAR_8 == VAR_5->volumes[VAR_6][VAR_10])
   continue;
  if (!VAR_8)
   VAR_9 = VAR_7->mute;
  else
   VAR_9 = (VAR_8 - 1) + VAR_7->offset;
  VAR_9 |= VAR_7->update;
  VAR_11 |= FUNC_4(VAR_4->ice, VAR_5, VAR_7->regs[VAR_10],
          VAR_7->mask | VAR_7->update, VAR_9);
  if (VAR_7->mux_bits[VAR_10])
   FUNC_4(VAR_4->ice, VAR_5, VAR_0,
       VAR_7->mux_bits[VAR_10],
       VAR_8 ? 0 : VAR_7->mux_bits[VAR_10]);
  VAR_5->volumes[VAR_6][VAR_10] = VAR_8;
 }
 FUNC_1(&VAR_4->mutex);
 return VAR_11;
}
