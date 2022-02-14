
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int reg_mutex; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct snd_ac97*,int) ;
 int FUNC_3 (struct snd_ac97*,int,unsigned short,unsigned short) ;
 struct snd_ac97* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ac97 *VAR_4 = FUNC_4(VAR_2);
 int VAR_5 = VAR_2->private_value & 0xff;
 int VAR_6 = (VAR_2->private_value >> 8) & 0xff;
 int VAR_7 = (VAR_2->private_value >> 16) & 0xff;

 unsigned short VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = (VAR_3->value.integer.value[0] & VAR_7);

 FUNC_0(&VAR_4->reg_mutex);
 VAR_7 <<= VAR_6;
 VAR_8 <<= VAR_6;
 VAR_9 = FUNC_2(VAR_4, VAR_5);
 VAR_10 = (VAR_9 & ~VAR_7) | VAR_8;
 VAR_11 = VAR_9 != VAR_10;

 if (VAR_11) {
  unsigned short VAR_12 = FUNC_2(VAR_4, VAR_1);
  FUNC_3(VAR_4, VAR_1, VAR_0, 0);
  VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_8);
  if (VAR_12 & VAR_0)
   FUNC_3(VAR_4, VAR_1, VAR_0, VAR_0);
 }
 FUNC_1(&VAR_4->reg_mutex);
 return VAR_11;
}
