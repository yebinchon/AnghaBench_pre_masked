
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct onyx {int mutex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct onyx*,int ,int*) ;
 struct onyx* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3,
 struct snd_ctl_elem_value *VAR_4)
{
 struct onyx *VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6;

 FUNC_0(&VAR_5->mutex);
 FUNC_2(VAR_5, VAR_2, &VAR_6);
 FUNC_1(&VAR_5->mutex);

 VAR_4->value.integer.value[0] =
  (VAR_6 & VAR_1) + VAR_0;

 return 0;
}
