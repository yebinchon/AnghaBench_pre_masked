
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident {unsigned int spdif_pcm_bits; scalar_t__ device; unsigned int spdif_bits; int reg_lock; int * spdif; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 struct snd_trident* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_value *VAR_4)
{
 struct snd_trident *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = (VAR_4->value.iec958.status[0] << 0) |
       (VAR_4->value.iec958.status[1] << 8) |
       (VAR_4->value.iec958.status[2] << 16) |
       (VAR_4->value.iec958.status[3] << 24);
 FUNC_3(&VAR_5->reg_lock);
 VAR_7 = VAR_5->spdif_pcm_bits != VAR_6;
 VAR_5->spdif_pcm_bits = VAR_6;
 if (VAR_5->spdif != ((void*)0)) {
  if (VAR_5->device != VAR_2) {
   FUNC_1(VAR_5->spdif_pcm_bits, FUNC_0(VAR_5, VAR_0));
  } else {
   FUNC_1(VAR_5->spdif_bits, FUNC_0(VAR_5, VAR_1));
  }
 }
 FUNC_4(&VAR_5->reg_lock);
 return VAR_7;
}
