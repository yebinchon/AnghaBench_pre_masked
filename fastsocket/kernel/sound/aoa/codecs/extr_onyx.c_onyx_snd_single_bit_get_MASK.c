
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {long private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct onyx {int mutex; } ;


 long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct onyx*,int,int*) ;
 struct onyx* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct onyx *VAR_3 = FUNC_3(VAR_1);
 u8 VAR_4;
 long int VAR_5 = VAR_1->private_value;
 u8 VAR_6 = (VAR_5 >> 16) & VAR_0;
 u8 VAR_7 = (VAR_5 >> 8) & 0xff;
 u8 VAR_8 = VAR_5 & 0xff;

 FUNC_0(&VAR_3->mutex);
 FUNC_2(VAR_3, VAR_7, &VAR_4);
 FUNC_1(&VAR_3->mutex);

 VAR_2->value.integer.value[0] = !!(VAR_4 & VAR_8) ^ VAR_6;

 return 0;
}
