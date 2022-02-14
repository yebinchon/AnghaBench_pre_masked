
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {long private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct onyx {int mutex; scalar_t__ spdif_locked; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct onyx*,int,int*) ;
 int FUNC_3 (struct onyx*,int,int) ;
 struct onyx* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
 struct snd_ctl_elem_value *VAR_4)
{
 struct onyx *VAR_5 = FUNC_4(VAR_3);
 u8 VAR_6 = 0, VAR_7 = 0;
 int VAR_8;
 long int VAR_9 = VAR_3->private_value;
 u8 VAR_10 = (VAR_9 >> 16) & VAR_1;
 u8 VAR_11 = (VAR_9 >> 16) & VAR_2;
 u8 VAR_12 = (VAR_9 >> 8) & 0xff;
 u8 VAR_13 = VAR_9 & 0xff;

 FUNC_0(&VAR_5->mutex);
 if (VAR_11 && VAR_5->spdif_locked) {

  VAR_8 = -VAR_0;
  goto out_unlock;
 }
 FUNC_2(VAR_5, VAR_12, &VAR_6);
 VAR_7 = VAR_6;
 VAR_7 &= ~(VAR_13);
 if (!!VAR_4->value.integer.value[0] ^ VAR_10)
  VAR_7 |= VAR_13;
 VAR_8 = FUNC_3(VAR_5, VAR_12, VAR_7);

 out_unlock:
 FUNC_1(&VAR_5->mutex);

 return !VAR_8 ? (VAR_6 != VAR_7) : VAR_8;
}
