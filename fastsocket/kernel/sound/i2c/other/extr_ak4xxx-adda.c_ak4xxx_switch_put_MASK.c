
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {long* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_akm4xxx {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned char FUNC_4 (struct snd_akm4xxx*,int,int) ;
 int FUNC_5 (struct snd_akm4xxx*,int,int,unsigned char) ;
 struct snd_akm4xxx* FUNC_6 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_akm4xxx *VAR_2 = FUNC_6(VAR_0);
 int VAR_3 = FUNC_1(VAR_0->private_value);
 int VAR_4 = FUNC_0(VAR_0->private_value);
 int VAR_5 = FUNC_3(VAR_0->private_value);
 int VAR_6 = FUNC_2(VAR_0->private_value);
 long VAR_7 = VAR_1->value.integer.value[0];
 unsigned char VAR_8, VAR_9;
 int VAR_10;

 if (VAR_6)
  VAR_7 = ! VAR_7;
 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  VAR_8 = VAR_9 | (1<<VAR_5);
 else
  VAR_8 = VAR_9 & ~(1<<VAR_5);
 VAR_10 = (VAR_9 != VAR_8);
 if (VAR_10)
  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_8);
 return VAR_10;
}
