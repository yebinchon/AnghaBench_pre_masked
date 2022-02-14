
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sb {int mixer_lock; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_sb* FUNC_0 (struct snd_kcontrol*) ;
 unsigned char FUNC_1 (struct snd_sb*,int ) ;
 int FUNC_2 (struct snd_sb*,int ,unsigned char) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_sb *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 int VAR_6;
 unsigned char VAR_7, VAR_8;

 if (VAR_3->value.enumerated.item[0] > 2)
  return -VAR_0;
 FUNC_3(&VAR_4->mixer_lock, VAR_5);
 VAR_8 = FUNC_1(VAR_4, VAR_1);

 VAR_7 = (VAR_8 & ~(3 << 6))
      | (VAR_3->value.enumerated.item[0] << 6);
 VAR_6 = VAR_7 != VAR_8;
 if (VAR_6)
  FUNC_2(VAR_4, VAR_1, VAR_7);
 FUNC_4(&VAR_4->mixer_lock, VAR_5);
 return VAR_6;
}
