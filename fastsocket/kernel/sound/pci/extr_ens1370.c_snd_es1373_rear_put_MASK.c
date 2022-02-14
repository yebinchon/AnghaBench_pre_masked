
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct ensoniq {unsigned int cssr; int reg_lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct ensoniq*,int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int ) ;
 struct ensoniq* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4,
          struct snd_ctl_elem_value *VAR_5)
{
 struct ensoniq *VAR_6 = FUNC_2(VAR_4);
 unsigned int VAR_7;
 int VAR_8;

 VAR_7 = VAR_5->value.integer.value[0] ?
  VAR_1 : (VAR_2|VAR_0);
 FUNC_3(&VAR_6->reg_lock);
 VAR_8 = (VAR_6->cssr & (VAR_2|
       VAR_1|VAR_0)) != VAR_7;
 VAR_6->cssr &= ~(VAR_2|VAR_1|VAR_0);
 VAR_6->cssr |= VAR_7;
 FUNC_1(VAR_6->cssr, FUNC_0(VAR_6, VAR_3));
 FUNC_4(&VAR_6->reg_lock);
 return VAR_8;
}
