
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,int ) ;
 int FUNC_3 (struct oxygen*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_4,
       struct snd_ctl_elem_value *VAR_5)
{
 struct oxygen *VAR_6 = VAR_4->private_data;
 u16 VAR_7, VAR_8;
 int VAR_9;

 FUNC_0(&VAR_6->mutex);
 VAR_7 = FUNC_2(VAR_6, VAR_3);
 VAR_8 = VAR_7 & ~VAR_2;
 if (VAR_5->value.enumerated.item[0] == 0)
  VAR_8 |= VAR_0;
 else
  VAR_8 |= VAR_1;
 VAR_9 = VAR_8 != VAR_7;
 if (VAR_9)
  FUNC_3(VAR_6, VAR_3, VAR_8);
 FUNC_1(&VAR_6->mutex);
 return VAR_9;
}
