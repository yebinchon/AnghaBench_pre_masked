
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
struct ak4117 {int* regmap; int lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ak4117*,size_t,int) ;
 struct ak4117* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct ak4117 *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 u8 VAR_6;

 FUNC_2(&VAR_4->lock);
 VAR_6 = VAR_4->regmap[VAR_1];
 VAR_5 = !!VAR_3->value.integer.value[0] != ((VAR_6 & VAR_0) ? 1 : 0);
 if (VAR_5)
  FUNC_0(VAR_4, VAR_1, (VAR_6 & ~VAR_0) | (VAR_3->value.integer.value[0] ? VAR_0 : 0));
 FUNC_3(&VAR_4->lock);
 return VAR_5;
}
