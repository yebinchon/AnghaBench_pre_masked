
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
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 struct snd_sb* FUNC_0 (struct snd_kcontrol*) ;
 unsigned char FUNC_1 (struct snd_sb*,int ) ;
 int FUNC_2 (struct snd_sb*,int ,unsigned char) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_7, struct snd_ctl_elem_value *VAR_8)
{
 struct snd_sb *VAR_9 = FUNC_0(VAR_7);
 unsigned long VAR_10;
 int VAR_11;
 unsigned char VAR_12, VAR_13;

 if (VAR_8->value.enumerated.item[0] > 4)
  return -VAR_0;
 switch (VAR_8->value.enumerated.item[0]) {
 case 0:
  VAR_12 = VAR_2;
  break;
 case 1:
  VAR_12 = VAR_5;
  break;
 case 2:
  VAR_12 = VAR_3;
  break;
 case 3:
  VAR_12 = VAR_6;
  break;
 case 4:
  VAR_12 = VAR_4;
  break;
 default:
  VAR_12 = VAR_4;
 }
 FUNC_3(&VAR_9->mixer_lock, VAR_10);
 VAR_13 = FUNC_1(VAR_9, VAR_1);
 VAR_11 = VAR_12 != VAR_13;
 if (VAR_11)
  FUNC_2(VAR_9, VAR_1, VAR_12);
 FUNC_4(&VAR_9->mixer_lock, VAR_10);
 return VAR_11;
}
