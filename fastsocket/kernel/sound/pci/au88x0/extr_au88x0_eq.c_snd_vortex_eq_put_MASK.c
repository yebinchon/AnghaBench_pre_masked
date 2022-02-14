
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vortex_t ;
typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int * FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *,int,scalar_t__*) ;
 int FUNC_2 (int *,int,scalar_t__*) ;
 int FUNC_3 (int *,int,scalar_t__) ;
 int FUNC_4 (int *,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 vortex_t *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0, VAR_4 = VAR_0->private_value;
 u16 VAR_5 = 0, VAR_6 = 0;

 FUNC_1(VAR_2, VAR_4, &VAR_5);
 FUNC_2(VAR_2, VAR_4, &VAR_6);

 if (VAR_5 != VAR_1->value.integer.value[0]) {
  FUNC_3(VAR_2, VAR_4,
      VAR_1->value.integer.value[0]);
  VAR_3 = 1;
 }
 if (VAR_6 != VAR_1->value.integer.value[1]) {
  FUNC_4(VAR_2, VAR_4,
       VAR_1->value.integer.value[1]);
  VAR_3 = 1;
 }
 return VAR_3;
}
