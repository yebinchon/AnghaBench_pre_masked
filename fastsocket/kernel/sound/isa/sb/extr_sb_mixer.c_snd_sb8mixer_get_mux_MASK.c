
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sb {int mixer_lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;


 struct snd_sb* FUNC_0 (struct snd_kcontrol*) ;
 unsigned char FUNC_1 (struct snd_sb*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_sb *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;
 unsigned char VAR_5;

 FUNC_2(&VAR_3->mixer_lock, VAR_4);
 VAR_5 = FUNC_1(VAR_3, VAR_0);
 FUNC_3(&VAR_3->mixer_lock, VAR_4);
 switch ((VAR_5 >> 0x01) & 0x03) {
 case 129:
  VAR_2->value.enumerated.item[0] = 1;
  break;
 case 128:
  VAR_2->value.enumerated.item[0] = 2;
  break;
 default:
  VAR_2->value.enumerated.item[0] = 0;
  break;
 }
 return 0;
}
