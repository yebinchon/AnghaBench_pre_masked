
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct oxygen {scalar_t__ spdif_pcm_bits; int pcm_active; int mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ctl_elem_value*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oxygen*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct oxygen *VAR_3 = VAR_1->private_data;
 u32 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 FUNC_1(&VAR_3->mutex);
 VAR_5 = VAR_4 != VAR_3->spdif_pcm_bits;
 if (VAR_5) {
  VAR_3->spdif_pcm_bits = VAR_4;
  if (VAR_3->pcm_active & (1 << VAR_0))
   FUNC_3(VAR_3, VAR_4);
 }
 FUNC_2(&VAR_3->mutex);
 return VAR_5;
}
