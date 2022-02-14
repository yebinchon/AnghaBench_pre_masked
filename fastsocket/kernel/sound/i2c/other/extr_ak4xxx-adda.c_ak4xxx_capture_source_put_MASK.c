
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_akm4xxx {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct snd_akm4xxx*,int) ;
 unsigned char FUNC_5 (struct snd_akm4xxx*,int,int) ;
 int FUNC_6 (struct snd_akm4xxx*,int,int,unsigned char) ;
 struct snd_akm4xxx* FUNC_7 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct snd_akm4xxx *VAR_3 = FUNC_7(VAR_1);
 int VAR_4 = FUNC_3(VAR_1->private_value);
 int VAR_5 = FUNC_1(VAR_1->private_value);
 int VAR_6 = FUNC_0(VAR_1->private_value);
 int VAR_7 = FUNC_2(VAR_1->private_value);
 unsigned char VAR_8, VAR_9;
 int VAR_10 = FUNC_4(VAR_3, VAR_4);

 if (VAR_2->value.enumerated.item[0] >= VAR_10)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_3, VAR_5, VAR_6);
 VAR_9 = VAR_8 & ~VAR_7;
 VAR_9 |= VAR_2->value.enumerated.item[0] & VAR_7;
 if (VAR_9 != VAR_8) {
  FUNC_6(VAR_3, VAR_5, VAR_6, VAR_9);
  return 1;
 }
 return 0;
}
