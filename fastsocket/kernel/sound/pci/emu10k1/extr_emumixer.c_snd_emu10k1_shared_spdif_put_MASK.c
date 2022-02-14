
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {int reg_lock; scalar_t__ port; scalar_t__ audigy; TYPE_3__* card_capabilities; } ;
struct TYPE_4__ {unsigned int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {scalar_t__ i2c_adc; scalar_t__ invert_shared_spdif; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 struct snd_emu10k1* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 unsigned long VAR_6;
 struct snd_emu10k1 *VAR_7 = FUNC_2(VAR_4);
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_10 = VAR_5->value.integer.value[0];
 if (VAR_7->card_capabilities->invert_shared_spdif)
  VAR_10 = !VAR_10;
 FUNC_3(&VAR_7->reg_lock, VAR_6);
 if ( VAR_7->card_capabilities->i2c_adc) {

 } else if (VAR_7->audigy) {
  VAR_8 = FUNC_0(VAR_7->port + VAR_0);
  VAR_9 = VAR_10 ? VAR_1 : 0;
  VAR_11 = (VAR_8 & VAR_1) != VAR_9;
  if (VAR_11) {
   VAR_8 &= ~VAR_1;
   VAR_8 |= VAR_9;
   FUNC_1(VAR_8 | VAR_9, VAR_7->port + VAR_0);
  }
 }
 VAR_8 = FUNC_0(VAR_7->port + VAR_2);
 VAR_9 = VAR_10 ? VAR_3 : 0;
 VAR_11 |= (VAR_8 & VAR_3) != VAR_9;
 if (VAR_11) {
  VAR_8 &= ~VAR_3;
  VAR_8 |= VAR_9;
  FUNC_1(VAR_8 | VAR_9, VAR_7->port + VAR_2);
 }
 FUNC_4(&VAR_7->reg_lock, VAR_6);
 return VAR_11;
}
