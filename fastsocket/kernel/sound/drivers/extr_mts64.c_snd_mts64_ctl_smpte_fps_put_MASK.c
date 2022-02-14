
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct mts64 {int fps; int lock; } ;


 int VAR_0 ;
 struct mts64* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *VAR_2)
{
 struct mts64 *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;

 if (VAR_2->value.enumerated.item[0] >= 5)
  return -VAR_0;
 FUNC_1(&VAR_3->lock);
 if (VAR_3->fps != VAR_2->value.enumerated.item[0]) {
  VAR_4 = 1;
  VAR_3->fps = VAR_2->value.enumerated.item[0];
 }
 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
