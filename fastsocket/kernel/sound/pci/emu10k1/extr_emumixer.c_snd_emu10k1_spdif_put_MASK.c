
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {unsigned int* spdif_bits; int reg_lock; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct snd_kcontrol*,int *) ;
 int FUNC_1 (struct snd_emu10k1*,scalar_t__,int ,unsigned int) ;
 struct snd_emu10k1* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
                                 struct snd_ctl_elem_value *VAR_3)
{
 struct snd_emu10k1 *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5 = FUNC_0(VAR_2, &VAR_3->id);
 int VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;


 if (VAR_5 >= 3)
  return -VAR_0;
 VAR_7 = (VAR_3->value.iec958.status[0] << 0) |
       (VAR_3->value.iec958.status[1] << 8) |
       (VAR_3->value.iec958.status[2] << 16) |
       (VAR_3->value.iec958.status[3] << 24);
 FUNC_3(&VAR_4->reg_lock, VAR_8);
 VAR_6 = VAR_7 != VAR_4->spdif_bits[VAR_5];
 if (VAR_6) {
  FUNC_1(VAR_4, VAR_1 + VAR_5, 0, VAR_7);
  VAR_4->spdif_bits[VAR_5] = VAR_7;
 }
 FUNC_4(&VAR_4->reg_lock, VAR_8);
 return VAR_6;
}
