
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct emu10k1x {unsigned int* spdif_bits; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct snd_kcontrol*,int *) ;
 int FUNC_1 (struct emu10k1x*,scalar_t__,int ,unsigned int) ;
 struct emu10k1x* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct emu10k1x *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4 = FUNC_0(VAR_1, &VAR_2->id);
 int VAR_5;
 unsigned int VAR_6;

 VAR_6 = (VAR_2->value.iec958.status[0] << 0) |
  (VAR_2->value.iec958.status[1] << 8) |
  (VAR_2->value.iec958.status[2] << 16) |
  (VAR_2->value.iec958.status[3] << 24);
 VAR_5 = VAR_6 != VAR_3->spdif_bits[VAR_4];
 if (VAR_5) {
  FUNC_1(VAR_3, VAR_0 + VAR_4, 0, VAR_6);
  VAR_3->spdif_bits[VAR_4] = VAR_6;
 }
 return VAR_5;
}
